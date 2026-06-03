#? stdlib
`.preformat.ts` <- function (x, calendar, ...) 
{
    fr.x <- frequency(x)
    if (missing(calendar)) 
        calendar <- any(fr.x == c(4, 12)) && length(start(x)) == 
            2L
    Tsp <- tsp(x)
    if (is.null(Tsp)) 
        stop("series is corrupt, with no 'tsp' attribute")
    nn <- 1 + round((Tsp[2L] - Tsp[1L]) * Tsp[3L])
    if (NROW(x) != nn) {
        warning(gettextf("series is corrupt: length %d with 'tsp' implying %d", 
            NROW(x), nn), domain = NA, call. = FALSE)
        calendar <- FALSE
    }
    if (NCOL(x) == 1) {
        if (calendar) {
            if (fr.x > 1) {
                dn2 <- if (fr.x == 12) 
                  month.abb
                else if (fr.x == 4) {
                  c("Qtr1", "Qtr2", "Qtr3", "Qtr4")
                }
                else paste0("p", 1L:fr.x)
                if (NROW(x) <= fr.x && start(x)[1L] == end(x)[1L]) {
                  dn1 <- start(x)[1L]
                  dn2 <- dn2[1 + (start(x)[2L] - 2 + seq_along(x))%%fr.x]
                  x <- matrix(format(x, ...), nrow = 1L, byrow = TRUE, 
                    dimnames = list(dn1, dn2))
                }
                else {
                  start.pad <- start(x)[2L] - 1
                  end.pad <- fr.x - end(x)[2L]
                  dn1 <- start(x)[1L]:end(x)[1L]
                  x <- matrix(c(rep.int("", start.pad), format(x, 
                    ...), rep.int("", end.pad)), ncol = fr.x, 
                    byrow = TRUE, dimnames = list(dn1, dn2))
                }
            }
            else {
                tx <- time(x)
                attributes(x) <- NULL
                names(x) <- tx
            }
        }
        else {
            attr(x, "class") <- attr(x, "tsp") <- attr(x, "na.action") <- NULL
        }
    }
    else {
        rownames(x) <- if (calendar && fr.x > 1) {
            tm <- time(x)
            t2 <- 1 + round(fr.x * ((tm + 0.001)%%1))
            p1 <- format(floor(zapsmall(tm, digits = 7)))
            if (fr.x == 12) 
                paste(month.abb[t2], p1)
            else paste(p1, if (fr.x == 4) 
                c("Q1", "Q2", "Q3", "Q4")[t2]
            else format(t2))
        }
        else format(time(x))
        attr(x, "class") <- attr(x, "tsp") <- attr(x, "na.action") <- NULL
    }
    x
}
