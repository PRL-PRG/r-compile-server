#? stdlib
`addmargins` <- function (A, margin = seq_along(dim(A)), FUN = sum, quiet = FALSE) 
{
    if (is.null(dim(A))) 
        stop("'A' must be an array or table")
    n.sid <- length(margin)
    miss.FUN <- missing(FUN)
    if (length(FUN) == 1 && !is.list(FUN)) {
        fname <- if (!miss.FUN) 
            deparse1(substitute(FUN))
        else "Sum"
        FUN <- setNames(list(FUN), fname)
    }
    if (!miss.FUN) {
        add.names <- function(thelist) {
            n <- names(thelist) %||% rep("", length(thelist))
            for (i in seq_along(thelist)[-1L]) {
                if (!is.call(thelist[[i]])) {
                  if (n[i] == "") 
                    n[i] <- as.character(thelist[[i]])
                }
                else if (as.character(thelist[[i]][[1L]]) == 
                  "list") 
                  thelist[[i]] <- add.names(thelist[[i]])
            }
            names(thelist) <- n
            thelist
        }
        if (mode(substitute(FUN)) == "call") 
            FUN <- eval.parent(add.names(substitute(FUN)))
        if (is.null(names(FUN))) 
            names(FUN) <- rep("", length(FUN))
    }
    if (length(FUN) != n.sid) {
        if (length(FUN) == 1L) 
            FUN <- rep(FUN, n.sid)
        else stop(gettextf("length of FUN, %d,\n does not match the length of the margins, %d", 
            length(FUN), n.sid), domain = NA)
    }
    fnames <- vector("list", n.sid)
    for (i in seq_along(FUN)) {
        fnames[[i]] <- names(FUN)[i]
        if (is.list(FUN[[i]])) {
            topname <- fnames[[i]]
            fnames[[i]] <- names(FUN[[i]])
            blank <- fnames[[i]] == ""
            fnames[[i]][blank] <- seq_along(blank)[blank]
            if (topname == "") {
                fnames[[i]][blank] <- paste0("Margin ", margin[i], 
                  ".", fnames[[i]][blank])
            }
            else {
                fnames[[i]] <- paste0(topname, ".", fnames[[i]])
            }
        }
        else if (fnames[[i]] == "") 
            fnames[[i]] <- paste("Margin", margin[i])
    }
    expand.one <- function(A, margin, FUN, fnames) {
        if (!inherits(FUN, "list")) 
            FUN <- list(FUN)
        d <- dim(A)
        n.dim <- length(d)
        n.mar <- length(FUN)
        newdim <- d
        newdim[margin] <- newdim[margin] + n.mar
        dnA <- dimnames(A) %||% vector("list", n.dim)
        dnA[[margin]] <- c(dnA[[margin]] %||% rep("", d[[margin]]), 
            fnames)
        n.new <- prod(newdim)
        skip <- prod(d[1L:margin])
        runl <- skip/d[margin]
        apos <- rep(c(rep_len(TRUE, skip), rep_len(FALSE, n.mar * 
            runl)), n.new/(skip + n.mar * runl))
        values <- double(length(apos))
        values[apos] <- as.vector(A)
        for (i in 1L:n.mar) {
            mtab <- if (n.dim > 1) 
                apply(A, (1L:n.dim)[-margin], FUN[[i]])
            else FUN[[i]](A)
            select <- rep_len(FALSE, n.mar)
            select[i] <- TRUE
            mpos <- rep(c(rep_len(FALSE, skip), rep(select, each = runl)), 
                prod(dim(A))/skip)
            values[mpos] <- as.vector(mtab)
        }
        array(values, dim = newdim, dimnames = dnA)
    }
    new.A <- A
    for (i in 1L:n.sid) new.A <- expand.one(A = new.A, margin = margin[i], 
        FUN = FUN[[i]], fnames = fnames[[i]])
    if (inherits(A, "table")) 
        class(new.A) <- c("table", class(new.A))
    if (!quiet && !miss.FUN && n.sid > 1) {
        cat("Margins computed over dimensions\nin the following order:\n")
        for (i in seq_len(n.sid)) cat(paste(i), ": ", names(dimnames(A))[margin[i]], 
            "\n", sep = "")
    }
    new.A
}

# Examples
Aye <- sample(c("Yes", "Si", "Oui"), 177, replace = TRUE)
Bee <- sample(c("Hum", "Buzz"), 177, replace = TRUE)
Sea <- sample(c("White", "Black", "Red", "Dead"), 177, replace = TRUE)
(A <- table(Aye, Bee, Sea))
(aA <- addmargins(A))

stopifnot(is.table(aA))

ftable(A)
ftable(aA)

# Non-commutative functions - note differences between resulting tables:
ftable( addmargins(A, c(3, 1),
                   FUN = list(list(Min = min, Max = max),
                              Sum = sum)))
ftable( addmargins(A, c(1, 3),
                   FUN = list(Sum = sum,
                              list(Min = min, Max = max))))

# Weird function needed to return the N when computing percentages
sqsm <- function(x) sum(x)^2/100
B <- table(Sea, Bee)
round(sweep(addmargins(B, 1, list(list(All = sum, N = sqsm))), 2,
            apply(B, 2, sum)/100, `/`), 1)
round(sweep(addmargins(B, 2, list(list(All = sum, N = sqsm))), 1,
            apply(B, 1, sum)/100, `/`), 1)

# A total over Bee requires formation of the Bee-margin first:
mB <-  addmargins(B, 2, FUN = list(list(Total = sum)))
round(ftable(sweep(addmargins(mB, 1, list(list(All = sum, N = sqsm))), 2,
                   apply(mB, 2, sum)/100, `/`)), 1)

## Zero.Printing table+margins:
set.seed(1)
x <- sample( 1:7, 20, replace = TRUE)
y <- sample( 1:7, 20, replace = TRUE)
tx <- addmargins( table(x, y) )
print(tx, zero.print = ".")

