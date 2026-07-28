#? stdlib
`array2DF` <- function (x, responseName = "Value", sep = "", base = list(LETTERS), 
    simplify = TRUE, allowLong = TRUE) 
{
    .df_helper <- function(x) {
        if (!is.list(x)) 
            return(integer(0))
        if (!all(vapply(x, inherits, TRUE, "data.frame"))) 
            return(integer(0))
        if (length(unique(vapply(x, ncol, 1L))) > 1L) 
            return(integer(0))
        if (length(unique(lapply(x, colnames))) > 1L) 
            return(integer(0))
        return(vapply(x, nrow, 1L))
    }
    .unvec_helper <- function(x) {
        if (!is.list(x)) 
            return(integer(0))
        if (!all(vapply(x, is.atomic, TRUE))) 
            return(integer(0))
        if (!all(vapply(x, function(v) is.null(names(v)), TRUE))) 
            return(integer(0))
        return(vapply(x, length, 1L))
    }
    keys <- do.call(expand.grid, c(dimnames(provideDimnames(x, 
        sep = sep, base = base)), KEEP.OUT.ATTRS = FALSE, stringsAsFactors = FALSE))
    vals <- NULL
    if (simplify) {
        dfrows <- .df_helper(x)
        if (length(dfrows)) 
            return(cbind(keys[rep(seq_along(dfrows), dfrows), 
                , drop = FALSE], do.call(rbind, x)))
        if (allowLong) {
            unvecrows <- .unvec_helper(x)
            if (length(unvecrows)) 
                return(cbind(keys[rep(seq_along(unvecrows), unvecrows), 
                  , drop = FALSE], structure(data.frame(V = do.call(c, 
                  x)), names = responseName)))
        }
        x <- simplify2array(c(x))
        if (is.array(x)) {
            vals <- asplit(x, 1L)
            if (is.null(names(vals))) 
                names(vals) <- paste0(responseName, sep, seq_along(vals))
        }
    }
    if (is.null(vals)) {
        vals <- list(c(x))
        names(vals) <- responseName
    }
    cbind(keys, list2DF(vals))
}

# Examples
s1 <- with(ToothGrowth,
           tapply(len, list(dose, supp), mean, simplify = TRUE))

s2 <- with(ToothGrowth,
           tapply(len, list(dose, supp), mean, simplify = FALSE))

str(s1) # atomic array
str(s2) # list array

str(array2DF(s1, simplify = FALSE)) # Value column is vector
str(array2DF(s2, simplify = FALSE)) # Value column is list
str(array2DF(s2, simplify = TRUE))  # simplified to vector

### The remaining examples use the default 'simplify = TRUE' 

## List array with list components: columns are lists (no simplification)

with(ToothGrowth,
     tapply(len, list(dose, supp),
     function(x) t.test(x)[c("p.value", "alternative")])) |>
  array2DF() |> str()

## List array with data frame components: columns are atomic (simplified)

with(ToothGrowth,
     tapply(len, list(dose, supp),
     function(x) with(t.test(x), data.frame(p.value, alternative)))) |>
  array2DF() |> str()

## named vectors

with(ToothGrowth,
     tapply(len, list(dose, supp),
            quantile)) |> array2DF()

## unnamed vectors: long format

with(ToothGrowth,
     tapply(len, list(dose, supp),
            sample, size = 5)) |> array2DF()

## unnamed vectors: wide format

with(ToothGrowth,
     tapply(len, list(dose, supp),
            sample, size = 5)) |> array2DF(allowLong = FALSE)

## unnamed vectors of unequal length

with(ToothGrowth[-1, ],
     tapply(len, list(dose, supp),
            sample, replace = TRUE)) |>
  array2DF(allowLong = FALSE)

## unnamed vectors of unequal length with allowLong = TRUE
## (within-group bootstrap)

with(ToothGrowth[-1, ],
     tapply(len, list(dose, supp), sample, replace = TRUE)) |>
  array2DF() |> str()

## data frame input

tapply(ToothGrowth, ~ dose + supp, FUN = with,
       data.frame(n = length(len), mean = mean(len), sd = sd(len))) |>
  array2DF()


