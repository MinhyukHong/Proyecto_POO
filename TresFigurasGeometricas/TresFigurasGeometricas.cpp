#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

class FiguraGeometrica {
protected:
    string formulaArea;
    string formulaPerimetro;

public:
    FiguraGeometrica(string area, string perimetro) : formulaArea(area), formulaPerimetro(perimetro) {}

    virtual double EncontrarArea() const = 0;

    virtual double EncontrarPerimetro() const = 0;

    void Show() const {
        cout << "Fórmula del área: " << formulaArea << endl;
        cout << "Fórmula del perímetro: " << formulaPerimetro << endl;
    }
};

class Rectangulo : public FiguraGeometrica {
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double h) : FiguraGeometrica("base * altura", "2 * (base + altura)"), base(b), altura(h) {}

    double EncontrarArea() const override {
        return base * altura;
    }

    double EncontrarPerimetro() const override {
        return 2 * (base + altura);
    }
};

class Circulo : public FiguraGeometrica {
private:
    double radio;

public:
    Circulo(double r)
        : FiguraGeometrica("pi * radio * radio", "2 * pi * radio"), radio(r) {}

    double EncontrarArea() const override {
        return PI * radio * radio;
    }

    double EncontrarPerimetro() const override {
        return 2 * PI * radio;
    }
};

class Trapecio : public FiguraGeometrica {
private:
    double baseAbajo;
    double baseArriba;
    double altura;

public:
    Trapecio(double ba, double bA, double h) : FiguraGeometrica("((B + b) / 2) * h", "B + b + 2c"), baseArriba(bA), baseAbajo(ba), altura(h) {}

    double EncontrarArea() const override {
        return ((baseArriba + baseAbajo) / 2) * altura;
    }

    double EncontrarPerimetro() const override {
        return (baseArriba + baseAbajo) + 2 * sqrt(altura * altura + ((baseArriba - baseAbajo) / 2) * ((baseArriba - baseAbajo) / 2));
    }
};

int main() {

    Rectangulo rectangulo(5.0, 10.0);
    cout << "[Rectángulo]" << endl;
    rectangulo.Show();
    cout << "Área: " << rectangulo.EncontrarArea() << endl;
    cout << "Perímetro: " << rectangulo.EncontrarPerimetro() << endl;

    Circulo circulo(4.0);
    cout << "\n[Círculo]" << endl;
    circulo.Show();
    cout << "Área: " << circulo.EncontrarArea() << endl;
    cout << "Perímetro: " << circulo.EncontrarPerimetro() << endl;

    Trapecio trapecio(3.0, 7.0, 4.0);
    cout << "\n[Trapecio]:" << endl;
    trapecio.Show();
    cout << "Área: " << trapecio.EncontrarArea() << endl;
    cout << "Perímetro: " << trapecio.EncontrarPerimetro() << endl;

    return 0;
}
