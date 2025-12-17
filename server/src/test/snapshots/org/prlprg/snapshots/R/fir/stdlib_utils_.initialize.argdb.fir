fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.initialize.argdb` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg c2:cls, reg r8:V, reg _addFunctionInfo:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg lattice_common:*, reg lattice_common1:V, reg panel_xyplot:*, reg panel_xyplot1:V, reg c3:cls, reg r11:V, reg p:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg lattice_common2:*, reg lattice_common3:V, reg densityplot:*, reg densityplot1:V, reg c4:cls, reg r15:V, reg p1:p(V +), reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg c5:cls, reg r20:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r21:V, reg r22:V, reg c6:cls, reg r23:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r24:V, reg r25:V, reg c7:cls, reg r26:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r27:V, reg r28:V, reg c8:cls, reg r29:V, reg _addFunctionInfo1:cls, reg grid_clip:*, reg grid_clip1:V, reg p2:p(V +), reg grid_curve:*, reg grid_curve1:V, reg p3:p(V +), reg grid_polyline:*, reg grid_polyline1:V, reg p4:p(V +), reg grid_xspline:*, reg grid_xspline1:V, reg p5:p(V +), reg r34:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r35:V, reg r36:V, reg c9:cls, reg r37:V, reg unique:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r38:V, reg r39:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r40:V, reg r41:V, reg _Options:*, reg _Options1:V, reg names:cls, reg r42:V, reg c10:cls, reg r43:V, reg p6:p(V +), reg r45:V, reg _addFunctionInfo2:cls, reg par:*, reg par1:V, reg p7:p(V +), reg options:*, reg options1:V, reg p8:p(V +), reg r48:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r49:V, reg r50:V, reg c11:cls, reg r51:V, reg _addFunctionInfo3:cls, reg readTable:*, reg readTable1:V, reg p9:p(V +), reg readTable2:*, reg readTable3:V, reg p10:p(V +), reg readTable4:*, reg readTable5:V, reg p11:p(V +), reg readTable6:*, reg readTable7:V, reg p12:p(V +), reg r56:V, reg _addFunctionInfo4:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r57:V, reg r58:V, reg c12:cls, reg r59:V, reg p13:p(V +), reg r61:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    st `lattice.common` = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L9():
    c = ldf c in base;
    r2 = dyn c("data", "allow.multiple", "outer", "auto.key", "aspect", "panel", "prepanel", "scales", "strip", "groups", "xlab", "xlim", "ylab", "ylim", "drop.unused.levels", "...", "default.scales", "subscripts", "subset", "formula", "cond", "aspect", "as.table", "between", "key", "legend", "page", "main", "sub", "par.strip.text", "layout", "skip", "strip", "strip.left", "xlab.default", "ylab.default", "xlab", "ylab", "panel", "xscale.components", "yscale.components", "axis", "index.cond", "perm.cond", "...", "par.settings", "plot.args", "lattice.options");
    check L11() else D0();
  L10():
    r = dyn base("data", "allow.multiple", "outer", "auto.key", "aspect", "panel", "prepanel", "scales", "strip", "groups", "xlab", "xlim", "ylab", "ylim", "drop.unused.levels", "...", "default.scales", "subscripts", "subset", "formula", "cond", "aspect", "as.table", "between", "key", "legend", "page", "main", "sub", "par.strip.text", "layout", "skip", "strip", "strip.left", "xlab.default", "ylab.default", "xlab", "ylab", "panel", "xscale.components", "yscale.components", "axis", "index.cond", "perm.cond", "...", "par.settings", "plot.args", "lattice.options");
    goto L0(r);
  D0():
    deopt 51 [r2];
  L1(r4):
    st densityplot = r4;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L11():
    goto L0(r2);
  L12():
    c1 = ldf c in base;
    r5 = dyn c1("plot.points", "ref", "groups", "jitter.amount", "bw", "adjust", "kernel", "weights", "window", "width", "give.Rkern", "n", "from", "to", "cut", "na.rm");
    check L14() else D1();
  L13():
    r3 = dyn base1("plot.points", "ref", "groups", "jitter.amount", "bw", "adjust", "kernel", "weights", "window", "width", "give.Rkern", "n", "from", "to", "cut", "na.rm");
    goto L1(r3);
  D1():
    deopt 72 [r5];
  L2(r7):
    st `panel.xyplot` = r7;
    _addFunctionInfo = ldf `.addFunctionInfo`;
    check L18() else D3();
  L14():
    goto L1(r5);
  L15():
    c2 = ldf c in base;
    r8 = dyn c2("type", "groups", "pch", "col", "col.line", "col.symbol", "font", "fontfamily", "fontface", "lty", "cex", "fill", "lwd", "horizontal");
    check L17() else D2();
  L16():
    r6 = dyn base2("type", "groups", "pch", "col", "col.line", "col.symbol", "font", "fontfamily", "fontface", "lty", "cex", "fill", "lwd", "horizontal");
    goto L2(r6);
  D2():
    deopt 91 [r8];
  D3():
    deopt 94 [];
  L17():
    goto L2(r8);
  L18():
    p = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      lattice_common = ld `lattice.common`;
      lattice_common1 = force? lattice_common;
      checkMissing(lattice_common1);
      panel_xyplot = ld `panel.xyplot`;
      panel_xyplot1 = force? panel_xyplot;
      checkMissing(panel_xyplot1);
      c3 = ldf c in base;
      r11 = dyn c3(lattice_common1, panel_xyplot1);
      goto L0(r11);
    L2():
      r9 = dyn base3(<sym lattice.common>, <sym panel.xyplot>);
      goto L0(r9);
    };
    p1 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      lattice_common2 = ld `lattice.common`;
      lattice_common3 = force? lattice_common2;
      checkMissing(lattice_common3);
      densityplot = ld densityplot;
      densityplot1 = force? densityplot;
      checkMissing(densityplot1);
      c4 = ldf c in base;
      r15 = dyn c4(lattice_common3, densityplot1);
      goto L0(r15);
    L2():
      r13 = dyn base4(<sym lattice.common>, <sym densityplot>);
      goto L0(r13);
    };
    r17 = dyn _addFunctionInfo[`xyplot.formula`, `densityplot.formula`](p, p1);
    check L19() else D4();
  D4():
    deopt 99 [r17];
  L19():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L20() else L21();
  L3(r19):
    st `grid.clip` = r19;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L23() else L24();
  L20():
    c5 = ldf c in base;
    r20 = dyn c5("x", "y", "width", "height", "just", "hjust", "vjust", "default.units", "name", "vp");
    check L22() else D5();
  L21():
    r18 = dyn base5("x", "y", "width", "height", "just", "hjust", "vjust", "default.units", "name", "vp");
    goto L3(r18);
  D5():
    deopt 113 [r20];
  L4(r22):
    st `grid.curve` = r22;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L26() else L27();
  L22():
    goto L3(r20);
  L23():
    c6 = ldf c in base;
    r23 = dyn c6("x1", "y1", "x2", "y2", "default.units", "curvature", "angle", "ncp", "shape", "square", "squareShape", "inflect", "arrow", "open", "debug", "name", "gp", "vp");
    check L25() else D6();
  L24():
    r21 = dyn base6("x1", "y1", "x2", "y2", "default.units", "curvature", "angle", "ncp", "shape", "square", "squareShape", "inflect", "arrow", "open", "debug", "name", "gp", "vp");
    goto L4(r21);
  D6():
    deopt 136 [r23];
  L5(r25):
    st `grid.polyline` = r25;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L29() else L30();
  L25():
    goto L4(r23);
  L26():
    c7 = ldf c in base;
    r26 = dyn c7("x", "y", "id", "id.lengths", "default.units", "arrow", "name", "gp", "vp");
    check L28() else D7();
  L27():
    r24 = dyn base7("x", "y", "id", "id.lengths", "default.units", "arrow", "name", "gp", "vp");
    goto L5(r24);
  D7():
    deopt 150 [r26];
  L6(r28):
    st `grid.xspline` = r28;
    _addFunctionInfo1 = ldf `.addFunctionInfo`;
    check L32() else D9();
  L28():
    goto L5(r26);
  L29():
    c8 = ldf c in base;
    r29 = dyn c8("x", "y", "id", "id.lengths", "default.units", "shape", "open", "arrow", "repEnds", "name", "gp", "vp");
    check L31() else D8();
  L30():
    r27 = dyn base8("x", "y", "id", "id.lengths", "default.units", "shape", "open", "arrow", "repEnds", "name", "gp", "vp");
    goto L6(r27);
  D8():
    deopt 167 [r29];
  D9():
    deopt 170 [];
  L31():
    goto L6(r29);
  L32():
    p2 = prom<V +>{
      grid_clip = ld `grid.clip`;
      grid_clip1 = force? grid_clip;
      checkMissing(grid_clip1);
      return grid_clip1;
    };
    p3 = prom<V +>{
      grid_curve = ld `grid.curve`;
      grid_curve1 = force? grid_curve;
      checkMissing(grid_curve1);
      return grid_curve1;
    };
    p4 = prom<V +>{
      grid_polyline = ld `grid.polyline`;
      grid_polyline1 = force? grid_polyline;
      checkMissing(grid_polyline1);
      return grid_polyline1;
    };
    p5 = prom<V +>{
      grid_xspline = ld `grid.xspline`;
      grid_xspline1 = force? grid_xspline;
      checkMissing(grid_xspline1);
      return grid_xspline1;
    };
    r34 = dyn _addFunctionInfo1[`grid.clip`, `grid.curve`, `grid.polyline`, `grid.xspline`](p2, p3, p4, p5);
    check L33() else D10();
  D10():
    deopt 179 [r34];
  L33():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L34() else L35();
  L7(r36):
    st par = r36;
    unique = ldf unique;
    check L37() else D12();
  L34():
    c9 = ldf c in base;
    r37 = dyn c9("xlog", "ylog", "adj", "ann", "ask", "bg", "bty", "cex", "cex.axis", "cex.lab", "cex.main", "cex.sub", "cin", "col", "col.axis", "col.lab", "col.main", "col.sub", "cra", "crt", "csi", "cxy", "din", "err", "family", "fg", "fig", "fin", "font", "font.axis", "font.lab", "font.main", "font.sub", "gamma", "lab", "las", "lend", "lheight", "ljoin", "lmitre", "lty", "lwd", "mai", "mar", "mex", "mfcol", "mfg", "mfrow", "mgp", "mkh", "new", "oma", "omd", "omi", "pch", "pin", "plt", "ps", "pty", "smo", "srt", "tck", "tcl", "usr", "xaxp", "xaxs", "xaxt", "xpd", "yaxp", "yaxs", "yaxt", "page", "ylbias");
    check L36() else D11();
  L35():
    r35 = dyn base9("xlog", "ylog", "adj", "ann", "ask", "bg", "bty", "cex", "cex.axis", "cex.lab", "cex.main", "cex.sub", "cin", "col", "col.axis", "col.lab", "col.main", "col.sub", "cra", "crt", "csi", "cxy", "din", "err", "family", "fg", "fig", "fin", "font", "font.axis", "font.lab", "font.main", "font.sub", "gamma", "lab", "las", "lend", "lheight", "ljoin", "lmitre", "lty", "lwd", "mai", "mar", "mex", "mfcol", "mfg", "mfrow", "mgp", "mkh", "new", "oma", "omd", "omi", "pch", "pin", "plt", "ps", "pty", "smo", "srt", "tck", "tcl", "usr", "xaxp", "xaxs", "xaxt", "xpd", "yaxp", "yaxs", "yaxt", "page", "ylbias");
    goto L7(r35);
  D11():
    deopt 256 [r37];
  D12():
    deopt 259 [];
  L36():
    goto L7(r37);
  L37():
    p6 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r39):
      return r39;
    L2():
      sym11 = ldf names;
      base11 = ldf names in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L4() else L5();
    L3():
      r38 = dyn base10(<lang names(.Options)>, "bitmapType", "citation.bibtex.max", "contrasts", "demo.ask", "device", "device.ask.default", "editor", "example.ask", "help.search.types", "help.try.all.packages", "HTTPUserAgent", "internet.info", "locatorBell", "mailer", "menu.graphics", "na.action", "pkgType", "repos", "show.coef.Pvalues", "show.signif.stars", "str", "str.dendrogram.last", "ts.eps", "ts.S.compat", "unzip", "windowsTimeout", "mc.cores", "dvipscmd", "warn.FPU", "askYesNo", "BioC_mirror", "ccaddress", "checkPackageLicense", "conflicts.policy", "de.cellwidth", "deparse.max.lines", "digits.secs", "download.file.extra", "download.file.method", "error", "help.htmlmath", "help.htmltoc", "help.ports", "help_type", "install.lock", "install.packages.check.source", "install.packages.compile.from.source", "interrupt", "Ncpus", "save.defaults", "save.image.defaults", "setWidthOnResize", "show.error.locations", "show.nls.convergence", "SweaveHooks", "SweaveSyntax", "topLevelEnvironment", "traceback.max.lines", "url.method", "warning.expression");
      goto L0(r38);
    L1(r41):
      c10 = ldf c in base;
      r43 = dyn c10(r41, "bitmapType", "citation.bibtex.max", "contrasts", "demo.ask", "device", "device.ask.default", "editor", "example.ask", "help.search.types", "help.try.all.packages", "HTTPUserAgent", "internet.info", "locatorBell", "mailer", "menu.graphics", "na.action", "pkgType", "repos", "show.coef.Pvalues", "show.signif.stars", "str", "str.dendrogram.last", "ts.eps", "ts.S.compat", "unzip", "windowsTimeout", "mc.cores", "dvipscmd", "warn.FPU", "askYesNo", "BioC_mirror", "ccaddress", "checkPackageLicense", "conflicts.policy", "de.cellwidth", "deparse.max.lines", "digits.secs", "download.file.extra", "download.file.method", "error", "help.htmlmath", "help.htmltoc", "help.ports", "help_type", "install.lock", "install.packages.check.source", "install.packages.compile.from.source", "interrupt", "Ncpus", "save.defaults", "save.image.defaults", "setWidthOnResize", "show.error.locations", "show.nls.convergence", "SweaveHooks", "SweaveSyntax", "topLevelEnvironment", "traceback.max.lines", "url.method", "warning.expression");
      goto L0(r43);
    L4():
      _Options = ld `.Options`;
      _Options1 = force? _Options;
      checkMissing(_Options1);
      names = ldf names in base;
      r42 = dyn names(_Options1);
      goto L1(r42);
    L5():
      r40 = dyn base11(<sym .Options>);
      goto L1(r40);
    };
    r45 = dyn unique(p6);
    check L38() else D13();
  D13():
    deopt 261 [r45];
  L38():
    st options = r45;
    _addFunctionInfo2 = ldf `.addFunctionInfo`;
    check L39() else D14();
  D14():
    deopt 264 [];
  L39():
    p7 = prom<V +>{
      par = ld par;
      par1 = force? par;
      checkMissing(par1);
      return par1;
    };
    p8 = prom<V +>{
      options = ld options;
      options1 = force? options;
      checkMissing(options1);
      return options1;
    };
    r48 = dyn _addFunctionInfo2[par, options](p7, p8);
    check L40() else D15();
  D15():
    deopt 269 [r48];
  L40():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L41() else L42();
  L8(r50):
    st readTable = r50;
    _addFunctionInfo3 = ldf `.addFunctionInfo`;
    check L44() else D17();
  L41():
    c11 = ldf c in base;
    r51 = dyn c11("file", "header", "sep", "quote", "dec", "numerals", "row.names", "col.names", "as.is", "na.strings", "colClasses", "nrows", "skip", "check.names", "fill", "strip.white", "blank.lines.skip", "comment.char", "allowEscapes", "flush", "stringsAsFactors", "fileEncoding", "encoding", "text", "skipNul");
    check L43() else D16();
  L42():
    r49 = dyn base12("file", "header", "sep", "quote", "dec", "numerals", "row.names", "col.names", "as.is", "na.strings", "colClasses", "nrows", "skip", "check.names", "fill", "strip.white", "blank.lines.skip", "comment.char", "allowEscapes", "flush", "stringsAsFactors", "fileEncoding", "encoding", "text", "skipNul");
    goto L8(r49);
  D16():
    deopt 298 [r51];
  D17():
    deopt 301 [];
  L43():
    goto L8(r51);
  L44():
    p9 = prom<V +>{
      readTable = ld readTable;
      readTable1 = force? readTable;
      checkMissing(readTable1);
      return readTable1;
    };
    p10 = prom<V +>{
      readTable2 = ld readTable;
      readTable3 = force? readTable2;
      checkMissing(readTable3);
      return readTable3;
    };
    p11 = prom<V +>{
      readTable4 = ld readTable;
      readTable5 = force? readTable4;
      checkMissing(readTable5);
      return readTable5;
    };
    p12 = prom<V +>{
      readTable6 = ld readTable;
      readTable7 = force? readTable6;
      checkMissing(readTable7);
      return readTable7;
    };
    r56 = dyn _addFunctionInfo3[`read.csv`, `read.csv2`, `read.delim`, `read.delim2`](p9, p10, p11, p12);
    check L45() else D18();
  D18():
    deopt 310 [r56];
  L45():
    _addFunctionInfo4 = ldf `.addFunctionInfo`;
    check L46() else D19();
  D19():
    deopt 312 [];
  L46():
    p13 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r58):
      return r58;
    L1():
      c12 = ldf c in base;
      r59 = dyn c12("recursive", "use.names");
      goto L0(r59);
    L2():
      r57 = dyn base13("recursive", "use.names");
      goto L0(r57);
    };
    r61 = dyn _addFunctionInfo4[c](p13);
    check L47() else D20();
  D20():
    deopt 315 [r61];
  L47():
    popenv;
    return r61;
  }
}