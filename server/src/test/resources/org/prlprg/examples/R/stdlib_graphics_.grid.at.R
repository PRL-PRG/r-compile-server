#? stdlib
`.grid.at` <- function (side, n, log, equilogs, axp, usr2, nintLog = NULL) 
{
    if (is.null(n)) {
        stopifnot(is.numeric(ax <- axp), length(ax) == 3L)
        if (log && equilogs && ax[3L] > 0) 
            ax[3L] <- 1
        axTicks(side, axp = ax, usr = usr2, log = log, nintLog = nintLog)
    }
    else if (!is.na(n) && (n <- as.integer(n)) >= 1L) {
        at <- seq.int(usr2[1L], usr2[2L], length.out = n + 1L)
        (if (log) 
            10^at
        else at)[-c(1L, n + 1L)]
    }
}
