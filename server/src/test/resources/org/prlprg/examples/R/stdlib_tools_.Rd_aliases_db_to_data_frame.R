#? stdlib
`.Rd_aliases_db_to_data_frame` <- function (x) 
{
    wrk <- function(a, p) {
        cbind(unlist(a, use.names = FALSE), rep.int(paste0(p, 
            "::", names(a)), lengths(a)))
    }
    y <- as.data.frame(do.call(rbind, Map(wrk, x, names(x))))
    colnames(y) <- c("Alias", "Source")
    y
}
