fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3984974317;
    st `.aspell_package_defaults` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3984974317(dir, encoding) {
  (reg dir:*, reg encoding:*) -+> V { var dir:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg parse:cls, reg dfile2:*, reg dfile3:V, reg p2:p(V +), reg encoding1:*, reg encoding2:V, reg p3:p(V +), reg r9:V, reg new_env:cls, reg r10:V, reg exprs:*, reg exprs1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg eval:cls, reg e:*, reg e1:V, reg p4:p(V +), reg envir:*, reg envir1:V, reg p5:p(V +), reg r13:V, reg as_list:cls, reg envir2:*, reg envir3:V, reg p6:p(V +), reg r15:V |
    mkenv;
    st dir = dir;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("unknown") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    file_path = ldf `file.path`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path(p, ".aspell", "defaults.R");
    check L8() else D1();
  D1():
    deopt 5 [r1];
  L8():
    st dfile = r1;
    file_test = ldf file_test;
    check L9() else D2();
  D2():
    deopt 8 [];
  L9():
    p1 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r3 = dyn file_test("-f", p1);
    check L10() else D3();
  D3():
    deopt 11 [r3];
  L10():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L11() else L1();
  L1():
    parse = ldf parse;
    check L14() else D4();
  L11():
    popenv;
    return NULL;
  D4():
    deopt 19 [];
  L14():
    p2 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    p3 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    r9 = dyn parse[, encoding](p2, p3);
    check L15() else D5();
  D5():
    deopt 23 [r9];
  L15():
    st exprs = r9;
    new_env = ldf `new.env`;
    check L16() else D6();
  D6():
    deopt 26 [];
  L16():
    r10 = dyn new_env();
    check L17() else D7();
  D7():
    deopt 27 [r10];
  L17():
    st envir = r10;
    exprs = ld exprs;
    check L18() else D8();
  D8():
    deopt 29 [exprs];
  L18():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    s = toForSeq(exprs1);
    l = length(s);
    i = 0;
    goto L5(i);
  L5(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L4() else L6();
  L4():
    as_list = ldf `as.list`;
    check L21() else D11();
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st e = x;
    eval = ldf eval;
    check L19() else D9();
  D9():
    deopt 34 [i2];
  D11():
    deopt 43 [];
  L19():
    p4 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    p5 = prom<V +>{
      envir = ld envir;
      envir1 = force? envir;
      checkMissing(envir1);
      return envir1;
    };
    r13 = dyn eval(p4, p5);
    check L20() else D10();
  L21():
    p6 = prom<V +>{
      envir2 = ld envir;
      envir3 = force? envir2;
      checkMissing(envir3);
      return envir3;
    };
    r15 = dyn as_list(p6);
    check L22() else D12();
  D10():
    deopt 37 [i2, r13];
  D12():
    deopt 45 [r15];
  L20():
    goto L5(i2);
  L22():
    popenv;
    return r15;
  }
}