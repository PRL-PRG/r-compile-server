#? stdlib
`R` <- function (fun, args = list(), opts = "--no-save --no-restore", 
    env = character(), arch = "", drop = TRUE, timeout = 0) 
{
    .safe_repositories <- function() {
        x <- getOption("repos")
        y <- .get_standard_repository_URLs()
        i <- which(names(x) == "CRAN")[1L]
        if (is.na(i) || x[i] == "@CRAN@") 
            x[i] <- y["CRAN"]
        c(x, y[match(names(y), names(x), 0L) == 0L])
    }
    tfi <- normalizePath(tempfile("runri"), winslash = "/", mustWork = FALSE)
    tfo <- normalizePath(tempfile("runro"), winslash = "/", mustWork = FALSE)
    wrk <- c(sprintf("x <- readRDS(\"%s\")", tfi), "options(repos = x$repos)", 
        "y <- tryCatch(list(do.call(x$fun, x$args, quote = TRUE)), error = identity)", 
        sprintf("saveRDS(y, \"%s\")", tfo))
    saveRDS(list(fun = fun, args = args, repos = .safe_repositories()), 
        tfi)
    cmd <- if (.Platform$OS.type == "windows") {
        if (nzchar(arch)) 
            file.path(R.home(), "bin", arch, "Rterm.exe")
        else file.path(R.home("bin"), "Rterm.exe")
    }
    else {
        if (nzchar(arch)) 
            opts <- c(paste0("--arch=", arch), opts)
        file.path(R.home("bin"), "R")
    }
    res <- .system_with_capture(cmd, opts, env, input = wrk, 
        timeout = timeout)
    if (file.exists(tfo)) {
        val <- readRDS(tfo)
        if (inherits(val, "condition")) {
            msg <- paste0("error in inferior call:\n  ", conditionMessage(val))
            stop(do.call(errorCondition, c(list(message = msg, 
                class = "inferiorCallError", value = val), res)))
        }
        else {
            val <- val[[1L]]
            if (drop) 
                val
            else c(list(value = val), res)
        }
    }
    else stop(do.call(errorCondition, c(list(message = "inferior call failed", 
        class = "inferiorCallError"), res = res)))
}

# Examples
## Compute cos(0) in an inferior R process.
## By default, only return the value of the function call.
R(cos, list(0))
## If 'drop = FALSE', we also get status, stdout and stderr.
\dontdiff{
R(cos, list(0), drop = FALSE)
}    

## A call giving an error:
(e <- tryCatch(R(stop, list("FOOBAR")), error = identity))
## The inferior R process ran successfully:
e$status
## The function call gave an error:
e$value

