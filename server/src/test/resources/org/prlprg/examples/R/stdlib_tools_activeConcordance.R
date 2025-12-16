#? stdlib
`activeConcordance` <- function (srcfile = NA_character_) 
local({
    lastSrcref <- NULL
    srcLinenum <- integer()
    srcFile <- srcfile
    offset <- 0
    lastText <- ""
    saveSrcref <- function(node) {
        lastSrcref <<- utils::getSrcref(node)
    }
    addToConcordance <- function(text) {
        if (any(nchar(text) > 0)) {
            lastText <<- text
            concordanceUsed <- length(srcLinenum)
            newlines <- sum(nchar(gsub("[^\n]", "", text)))
            srcLine <- utils::getSrcLocation(lastSrcref, "line")
            if (!is.null(srcLine)) {
                if (concordanceUsed) 
                  if (text[1] != "\n") 
                    concordanceUsed <- concordanceUsed - 1
                  else newlines <- newlines - 1
                srcLinenum[concordanceUsed + seq_len(1 + newlines)] <<- srcLine
            }
            else if (!concordanceUsed) 
                offset <<- offset + newlines
        }
    }
    finish <- function() {
        lastText <<- lastText[[length(lastText)]]
        if (length(srcLinenum) && (len <- nchar(lastText)) && 
            substr(lastText, len, len) == "\n") 
            srcLinenum <- srcLinenum[-length(srcLinenum)]
        structure(list(offset = offset, srcLine = srcLinenum, 
            srcFile = srcFile), class = "Rconcordance")
    }
    structure(environment(), class = "activeConcordance")
})
