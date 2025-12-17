fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2296593324;
    st texi2pdf = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2296593324(file, clean, quiet, texi2dvi, texinputs, index) {
  (reg file:*, reg clean:*, reg quiet:*, reg texi2dvi:*, reg texinputs:*, reg index:*) -+> V { var file:*, var clean:*, reg clean_isMissing:L, reg clean_orDefault:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var texi2dvi:*, reg texi2dvi_isMissing:L, reg texi2dvi_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var texinputs:*, reg texinputs_isMissing:L, reg texinputs_orDefault:*, var index:*, reg index_isMissing:L, reg index_orDefault:*, reg texi2dvi1:cls, reg file1:*, reg file2:V, reg p1:p(V +), reg clean1:*, reg clean2:V, reg p2:p(V +), reg quiet1:*, reg quiet2:V, reg p3:p(V +), reg texi2dvi2:*, reg texi2dvi3:V, reg p4:p(V +), reg texinputs1:*, reg texinputs2:V, reg p5:p(V +), reg index1:*, reg index2:V, reg p6:p(V +), reg r8:V |
    mkenv;
    st file = file;
    clean_isMissing = missing.0(clean);
    if clean_isMissing then L0(FALSE) else L0(clean);
  L0(clean_orDefault):
    st clean = clean_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L1(TRUE) else L1(quiet);
  L1(quiet_orDefault):
    st quiet = quiet_orDefault;
    texi2dvi_isMissing = missing.0(texi2dvi);
    if texi2dvi_isMissing then L2() else L3(texi2dvi);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("texi2dvi");
      return r;
    };
    goto L3(p);
  L3(texi2dvi_orDefault):
    st texi2dvi = texi2dvi_orDefault;
    texinputs_isMissing = missing.0(texinputs);
    if texinputs_isMissing then L4(NULL) else L4(texinputs);
  L4(texinputs_orDefault):
    st texinputs = texinputs_orDefault;
    index_isMissing = missing.0(index);
    if index_isMissing then L5(TRUE) else L5(index);
  L5(index_orDefault):
    st index = index_orDefault;
    texi2dvi1 = ldf texi2dvi;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p1 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p2 = prom<V +>{
      clean1 = ld clean;
      clean2 = force? clean1;
      checkMissing(clean2);
      return clean2;
    };
    p3 = prom<V +>{
      quiet1 = ld quiet;
      quiet2 = force? quiet1;
      checkMissing(quiet2);
      return quiet2;
    };
    p4 = prom<V +>{
      texi2dvi2 = ld texi2dvi;
      texi2dvi3 = force? texi2dvi2;
      checkMissing(texi2dvi3);
      return texi2dvi3;
    };
    p5 = prom<V +>{
      texinputs1 = ld texinputs;
      texinputs2 = force? texinputs1;
      checkMissing(texinputs2);
      return texinputs2;
    };
    p6 = prom<V +>{
      index1 = ld index;
      index2 = force? index1;
      checkMissing(index2);
      return index2;
    };
    r8 = dyn texi2dvi1[file, pdf, clean, quiet, texi2dvi, texinputs, index](p1, TRUE, p2, p3, p4, p5, p6);
    check L7() else D1();
  D1():
    deopt 16 [r8];
  L7():
    popenv;
    return r8;
  }
}