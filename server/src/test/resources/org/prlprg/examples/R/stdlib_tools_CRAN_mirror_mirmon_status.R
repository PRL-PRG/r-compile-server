#? stdlib
`CRAN_mirror_mirmon_status` <- function () 
{
    fields <- c("url", "age", "status_last_probe", "time_last_successful_probe", 
        "probe_history", "state_history", "last_probe")
    ts_to_POSIXct <- function(ts) {
        suppressWarnings(as.POSIXct(as.numeric(as.character(ts)), 
            origin = "1970-01-01"))
    }
    read_mirmon_state_file <- function(con) {
        db <- utils::read.table(con, header = FALSE, col.names = fields)
        db$url <- as.character(db$url)
        db$age <- ts_to_POSIXct(db$age)
        db$time_last_successful_probe <- ts_to_POSIXct(db$time_last_successful_probe)
        db$last_probe <- ts_to_POSIXct(db$last_probe)
        db$delta <- difftime(Sys.time(), db$age, units = "days")
        db
    }
    state_files <- c(TIME = "mirror.state", `TIME_r-release` = "mirror_release.state", 
        `TIME_r-old-release` = "mirror_old_release.state")
    do.call(rbind, c(Map(function(u, v) {
        u <- paste0("https://cran.r-project.org/mirmon/state/", 
            u)
        cbind(read_mirmon_state_file(u), timestamp = v, stringsAsFactors = FALSE)
    }, state_files, names(state_files)), list(make.row.names = FALSE)))
}
