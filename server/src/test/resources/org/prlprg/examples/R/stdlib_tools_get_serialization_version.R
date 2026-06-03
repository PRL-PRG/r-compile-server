#? stdlib
`get_serialization_version` <- function (allfiles) 
{
    getVerLoad <- function(file) {
        con <- gzfile(file, "rb")
        on.exit(close(con))
        tryCatch(.Internal(loadInfoFromConn2(con))$version, error = function(e) 1L)
    }
    getVerSer <- function(file) {
        con <- gzfile(file, "rb")
        on.exit(close(con))
        tryCatch(.Internal(serializeInfoFromConn(con))$version, 
            error = function(e) 0L)
    }
    loadfiles <- grep("[.](rda|RData|Rdata|rdata|Rda|bam|Rbin)$", 
        allfiles, value = TRUE)
    serfiles <- c(grep("[.](rds|RDS|Rds|rdx)$", allfiles, value = TRUE), 
        grep("build/partial[.]rdb$", allfiles, value = TRUE))
    vers1 <- sapply(loadfiles, getVerLoad)
    vers2 <- sapply(serfiles, getVerSer)
    c(vers1, vers2)
}
