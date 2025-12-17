fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.packageInfo` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg tempfile:cls, reg r:V, reg writeLines:cls, reg format:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg outFile:*, reg outFile1:V, reg p2:p(V +), reg r5:V, reg file_show:cls, reg outFile2:*, reg outFile3:V, reg p3:p(V +), reg gettextf:cls, reg sQuote:cls, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg r11:V, reg p6:p(V +), reg r13:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg x7:*, reg x8:V, reg invisible:cls, reg r16:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    tempfile = ldf tempfile;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn tempfile("RpackageInfo");
    check L2() else D1();
  D1():
    deopt 3 [r];
  L2():
    st outFile = r;
    writeLines = ldf writeLines;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      format = ldf format;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r2 = dyn format(p);
      return r2;
    };
    p2 = prom<V +>{
      outFile = ld outFile;
      outFile1 = force? outFile;
      checkMissing(outFile1);
      return outFile1;
    };
    r5 = dyn writeLines(p1, p2);
    check L4() else D3();
  D3():
    deopt 9 [r5];
  L4():
    file_show = ldf `file.show`;
    check L5() else D4();
  D4():
    deopt 11 [];
  L5():
    p3 = prom<V +>{
      outFile2 = ld outFile;
      outFile3 = force? outFile2;
      checkMissing(outFile3);
      return outFile3;
    };
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          c = `is.object`(x4);
          if c then L1() else L2(x4);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("$", x4);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(x6):
          r7 = `$`(x6, <sym name>);
          goto L0(r7);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r9 = dyn sQuote(p4);
        return r9;
      };
      r11 = dyn gettextf("Documentation for package %s", p5);
      return r11;
    };
    r13 = dyn file_show[, `delete.file`, title](p3, TRUE, p6);
    check L6() else D5();
  D5():
    deopt 17 [r13];
  L6():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r15):
    popenv;
    return r15;
  L7():
    x7 = ld x;
    check L9() else D6();
  L8():
    r14 = dyn base(<sym x>);
    goto L0(r14);
  D6():
    deopt 20 [x7];
  L9():
    x8 = force? x7;
    checkMissing(x8);
    invisible = ldf invisible in base;
    r16 = dyn invisible(x8);
    check L10() else D7();
  D7():
    deopt 23 [r16];
  L10():
    goto L0(r16);
  }
}