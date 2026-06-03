#? stdlib
`.initialize.argdb` <- function () 
{
    lattice.common <- c("data", "allow.multiple", "outer", "auto.key", 
        "aspect", "panel", "prepanel", "scales", "strip", "groups", 
        "xlab", "xlim", "ylab", "ylim", "drop.unused.levels", 
        "...", "default.scales", "subscripts", "subset", "formula", 
        "cond", "aspect", "as.table", "between", "key", "legend", 
        "page", "main", "sub", "par.strip.text", "layout", "skip", 
        "strip", "strip.left", "xlab.default", "ylab.default", 
        "xlab", "ylab", "panel", "xscale.components", "yscale.components", 
        "axis", "index.cond", "perm.cond", "...", "par.settings", 
        "plot.args", "lattice.options")
    densityplot <- c("plot.points", "ref", "groups", "jitter.amount", 
        "bw", "adjust", "kernel", "weights", "window", "width", 
        "give.Rkern", "n", "from", "to", "cut", "na.rm")
    panel.xyplot <- c("type", "groups", "pch", "col", "col.line", 
        "col.symbol", "font", "fontfamily", "fontface", "lty", 
        "cex", "fill", "lwd", "horizontal")
    .addFunctionInfo(xyplot.formula = c(lattice.common, panel.xyplot), 
        densityplot.formula = c(lattice.common, densityplot))
    grid.clip <- c("x", "y", "width", "height", "just", "hjust", 
        "vjust", "default.units", "name", "vp")
    grid.curve <- c("x1", "y1", "x2", "y2", "default.units", 
        "curvature", "angle", "ncp", "shape", "square", "squareShape", 
        "inflect", "arrow", "open", "debug", "name", "gp", "vp")
    grid.polyline <- c("x", "y", "id", "id.lengths", "default.units", 
        "arrow", "name", "gp", "vp")
    grid.xspline <- c("x", "y", "id", "id.lengths", "default.units", 
        "shape", "open", "arrow", "repEnds", "name", "gp", "vp")
    .addFunctionInfo(grid.clip = grid.clip, grid.curve = grid.curve, 
        grid.polyline = grid.polyline, grid.xspline = grid.xspline)
    par <- c("xlog", "ylog", "adj", "ann", "ask", "bg", "bty", 
        "cex", "cex.axis", "cex.lab", "cex.main", "cex.sub", 
        "cin", "col", "col.axis", "col.lab", "col.main", "col.sub", 
        "cra", "crt", "csi", "cxy", "din", "err", "family", "fg", 
        "fig", "fin", "font", "font.axis", "font.lab", "font.main", 
        "font.sub", "gamma", "lab", "las", "lend", "lheight", 
        "ljoin", "lmitre", "lty", "lwd", "mai", "mar", "mex", 
        "mfcol", "mfg", "mfrow", "mgp", "mkh", "new", "oma", 
        "omd", "omi", "pch", "pin", "plt", "ps", "pty", "smo", 
        "srt", "tck", "tcl", "usr", "xaxp", "xaxs", "xaxt", "xpd", 
        "yaxp", "yaxs", "yaxt", "page", "ylbias")
    options <- unique(c(names(.Options), "bitmapType", "citation.bibtex.max", 
        "contrasts", "demo.ask", "device", "device.ask.default", 
        "editor", "example.ask", "help.search.types", "help.try.all.packages", 
        "HTTPUserAgent", "internet.info", "locatorBell", "mailer", 
        "menu.graphics", "na.action", "pkgType", "repos", "show.coef.Pvalues", 
        "show.signif.stars", "str", "str.dendrogram.last", "ts.eps", 
        "ts.S.compat", "unzip", "windowsTimeout", "mc.cores", 
        "dvipscmd", "warn.FPU", "askYesNo", "BioC_mirror", "ccaddress", 
        "checkPackageLicense", "conflicts.policy", "de.cellwidth", 
        "deparse.max.lines", "digits.secs", "download.file.extra", 
        "download.file.method", "error", "help.htmlmath", "help.htmltoc", 
        "help.ports", "help_type", "install.lock", "install.packages.check.source", 
        "install.packages.compile.from.source", "interrupt", 
        "Ncpus", "save.defaults", "save.image.defaults", "setWidthOnResize", 
        "show.error.locations", "show.nls.convergence", "SweaveHooks", 
        "SweaveSyntax", "topLevelEnvironment", "traceback.max.lines", 
        "url.method", "warning.expression"))
    .addFunctionInfo(par = par, options = options)
    readTable <- c("file", "header", "sep", "quote", "dec", "numerals", 
        "row.names", "col.names", "as.is", "na.strings", "colClasses", 
        "nrows", "skip", "check.names", "fill", "strip.white", 
        "blank.lines.skip", "comment.char", "allowEscapes", "flush", 
        "stringsAsFactors", "fileEncoding", "encoding", "text", 
        "skipNul")
    .addFunctionInfo(read.csv = readTable, read.csv2 = readTable, 
        read.delim = readTable, read.delim2 = readTable)
    .addFunctionInfo(c = c("recursive", "use.names"))
}
