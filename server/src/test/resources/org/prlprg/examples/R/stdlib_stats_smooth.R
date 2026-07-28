#? stdlib
`smooth` <- function (x, kind = c("3RS3R", "3RSS", "3RSR", "3R", "3", "S"), 
    twiceit = FALSE, endrule = c("Tukey", "copy"), do.ends = FALSE) 
{
    if (!is.numeric(x)) 
        stop("attempt to smooth non-numeric values")
    if (anyNA(x)) 
        stop("attempt to smooth NA values")
    endrule <- match.arg(endrule)
    rules <- c("copy", "Tukey")
    if (is.na(iend <- pmatch(endrule, rules))) 
        stop("invalid 'endrule' argument")
    kind <- match.arg(kind)
    if (startsWith(kind, "3RS") && !do.ends) 
        iend <- -iend
    else if (kind == "S") 
        iend <- as.logical(do.ends)
    type <- match(kind, c("3RS3R", "3RSS", "3RSR", "3R", "3", 
        "S"))
    smo <- .Call(C_Rsm, as.double(x), type, iend)
    if (twiceit) {
        r <- smooth(x - smo$y, kind = kind, twiceit = FALSE, 
            endrule = endrule, do.ends = do.ends)
        smo$y <- smo$y + r
        if (!is.null(smo$iter)) 
            smo$iter <- smo$iter + attr(r, "iter")
        if (!is.null(smo$changed)) 
            smo$changed <- smo$changed || attr(r, "changed")
    }
    if (is.ts(x)) 
        smo$y <- ts(smo$y, start = start(x), frequency = frequency(x))
    structure(smo$y, kind = kind, twiced = twiceit, iter = smo$iter, 
        changed = smo$changed, endrule = if (startsWith(kind, 
            "3")) 
            rules[iend], call = match.call(), class = c("tukeysmooth", 
            if (is.ts(x)) "ts"))
}

# Examples
require(graphics)

## see also   demo(smooth) !

x1 <- c(4, 1, 3, 6, 6, 4, 1, 6, 2, 4, 2) # very artificial
(x3R <- smooth(x1, "3R")) # 2 iterations of "3"
smooth(x3R, kind = "S")

sm.3RS <- function(x, ...)
   smooth(smooth(x, "3R", ...), "S", ...)

y <- c(1, 1, 19:1)
plot(y, main = "misbehaviour of \"3RSR\"", col.main = 3)
lines(sm.3RS(y))
lines(smooth(y))
lines(smooth(y, "3RSR"), col = 3, lwd = 2)  # the horror

x <- c(8:10, 10, 0, 0, 9, 9)
plot(x, main = "breakdown of  3R  and  S  and hence  3RSS")
matlines(cbind(smooth(x, "3R"), smooth(x, "S"), smooth(x, "3RSS"), smooth(x)))

presidents[is.na(presidents)] <- 0 # silly
summary(sm3 <- smooth(presidents, "3R"))
summary(sm2 <- smooth(presidents,"3RSS"))
summary(sm  <- smooth(presidents))

all.equal(c(sm2), c(smooth(smooth(sm3, "S"), "S")))  # 3RSS  === 3R S S
all.equal(c(sm),  c(smooth(smooth(sm3, "S"), "3R"))) # 3RS3R === 3R S 3R

plot(presidents, main = "smooth(presidents0, *) :  3R and default 3RS3R")
lines(sm3, col = 3, lwd = 1.5)
lines(sm, col = 2, lwd = 1.25)

