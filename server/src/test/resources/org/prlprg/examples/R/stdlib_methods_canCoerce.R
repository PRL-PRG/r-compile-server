#? stdlib
`canCoerce` <- function (object, Class) 
{
    is(object, Class) || !is.null(selectMethod("coerce", c(.class1(object), 
        Class), optional = TRUE, useInherited = c(from = TRUE, 
        to = FALSE)))
}

# Examples
m <- matrix(pi, 2,3)
canCoerce(m, "numeric") # TRUE
canCoerce(m, "array")   # TRUE

