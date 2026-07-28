#? stdlib
`selfStart.default` <- function (model, initial, parameters, template) 
{
    structure(as.function(model), initial = as.function(initial), 
        pnames = if (!missing(parameters)) 
            parameters, class = "selfStart")
}
