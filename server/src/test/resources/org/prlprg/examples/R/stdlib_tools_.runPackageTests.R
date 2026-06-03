#? stdlib
`.runPackageTests` <- function (use_gct = FALSE, use_valgrind = FALSE, Log = NULL, 
    stop_on_error = TRUE, ...) 
{
    tlim <- Sys.getenv("_R_CHECK_ONE_TEST_ELAPSED_TIMEOUT_", 
        Sys.getenv("_R_CHECK_TESTS_ELAPSED_TIMEOUT_", Sys.getenv("_R_CHECK_ELAPSED_TIMEOUT_")))
    tlim <- get_timeout(tlim)
    if (!is.null(Log)) 
        Log <- file(Log, "wt")
    WINDOWS <- .Platform$OS.type == "windows"
    td0 <- as.numeric(Sys.getenv("_R_CHECK_TIMINGS_"))
    theta <- as.numeric(Sys.getenv("_R_CHECK_TEST_TIMING_CPU_TO_ELAPSED_THRESHOLD_", 
        NA_character_))
    if (is.na(td0)) 
        td0 <- Inf
    print_time <- function(t1, t2, Log) {
        td <- t2 - t1
        if (td[3L] < td0) 
            td2 <- ""
        else {
            td2 <- if (td[3L] > 600) {
                td <- td/60
                if (WINDOWS) 
                  sprintf(" [%dm]", round(td[3L]))
                else sprintf(" [%dm/%dm]", round(sum(td[-3L])), 
                  round(td[3L]))
            }
            else {
                if (WINDOWS) 
                  sprintf(" [%ds]", round(td[3L]))
                else sprintf(" [%ds/%ds]", round(sum(td[-3L])), 
                  round(td[3L]))
            }
        }
        message(td2, domain = NA)
        if (!is.null(Log)) 
            cat(td2, "\n", sep = "", file = Log)
    }
    runone <- function(f) {
        message(gettextf("  Running %s", sQuote(f)), appendLF = FALSE, 
            domain = NA)
        if (!is.null(Log)) 
            cat("  Running ", sQuote(f), sep = "", file = Log)
        outfile <- sub("rout$", "Rout", paste0(f, "out"))
        cmd <- paste(shQuote(file.path(R.home("bin"), "R")), 
            "CMD BATCH --vanilla", if (use_valgrind) 
                "--debugger=valgrind", shQuote(f), shQuote(outfile))
        if (WINDOWS) {
            Sys.setenv(LANGUAGE = "C")
            Sys.setenv(R_TESTS = "startup.Rs")
        }
        else cmd <- paste("LANGUAGE=C", "R_TESTS=startup.Rs", 
            cmd)
        t1 <- proc.time()
        res <- system(cmd, timeout = tlim)
        t2 <- proc.time()
        print_time(t1, t2, Log)
        if (!WINDOWS && !is.na(theta)) {
            td <- t2 - t1
            cpu <- sum(td[-3L])
            if (cpu >= pmax(theta * td[3L], 1)) {
                ratio <- round(cpu/td[3L], 1L)
                msg <- sprintf("Running R code in %s had CPU time %g times elapsed time\n", 
                  sQuote(f), ratio)
                cat(msg)
                if (!is.null(Log)) 
                  cat(msg, file = Log)
            }
        }
        if (res) {
            if (identical(res, 124L)) 
                report_timeout(tlim)
            file.rename(outfile, paste0(outfile, ".fail"))
            return(1L)
        }
        savefile <- paste0(outfile, ".save")
        if (file.exists(savefile)) {
            message(gettextf("  Comparing %s to %s ...", sQuote(outfile), 
                sQuote(savefile)), appendLF = FALSE, domain = NA)
            if (!is.null(Log)) 
                cat("  Comparing ", sQuote(outfile), " to ", 
                  sQuote(savefile), " ...", sep = "", file = Log)
            if (!is.null(Log)) {
                ans <- Rdiff(outfile, savefile, TRUE, Log = TRUE)
                writeLines(ans$out)
                writeLines(ans$out, Log)
                res <- ans$status
            }
            else res <- Rdiff(outfile, savefile, TRUE)
            if (!res) {
                message(" OK")
                if (!is.null(Log)) 
                  cat(" OK\n", file = Log)
            }
        }
        0L
    }
    file.copy(file.path(R.home("share"), "R", "tests-startup.R"), 
        "startup.Rs")
    if (use_gct) 
        cat("gctorture(TRUE)", file = "startup.Rs", append = TRUE)
    nfail <- 0L
    Rinfiles <- dir(".", pattern = "\\.Rin$")
    for (f in Rinfiles) {
        message("  Processing ", sQuote(f), domain = NA)
        if (!is.null(Log)) 
            cat("  Processing ", sQuote(f), "\n", sep = "", file = Log)
        cmd <- paste(shQuote(file.path(R.home("bin"), "R")), 
            "CMD BATCH --no-timing --vanilla --no-echo", shQuote(f))
        if (system(cmd)) {
            nfail <- nfail + 1L
            file.rename(paste0(f, ".Rout"), paste0(f, ".Rout.fail"))
            if (stop_on_error) 
                return(1L)
        }
    }
    Rfiles <- dir(".", pattern = "\\.[rR]$")
    for (f in Rfiles) {
        nfail <- nfail + runone(f)
        if (nfail > 0 && stop_on_error) 
            return(nfail)
    }
    if (!is.null(Log)) 
        close(Log)
    return(nfail)
}
