#? stdlib
`.declareVariables` <- function (def, env) 
{
    utils::globalVariables(c(names(def@fieldClasses), names(def@refMethods), 
        ".self"), env)
}
