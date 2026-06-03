#? stdlib
`getInitial` <- function (object, data, ...) 
UseMethod("getInitial")

# Examples
PurTrt <- Puromycin[ Puromycin$state == "treated", ]
print(getInitial( rate ~ SSmicmen( conc, Vm, K ), PurTrt ), digits = 3)

