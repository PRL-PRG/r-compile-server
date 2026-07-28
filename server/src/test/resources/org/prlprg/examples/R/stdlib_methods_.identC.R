#? stdlib
`.identC` <- function (c1 = NULL, c2 = NULL) 
{
    .Call(C_R_identC, c1, c2)
}
