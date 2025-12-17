fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1471548132;
    st tempfile = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1471548132(pattern, tmpdir, fileext) {
  (reg pattern:*, reg tmpdir:*, reg fileext:*) -+> V { var pattern:*, reg pattern_isMissing:L, reg pattern_orDefault:*, var tmpdir:*, reg tmpdir_isMissing:L, reg tmpdir_orDefault:*, reg tempdir:cls, reg r:V, reg p:p(V +), var fileext:*, reg fileext_isMissing:L, reg fileext_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg pattern1:*, reg pattern2:V, reg tmpdir1:*, reg tmpdir2:V, reg fileext1:*, reg fileext2:V, reg tempfile:cls, reg r4:V |
    mkenv;
    pattern_isMissing = missing.0(pattern);
    if pattern_isMissing then L0("file") else L0(pattern);
  L0(pattern_orDefault):
    st pattern = pattern_orDefault;
    tmpdir_isMissing = missing.0(tmpdir);
    if tmpdir_isMissing then L1() else L2(tmpdir);
  L1():
    p = prom<V +>{
      tempdir = ldf tempdir;
      r = dyn tempdir();
      return r;
    };
    goto L2(p);
  L2(tmpdir_orDefault):
    st tmpdir = tmpdir_orDefault;
    fileext_isMissing = missing.0(fileext);
    if fileext_isMissing then L3("") else L3(fileext);
  L3(fileext_orDefault):
    st fileext = fileext_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L4(r3):
    popenv;
    return r3;
  L5():
    pattern1 = ld pattern;
    check L7() else D0();
  L6():
    r2 = dyn base(<lang tempfile(pattern, tmpdir, fileext)>);
    goto L4(r2);
  D0():
    deopt 2 [pattern1];
  L7():
    pattern2 = force? pattern1;
    checkMissing(pattern2);
    tmpdir1 = ld tmpdir;
    check L8() else D1();
  D1():
    deopt 4 [tmpdir1];
  L8():
    tmpdir2 = force? tmpdir1;
    checkMissing(tmpdir2);
    fileext1 = ld fileext;
    check L9() else D2();
  D2():
    deopt 6 [fileext1];
  L9():
    fileext2 = force? fileext1;
    checkMissing(fileext2);
    tempfile = ldf tempfile in base;
    r4 = dyn tempfile(pattern2, tmpdir2, fileext2);
    check L10() else D3();
  D3():
    deopt 9 [r4];
  L10():
    goto L4(r4);
  }
}