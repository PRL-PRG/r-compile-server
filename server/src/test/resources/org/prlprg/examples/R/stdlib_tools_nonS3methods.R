#? stdlib
`nonS3methods` <- function (package) 
{
    stopList <- list(base = c("all.equal", "all.names", "all.vars", 
        "as.data.frame.vector", "format.info", "format.pval", 
        "max.col", "qr.Q", "qr.R", "qr.X", "qr.coef", "qr.fitted", 
        "qr.qty", "qr.qy", "qr.resid", "qr.solve", "rep.int", 
        "seq.int", "sort.int", "sort.list"), AMORE = "sim.MLPnet", 
        BSDA = "sign.test", BiocGenerics = "rep.int", ChemometricsWithR = "lda.loofun", 
        ElectoGraph = "plot.wedding.cake", FrF2 = "all.2fis.clear.catlg", 
        GLDEX = c("hist.su", "pretty.su"), Hmisc = c("abs.error.pred", 
            "all.digits", "all.is.numeric", "format.df", "format.pval", 
            "t.test.cluster"), HyperbolicDist = "log.hist", MASS = c("frequency.polygon", 
            "gamma.dispersion", "gamma.shape", "hist.FD", "hist.scott"), 
        LinearizedSVR = "sigma.est", Matrix = c("qr.Q", "qr.R", 
            "qr.coef", "qr.fitted", "qr.qty", "qr.qy", "qr.resid"), 
        PerformanceAnalytics = c("mean.LCL", "mean.UCL", "mean.geometric", 
            "mean.stderr"), RCurl = "merge.list", RNetCDF = c("close.nc", 
            "dim.def.nc", "dim.inq.nc", "dim.rename.nc", "open.nc", 
            "print.nc"), Rmpfr = c("mpfr.is.0", "mpfr.is.integer"), 
        SMPracticals = "exp.gibbs", SparseM = c("as.matrix.csc", 
            "as.matrix.csr", "as.matrix.ssc", "as.matrix.ssr", 
            "as.matrix.coo", "is.matrix.csc", "is.matrix.csr", 
            "is.matrix.ssc", "is.matrix.ssr", "is.matrix.coo"), 
        TANOVA = "sigma.hat", TeachingDemos = "sigma.test", XML = "text.SAX", 
        ape = "sort.index", arm = "sigma.hat", assist = "chol.new", 
        boot = "exp.tilt", car = "scatterplot.matrix", calibrator = "t.fun", 
        clusterfly = "ggobi.som", coda = "as.mcmc.list", crossdes = "all.combn", 
        ctv = "update.views", deSolve = "plot.1D", effects = "all.effects", 
        elliptic = "sigma.laurent", equivalence = "sign.boot", 
        fields = c("qr.q2ty", "qr.yq2"), gbm = c("pretty.gbm.tree", 
            "quantile.rug"), genetics = "diseq.ci", gpclib = "scale.poly", 
        grDevices = "boxplot.stats", graphics = c("close.screen", 
            "plot.design", "plot.new", "plot.window", "plot.xy", 
            "split.screen"), ic.infer = "all.R2", hier.part = "all.regs", 
        lasso2 = "qr.rtr.inv", latticeExtra = "xyplot.list", 
        locfit = c("density.lf", "plot.eval"), moments = c("all.cumulants", 
            "all.moments"), mosaic = "t.test", mratios = c("t.test.ration", 
            "t.test.ratio.default", "t.test.ratio.formula"), 
        ncdf = c("open.ncdf", "close.ncdf", "dim.create.ncdf", 
            "dim.def.ncdf", "dim.inq.ncdf", "dim.same.ncdf"), 
        plyr = c("rbind.fill", "rbind.fill.matrix"), quadprog = c("solve.QP", 
            "solve.QP.compact"), reposTools = "update.packages2", 
        reshape = "all.vars.character", rgeos = "scale.poly", 
        rowr = "cbind.fill", sac = "cumsum.test", sfsmisc = "cumsum.test", 
        sm = "print.graph", spatstat = "lengths.psp", splusTimeDate = "sort.list", 
        splusTimeSeries = "sort.list", stats = c("anova.lmlist", 
            "expand.model.frame", "fitted.values", "influence.measures", 
            "lag.plot", "qr.influence", "t.test", "plot.spec.phase", 
            "plot.spec.coherency"), stremo = "sigma.hat", supclust = c("sign.change", 
            "sign.flip"), tensorA = "chol.tensor", utils = c("close.socket", 
            "flush.console", "update.packages"), wavelets = "plot.dwt.multiple")
    if (is.null(package)) 
        return(unlist(stopList))
    thisPkg <- stopList[[package]]
    if (!length(thisPkg)) 
        character()
    else thisPkg
}
