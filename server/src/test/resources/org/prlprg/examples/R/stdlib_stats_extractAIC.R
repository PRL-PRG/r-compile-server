#? stdlib
`extractAIC` <- function (fit, scale, k = 2, ...) 
UseMethod("extractAIC")

# Examples\donttest{
utils::example(glm)
extractAIC(glm.D93)  #>>  5  15.129
}
