fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `print.libraryIQR` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg format:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg s:*, reg s1:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg message:cls, reg r6:V, reg tempfile:cls, reg r8:V, reg writeLines:cls, reg s2:*, reg s3:V, reg p1:p(V +), reg outFile:*, reg outFile1:V, reg p2:p(V +), reg r11:V, reg file_show:cls, reg outFile2:*, reg outFile3:V, reg p3:p(V +), reg gettext:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg x3:*, reg x4:V, reg invisible:cls, reg r18:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    format = ldf format;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn format(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st s = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L10() else L1();
  L6():
    s = ld s;
    check L8() else D2();
  L7():
    r2 = dyn base(<sym s>);
    goto L0(r2);
  D2():
    deopt 7 [s];
  L1():
    tempfile = ldf tempfile;
    check L14() else D6();
  L2():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L8():
    s1 = force? s;
    checkMissing(s1);
    length = ldf length in base;
    r4 = dyn length(s1);
    check L9() else D3();
  L10():
    message = ldf message;
    check L11() else D4();
  D3():
    deopt 10 [r4];
  D4():
    deopt 13 [];
  D6():
    deopt 17 [];
  L3(r17):
    popenv;
    return r17;
  L9():
    goto L0(r4);
  L11():
    r6 = dyn message("no packages found");
    check L12() else D5();
  L14():
    r8 = dyn tempfile("RlibraryIQR");
    check L15() else D7();
  L20():
    x3 = ld x;
    check L22() else D12();
  L21():
    r16 = dyn base1(<sym x>);
    goto L3(r16);
  D5():
    deopt 15 [r6];
  D7():
    deopt 19 [r8];
  D12():
    deopt 36 [x3];
  L12():
    goto L2();
  L15():
    st outFile = r8;
    writeLines = ldf writeLines;
    check L16() else D8();
  L22():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r18 = dyn invisible(x4);
    check L23() else D13();
  D8():
    deopt 22 [];
  D13():
    deopt 39 [r18];
  L16():
    p1 = prom<V +>{
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      return s3;
    };
    p2 = prom<V +>{
      outFile = ld outFile;
      outFile1 = force? outFile;
      checkMissing(outFile1);
      return outFile1;
    };
    r11 = dyn writeLines(p1, p2);
    check L17() else D9();
  L23():
    goto L3(r18);
  D9():
    deopt 25 [r11];
  L17():
    file_show = ldf `file.show`;
    check L18() else D10();
  D10():
    deopt 27 [];
  L18():
    p3 = prom<V +>{
      outFile2 = ld outFile;
      outFile3 = force? outFile2;
      checkMissing(outFile3);
      return outFile3;
    };
    p4 = prom<V +>{
      gettext = ldf gettext;
      r13 = dyn gettext("R packages available");
      return r13;
    };
    r15 = dyn file_show[, `delete.file`, title](p3, TRUE, p4);
    check L19() else D11();
  D11():
    deopt 33 [r15];
  L19():
    goto L2();
  }
}