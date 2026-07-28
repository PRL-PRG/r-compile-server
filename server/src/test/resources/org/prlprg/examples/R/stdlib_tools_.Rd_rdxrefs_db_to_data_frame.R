#? stdlib
`.Rd_rdxrefs_db_to_data_frame` <- function (x) 
{
    wrk <- function(u, p) {
        u$Source <- sprintf("%s::%s", p, u$Source)
        u
    }
    do.call(rbind, Map(wrk, lapply(x, as.data.frame), names(x)))
}
