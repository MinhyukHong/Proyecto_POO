verifySpacing isbn
    | ' ' `elem` isbn = 1
    | '-' `elem` isbn = 2
    | otherwise = 0

removeSpaces isbn spaced
    | spaced == 1 = filter (/= ' ') isbn
    | spaced == 2 = filter (/= '-') isbn
    | otherwise = isbn

fromSTRtoINT val isbn
    | val == '0' = 0:isbn
    | val == '1' = 1:isbn
    | val == '2' = 2:isbn
    | val == '3' = 3:isbn
    | val == '4' = 4:isbn
    | val == '5' = 5:isbn
    | val == '6' = 6:isbn
    | val == '7' = 7:isbn
    | val == '8' = 8:isbn
    | val == '9' = 9:isbn
    | val == 'X' = 10:isbn

addToINTarr isbn newISBN =
    if length isbn == 1
        then fromSTRtoINT (last isbn) newISBN
    else addToINTarr (init isbn) (fromSTRtoINT (last isbn) newISBN)

generaISBN isbn = addToINTarr (removeSpaces isbn (verifySpacing isbn)) []

--curriedAppliesWeight: zipWith multiplica todos los elementos de ISBN con el respectivo valor en el array
--[10,9..1] y los guarda en un array de tuplas.
curriedAppliesWeight isbn = zipWith (*) isbn [10,9..1]

verifyISBN isbn =
    mod (sum (curriedAppliesWeight isbn)) 11 == 0

isbnChecker isbn = verifyISBN (generaISBN isbn)