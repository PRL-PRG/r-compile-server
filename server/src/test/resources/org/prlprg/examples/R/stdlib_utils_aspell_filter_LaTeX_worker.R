#? stdlib
`aspell_filter_LaTeX_worker` <- function (x, vrbs = c("verbatim", "verbatim*", "Sinput", "Soutput"), 
    cmds = NULL, envs = NULL) 
{
    ranges <- list()
    chrran <- function(e) getSrcref(e)[c(1L, 5L, 3L, 6L)]
    ltxtag <- function(e) {
        tag <- attr(e, "latex_tag")
        if (is.null(tag)) 
            "NULL"
        else tag
    }
    if (length(cmds)) {
        cmds <- c(cmds, aspell_filter_LaTeX_commands)
        cmds <- strsplit(trimws(cmds), " +")
        ones <- vapply(cmds, `[[`, "", 1L)
        twos <- vapply(cmds, `[[`, "", 2L)
        cmds <- lapply(strsplit(gsub("[^pP]", "", twos), ""), 
            function(e) which(e == "p"))
        names(cmds) <- paste0("\\", ones)
    }
    recurse <- function(e) {
        tag <- ltxtag(e)
        if ((tag == "VERB") || ((tag == "ENVIRONMENT") && e[[1L]] %in% 
            envs)) 
            ranges <<- c(ranges, list(chrran(e)))
        else if (is.list(e)) {
            if (length(cmds)) {
                skip <- integer()
                tags <- vapply(e, ltxtag, "")
                mpos <- which(tags == "MACRO")
                mpos <- mpos[vapply(e[mpos], `[[`, "", 1L) %in% 
                  names(cmds)]
                if (length(mpos)) {
                  bpos <- which(tags == "BLOCK")
                  for (m in mpos) {
                    skip <- c(skip, bpos[bpos > m][cmds[[e[[m]][[1L]]]]])
                  }
                  for (s in skip) {
                    ran <- chrran(e[[s]])
                    ran[2L] <- ran[2L] + 1L
                    ran[4L] <- ran[4L] - 1L
                    ranges <<- c(ranges, list(ran))
                  }
                  e <- e[-skip]
                }
            }
            lapply(e, recurse)
        }
    }
    recurse(tools::parseLatex(x, verbatim = vrbs))
    blank_out_character_ranges(x, ranges)
}
