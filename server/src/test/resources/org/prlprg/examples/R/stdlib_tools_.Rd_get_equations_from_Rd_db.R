#? stdlib
`.Rd_get_equations_from_Rd_db` <- function (x) 
{
    if (!length(x)) 
        return(matrix(character(), 0L, 6L))
    m <- lapply(x, .Rd_get_equations_from_Rd)
    cbind(rep.int(names(m), vapply(m, nrow, 0L)), do.call(rbind, 
        m))
}
