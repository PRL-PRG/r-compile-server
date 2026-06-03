#? stdlib
`toTitleCase` <- function (text) 
{
    alone <- c("2D", "3D", "AIC", "BayesX", "GoF", "HTML", "LaTeX", 
        "MonetDB", "OpenBUGS", "TeX", "U.S.", "U.S.A.", "WinBUGS", 
        "aka", "et", "al.", "ggplot2", "i.e.", "jar", "jars", 
        "ncdf", "netCDF", "rgl", "rpart", "xls", "xlsx")
    lpat <- "^(a|an|and|are|as|at|be|but|by|en|for|if|in|is|nor|not|of|on|or|per|so|the|to|v[.]?|via|vs[.]?|from|into|than|that|with)$"
    either <- c("all", "above", "after", "along", "also", "among", 
        "any", "both", "can", "few", "it", "less", "log", "many", 
        "may", "more", "over", "some", "their", "then", "this", 
        "under", "until", "using", "von", "when", "where", "which", 
        "will", "without", "yet", "you", "your")
    titleCase1 <- function(x) {
        do1 <- function(x) {
            x1 <- substr(x, 1L, 1L)
            if (nchar(x) >= 3L && x1 %in% c("'", "\"")) 
                paste0(x1, toupper(substr(x, 2L, 2L)), tolower(substring(x, 
                  3L)))
            else paste0(toupper(x1), tolower(substring(x, 2L)))
        }
        if (is.na(x)) 
            return(NA_character_)
        xx <- .Call(C_splitString, x, " -/\"()\n\t")
        alone <- xx %in% c(alone, either)
        alone <- alone | grepl("^'.*'$", xx)
        havecaps <- grepl("^[[:alpha:]].*[[:upper:]]+", xx)
        l <- grepl(lpat, xx, ignore.case = TRUE)
        l[1L] <- FALSE
        ind <- grep("[-:]$", xx)
        ind <- ind[ind + 2L <= length(l)]
        ind <- ind[(xx[ind + 1L] == " ") & grepl("^['[:alnum:]]", 
            xx[ind + 2L])]
        ind <- ind[!(xx[ind] == "-" & grepl(lpat, xx[ind + 2L]))]
        l[ind + 2L] <- FALSE
        ind <- which(xx == "\"")
        ind <- ind[ind + 1L <= length(l)]
        l[ind + 1L] <- FALSE
        xx[l] <- tolower(xx[l])
        keep <- havecaps | l | (nchar(xx) == 1L) | alone
        xx[!keep] <- vapply(xx[!keep], do1, "<chr>")
        paste(xx, collapse = "")
    }
    if (typeof(text) != "character") 
        stop("'text' must be a character vector")
    vapply(text, titleCase1, "<chr>", USE.NAMES = FALSE)
}

# Examples
toTitleCase("bayesian network modeling and analysis")
toTitleCase("ensemble tool for predictions from species distribution models")
## Treatment after "-":
toTitleCase("small- and large-scale analysis") # lowercase "and"

toTitleCase("a small fox is jumping")    # "a Small Fox is .."     (the 'a' may change)% i.e. BUG
toTitleCase("is a small fox jumping?")   # "Is a Small Fox .."     (fine)
## After ":", start a new sentence
toTitleCase("a pangram: the quick brown fox jumps over the lazy dog")
toTitleCase("asking -- 'is a small fox jumping?'") # ".. -- Is a Small ..."     (fine)

