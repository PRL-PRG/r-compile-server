fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg x:*, reg x1:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg ifelse:cls, reg x2:*, reg x3:V, reg r10:V, reg p:p(V +), reg x4:*, reg x5:V, reg p1:p(V +), reg r13:V, reg r14:V, reg ifelse1:cls, reg x6:*, reg x7:V, reg r15:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg x8:*, reg x9:V, reg r19:V, reg p3:p(V +), reg r21:V, reg seq:cls, reg as_Date:cls, reg r22:V, reg p4:p(V +), reg as_Date1:cls, reg r24:V, reg p5:p(V +), reg r26:V, reg ifelse2:cls, reg as_POSIXlt:cls, reg x10:*, reg x11:V, reg p6:p(V +), reg r28:V, reg c1:L, reg r30:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r31:V, reg r32:V, reg p7:p(V +), reg x12:*, reg x13:V, reg p8:p(V +), reg r35:V, reg head:cls, reg y:*, reg y1:V, reg p9:p(V +), reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg x14:*, reg x15:V, reg class:cls, reg r40:V, reg l:*, reg class__:cls, reg r41:V, reg y2:*, reg y3:V, reg x16:*, reg x17:V, reg l1:*, reg c2:L, reg r43:L, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg as_POSIXlt1:cls, reg x18:*, reg x19:V, reg p10:p(V +), reg r47:V, reg c3:L, reg r51:L, reg l5:*, reg r52:L, reg r53:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r56:L, reg l7:*, reg r57:L, reg dx5:V, reg r58:V, reg r59:V, reg ___:cls, reg r60:V, reg stopifnot:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r61:V, reg r62:V, reg y4:*, reg y5:V, reg y6:*, reg y7:V, reg identical:cls, reg r63:V, reg p11:p(V +), reg r65:V, reg __:cls, reg r66:V, reg r67:cls, reg ifelse3:cls, reg yes:*, reg yes1:V, reg p12:p(V +), reg no:*, reg no1:V, reg p13:p(V +), reg r70:V, reg p14:p(V +), reg r72:V, reg __1:cls, reg r73:V, reg r74:cls, reg ifelse4:cls, reg yes2:*, reg yes3:V, reg p15:p(V +), reg no2:*, reg no3:V, reg p16:p(V +), reg r77:V, reg p17:p(V +), reg r79:V, reg __2:cls, reg r80:V, reg r81:cls, reg ifelse5:cls, reg yes4:*, reg yes5:V, reg p18:p(V +), reg no4:*, reg no5:V, reg p19:p(V +), reg r84:V, reg p20:p(V +), reg r86:V |
    mkenv;
    r = clos inner881979986;
    st ifelse = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r2):
    st x = r2;
    sym1 = ldf sqrt;
    base1 = ldf sqrt in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L5():
    r3 = `:`(6.0, -4.0);
    c = ldf c in base;
    r4 = dyn c(r3);
    check L7() else D0();
  L6():
    r1 = dyn base(<lang `:`(6.0, `-`(4.0))>);
    goto L0(r1);
  D0():
    deopt 10 [r4];
  L1():
    sym2 = ldf sqrt;
    base2 = ldf sqrt in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L7():
    goto L0(r4);
  L8():
    x = ld x;
    check L10() else D1();
  L9():
    r5 = dyn base1(<sym x>);
    goto L1();
  D1():
    deopt 13 [x];
  L2():
    ifelse1 = ldf ifelse;
    check L15() else D4();
  L10():
    x1 = force? x;
    checkMissing(x1);
    r7 = sqrt(x1);
    goto L1();
  L11():
    ifelse = ldf ifelse;
    check L13() else D2();
  L12():
    r8 = dyn base2(<lang ifelse(`>=`(x, 0.0), x, NA_LGL)>);
    goto L2();
  D2():
    deopt 18 [];
  D4():
    deopt 25 [];
  L13():
    p = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      r10 = `>=`(x3, 0.0);
      return r10;
    };
    p1 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r13 = dyn ifelse(p, p1, NA_LGL);
    check L14() else D3();
  L15():
    p2 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      r15 = `>=`(x7, 0.0);
      return r15;
    };
    p3 = prom<V +>{
      sym3 = ldf sqrt;
      base3 = ldf sqrt in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      r19 = sqrt(x9);
      goto L0(r19);
    L2():
      r17 = dyn base3(<sym x>);
      goto L0(r17);
    };
    r21 = dyn ifelse1(p2, p3, NA_LGL);
    check L16() else D5();
  D3():
    deopt 22 [r13];
  D5():
    deopt 29 [r21];
  L14():
    r14 = sqrt(r13);
    goto L2();
  L16():
    seq = ldf seq;
    check L17() else D6();
  D6():
    deopt 31 [];
  L17():
    p4 = prom<V +>{
      as_Date = ldf `as.Date`;
      r22 = dyn as_Date("2000-02-29");
      return r22;
    };
    p5 = prom<V +>{
      as_Date1 = ldf `as.Date`;
      r24 = dyn as_Date1("2004-10-04");
      return r24;
    };
    r26 = dyn seq[, , by](p4, p5, "1 month");
    check L18() else D7();
  D7():
    deopt 36 [r26];
  L18():
    st x = r26;
    ifelse2 = ldf ifelse;
    check L19() else D8();
  D8():
    deopt 39 [];
  L19():
    p7 = prom<V +>{
      as_POSIXlt = ldf `as.POSIXlt`;
      p6 = prom<V +>{
        x10 = ld x;
        x11 = force? x10;
        checkMissing(x11);
        return x11;
      };
      r28 = dyn as_POSIXlt(p6);
      c1 = `is.object`(r28);
      if c1 then L1() else L2(r28);
    L0(dx1):
      r32 = `==`(dx1, 29.0);
      return r32;
    L1():
      dr = tryDispatchBuiltin.1("$", r28);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r30):
      r31 = `$`(r30, <sym mday>);
      goto L0(r31);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p8 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    r35 = dyn ifelse2(p7, p8, NA_LGL);
    check L20() else D9();
  D9():
    deopt 43 [r35];
  L20():
    st y = r35;
    head = ldf head;
    check L21() else D10();
  D10():
    deopt 46 [];
  L21():
    p9 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r37 = dyn head(p9);
    check L22() else D11();
  D11():
    deopt 48 [r37];
  L22():
    sym4 = ldf class;
    base4 = ldf class in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L23() else L24();
  L3(r39):
    l = ld y;
    class__ = ldf `class<-`;
    check L27() else D14();
  L23():
    x14 = ld x;
    check L25() else D12();
  L24():
    r38 = dyn base4(<sym x>);
    goto L3(r38);
  D12():
    deopt 51 [x14];
  D14():
    deopt 56 [r39, l, r39];
  L25():
    x15 = force? x14;
    checkMissing(x15);
    class = ldf class in base;
    r40 = dyn class(x15);
    check L26() else D13();
  L27():
    r41 = dyn class__(l, NULL, r39);
    check L28() else D15();
  D13():
    deopt 54 [r40];
  D15():
    deopt 58 [r39, r41];
  L26():
    goto L3(r40);
  L28():
    st y = r41;
    y2 = ld y;
    check L29() else D16();
  D16():
    deopt 60 [y2];
  L29():
    y3 = force? y2;
    checkMissing(y3);
    x16 = ld x;
    check L30() else D17();
  D17():
    deopt 62 [x16];
  L30():
    x17 = force? x16;
    checkMissing(x17);
    st y2 = x17;
    l1 = ld y2;
    c2 = `is.object`(l1);
    if c2 then L31() else L32(NA_LGL, l1);
  L4(dx3):
    st y2 = dx3;
    stopifnot = ldf stopifnot;
    check L40() else D20();
  L31():
    dr2 = tryDispatchBuiltin.0("[<-", l1, NA_LGL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(NA_LGL, dr2);
  L32(r43, l3):
    as_POSIXlt1 = ldf `as.POSIXlt`;
    check L34() else D18();
  D18():
    deopt 69 [r43, l3, NA_LGL];
  D20():
    deopt 78 [];
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L34():
    p10 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      return x19;
    };
    r47 = dyn as_POSIXlt1(p10);
    check L35() else D19();
  L40():
    p11 = prom<V +>{
      sym5 = ldf identical;
      base5 = ldf identical in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r62):
      return r62;
    L1():
      y4 = ld y2;
      y5 = force? y4;
      checkMissing(y5);
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      identical = ldf identical in base;
      r63 = dyn identical(y5, y7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r63);
    L2():
      r61 = dyn base5(<sym y2>, <sym y>);
      goto L0(r61);
    };
    r65 = dyn stopifnot(p11);
    check L41() else D21();
  D19():
    deopt 71 [r43, l3, NA_LGL, r47];
  D21():
    deopt 80 [r65];
  L35():
    c3 = `is.object`(r47);
    if c3 then L37() else L38(r43, l3, NA_LGL, r47);
  L41():
    st yes = <int 1, 2, 3>;
    st no = <real 3.141592653589793, 9.869604401089358, 31.006276680299816, 97.40909103400242>;
    __ = ldf `::`;
    check L42() else D22();
  D22():
    deopt 88 [];
  L36(r56, l7, r57, dx5):
    r59 = `!=`(dx5, 29.0);
    ___ = ldf `[<-` in base;
    r60 = dyn ___(l7, r57, r59);
    goto L4(r60);
  L37():
    dr4 = tryDispatchBuiltin.1("$", r47);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L39() else L38(r43, l3, NA_LGL, dr4);
  L38(r51, l5, r52, r53):
    r58 = `$`(r53, <sym mday>);
    goto L36(r51, l5, r52, r58);
  L42():
    r66 = dyn __("utils", "str");
    check L43() else D23();
  D23():
    deopt 91 [r66];
  L39():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L36(r43, l3, NA_LGL, dx4);
  L43():
    checkFun.0(r66);
    r67 = r66 as cls;
    p14 = prom<V +>{
      ifelse3 = ldf ifelse;
      p12 = prom<V +>{
        yes = ld yes;
        yes1 = force? yes;
        checkMissing(yes1);
        return yes1;
      };
      p13 = prom<V +>{
        no = ld no;
        no1 = force? no;
        checkMissing(no1);
        return no1;
      };
      r70 = dyn ifelse3(NA_LGL, p12, p13);
      return r70;
    };
    r72 = dyn r67(p14);
    check L44() else D24();
  D24():
    deopt 94 [r72];
  L44():
    __1 = ldf `::`;
    check L45() else D25();
  D25():
    deopt 96 [];
  L45():
    r73 = dyn __1("utils", "str");
    check L46() else D26();
  D26():
    deopt 99 [r73];
  L46():
    checkFun.0(r73);
    r74 = r73 as cls;
    p17 = prom<V +>{
      ifelse4 = ldf ifelse;
      p15 = prom<V +>{
        yes2 = ld yes;
        yes3 = force? yes2;
        checkMissing(yes3);
        return yes3;
      };
      p16 = prom<V +>{
        no2 = ld no;
        no3 = force? no2;
        checkMissing(no3);
        return no3;
      };
      r77 = dyn ifelse4(TRUE, p15, p16);
      return r77;
    };
    r79 = dyn r74(p17);
    check L47() else D27();
  D27():
    deopt 102 [r79];
  L47():
    __2 = ldf `::`;
    check L48() else D28();
  D28():
    deopt 104 [];
  L48():
    r80 = dyn __2("utils", "str");
    check L49() else D29();
  D29():
    deopt 107 [r80];
  L49():
    checkFun.0(r80);
    r81 = r80 as cls;
    p20 = prom<V +>{
      ifelse5 = ldf ifelse;
      p18 = prom<V +>{
        yes4 = ld yes;
        yes5 = force? yes4;
        checkMissing(yes5);
        return yes5;
      };
      p19 = prom<V +>{
        no4 = ld no;
        no5 = force? no4;
        checkMissing(no5);
        return no5;
      };
      r84 = dyn ifelse5(FALSE, p18, p19);
      return r84;
    };
    r86 = dyn r81(p20);
    check L50() else D30();
  D30():
    deopt 110 [r86];
  L50():
    popenv;
    return r86;
  }
}
fun inner881979986(test, yes, no) {
  (reg test:*, reg yes:*, reg no:*) -+> V { var test:*, var yes:*, var no:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg test1:*, reg test2:V, reg is_atomic:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg test3:*, reg test4:V, reg typeof:cls, reg r5:V, reg r6:V, reg c1:L, reg l:*, reg storage_mode__:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg test5:*, reg test6:V, reg length:cls, reg r11:V, reg r12:V, reg c2:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg c7:L, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg c10:L, reg r16:V, reg test7:*, reg test8:V, reg attributes:cls, reg r17:V, reg c11:V, reg c12:L, reg c13:V, reg c15:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg test9:*, reg test10:V, reg is_na:cls, reg r20:V, reg c16:L, reg r22:dots, reg test11:*, reg test12:V, reg c17:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r23:V, reg r24:V, reg yes1:*, reg yes2:V, reg length1:cls, reg r25:V, reg r26:V, reg c18:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg yes3:*, reg yes4:V, reg attributes1:cls, reg r29:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r30:V, reg r31:V, reg yat:*, reg yat1:V, reg c19:V, reg c20:L, reg c21:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r32:V, reg c25:L, reg r33:V, reg yes5:*, reg yes6:V, reg is_function:cls, reg r34:V, reg c26:L, reg c29:L, reg c30:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r35:V, reg c35:L, reg c36:L, reg r36:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r37:V, reg c41:L, reg c42:L, reg r38:V, reg yat2:*, reg yat3:V, reg names:cls, reg r39:V, reg identical:cls, reg r40:V, reg c43:L, reg c44:V, reg c47:L, reg c48:V, reg c50:L, reg yes7:*, reg yes8:V, reg r43:dots, reg sym12:cls, reg base12:cls, reg guard12:L, reg r44:V, reg r45:V, reg no1:*, reg no2:V, reg length2:cls, reg r46:V, reg r47:V, reg c51:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r48:V, reg r49:V, reg no3:*, reg no4:V, reg attributes2:cls, reg r50:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r51:V, reg r52:V, reg nat:*, reg nat1:V, reg c52:V, reg c53:L, reg c54:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r53:V, reg c58:L, reg r54:V, reg no5:*, reg no6:V, reg is_function1:cls, reg r55:V, reg c59:L, reg c62:L, reg c63:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r56:V, reg c68:L, reg c69:L, reg r57:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r58:V, reg c74:L, reg c75:L, reg r59:V, reg nat2:*, reg nat3:V, reg names1:cls, reg r60:V, reg identical1:cls, reg r61:V, reg c76:L, reg c77:V, reg c80:L, reg c81:V, reg c83:L, reg no7:*, reg no8:V, reg r64:dots, reg sym18:cls, reg base18:cls, reg guard18:L, reg r66:V, reg r67:V, reg test13:*, reg test14:V, reg isS4:cls, reg r68:V, reg c84:L, reg __:cls, reg r69:V, reg r70:cls, reg test15:*, reg test16:V, reg p:p(V +), reg r72:V, reg r73:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r74:V, reg test17:*, reg test18:V, reg as_logical:cls, reg r75:V, reg test19:*, reg test20:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r76:V, reg r77:V, reg ans:*, reg ans1:V, reg length3:cls, reg r78:V, reg which:cls, reg test21:*, reg test22:V, reg p1:p(V +), reg r80:V, reg which1:cls, reg test23:*, reg test24:V, reg r81:V, reg p2:p(V +), reg r83:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r84:V, reg r85:V, reg ypos:*, reg ypos1:V, reg length4:cls, reg r86:V, reg r87:V, reg c85:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r88:V, reg r89:V, reg rep:cls, reg r90:V, reg c86:L, reg r92:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ypos2:*, reg ypos3:V, reg __1:cls, reg r93:V, reg l1:*, reg c87:L, reg dx3:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg ypos4:*, reg ypos5:V, reg ___:cls, reg r94:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r95:V, reg r96:V, reg npos:*, reg npos1:V, reg length5:cls, reg r97:V, reg r98:V, reg c88:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r99:V, reg r100:V, reg rep1:cls, reg r101:V, reg c89:L, reg r103:V, reg dr4:V, reg dc2:L, reg dx9:V, reg dx10:V, reg npos2:*, reg npos3:V, reg __2:cls, reg r104:V, reg l4:*, reg c90:L, reg dx12:V, reg l6:*, reg dr6:V, reg dc3:L, reg dx14:V, reg dx15:V, reg dx16:V, reg npos4:*, reg npos5:V, reg ___1:cls, reg r105:V, reg ans2:*, reg ans3:V |
    mkenv;
    st test = test;
    st yes = yes;
    st no = no;
    sym = ldf `is.atomic`;
    base = ldf `is.atomic` in base;
    guard = `==`.4(sym, base);
    if guard then L55() else L56();
  L0(r1):
    c = `as.logical`(r1);
    if c then L59() else L1();
  L55():
    test1 = ld test;
    check L57() else D0();
  L56():
    r = dyn base(<sym test>);
    goto L0(r);
  D0():
    deopt 2 [test1];
  L1():
    sym18 = ldf isS4;
    base18 = ldf isS4 in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L157() else L158();
  L38():
    test19 = ld test;
    check L170() else D42();
  L57():
    test2 = force? test1;
    checkMissing(test2);
    is_atomic = ldf `is.atomic` in base;
    r2 = dyn is_atomic(test2);
    check L58() else D1();
  L59():
    sym1 = ldf typeof;
    base1 = ldf typeof in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  D1():
    deopt 5 [r2];
  D42():
    deopt 179 [test19];
  L2(r4):
    r6 = `!=`(r4, "logical");
    c1 = `as.logical`(r6);
    if c1 then L64() else L3();
  L39(r67):
    c84 = `as.logical`(r67);
    if c84 then L161() else L40();
  L58():
    goto L0(r2);
  L60():
    test3 = ld test;
    check L62() else D2();
  L61():
    r3 = dyn base1(<sym test>);
    goto L2(r3);
  L157():
    test13 = ld test;
    check L159() else D35();
  L158():
    r66 = dyn base18(<sym test>);
    goto L39(r66);
  L170():
    test20 = force? test19;
    checkMissing(test20);
    st ans = test20;
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L171() else L172();
  D2():
    deopt 8 [test3];
  D35():
    deopt 159 [test13];
  L3():
    goto L4();
  L4():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  L40():
    sym19 = ldf `as.logical`;
    base19 = ldf `as.logical` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L166() else L167();
  L41(r73):
    st test = r73;
    goto L38();
  L42(r77):
    st len = r77;
    which = ldf which;
    check L175() else D45();
  L62():
    test4 = force? test3;
    checkMissing(test4);
    typeof = ldf typeof in base;
    r5 = dyn typeof(test4);
    check L63() else D3();
  L64():
    l = ld test;
    storage_mode__ = ldf `storage.mode<-`;
    check L65() else D4();
  L159():
    test14 = force? test13;
    checkMissing(test14);
    isS4 = ldf isS4 in base;
    r68 = dyn isS4(test14);
    check L160() else D36();
  L161():
    __ = ldf `::`;
    check L162() else D37();
  L171():
    ans = ld ans;
    check L173() else D43();
  L172():
    r76 = dyn base20(<sym ans>);
    goto L42(r76);
  D3():
    deopt 11 [r5];
  D4():
    deopt 17 ["logical", l, "logical"];
  D36():
    deopt 162 [r68];
  D37():
    deopt 164 [];
  D43():
    deopt 184 [ans];
  D45():
    deopt 190 [];
  L5(r10):
    r12 = `==`(r10, 1.0);
    c2 = `as.logical`(r12);
    if c2 then L72() else L6(c2);
  L63():
    goto L2(r5);
  L65():
    r7 = dyn storage_mode__(l, NULL, "logical");
    check L66() else D5();
  L68():
    test5 = ld test;
    check L70() else D6();
  L69():
    r9 = dyn base2(<sym test>);
    goto L5(r9);
  L160():
    goto L39(r68);
  L162():
    r69 = dyn __("methods", "as");
    check L163() else D38();
  L166():
    test17 = ld test;
    check L168() else D40();
  L167():
    r74 = dyn base19(<sym test>);
    goto L41(r74);
  L173():
    ans1 = force? ans;
    checkMissing(ans1);
    length3 = ldf length in base;
    r78 = dyn length3(ans1);
    check L174() else D44();
  L175():
    p1 = prom<V +>{
      test21 = ld test;
      test22 = force? test21;
      checkMissing(test22);
      return test22;
    };
    r80 = dyn which(p1);
    check L176() else D46();
  D5():
    deopt 19 ["logical", r7];
  D6():
    deopt 25 [test5];
  D38():
    deopt 167 [r69];
  D40():
    deopt 174 [test17];
  D44():
    deopt 187 [r78];
  D46():
    deopt 192 [r80];
  L6(c4):
    c15 = `as.logical`(c4);
    if c15 then L80() else L9();
  L66():
    st test = r7;
    goto L4();
  L70():
    test6 = force? test5;
    checkMissing(test6);
    length = ldf length in base;
    r11 = dyn length(test6);
    check L71() else D7();
  L72():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L73() else L74();
  L163():
    checkFun.0(r69);
    r70 = r69 as cls;
    p = prom<V +>{
      test15 = ld test;
      test16 = force? test15;
      checkMissing(test16);
      return test16;
    };
    r72 = dyn r70(p, "logical");
    check L164() else D39();
  L168():
    test18 = force? test17;
    checkMissing(test18);
    as_logical = ldf `as.logical` in base;
    r75 = dyn as_logical(test18);
    check L169() else D41();
  L174():
    goto L42(r78);
  L176():
    st ypos = r80;
    which1 = ldf which;
    check L177() else D47();
  D7():
    deopt 28 [r11];
  D39():
    deopt 171 [r72];
  D41():
    deopt 177 [r75];
  D47():
    deopt 195 [];
  L7(c7, r14):
    c12 = `as.logical`(r14);
    c13 = `&&`(c7, c12);
    goto L6(c13);
  L9():
    goto L37(NULL);
  L37(r64):
    goto L38();
  L71():
    goto L5(r11);
  L73():
    sym4 = ldf attributes;
    base4 = ldf attributes in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L75() else L76();
  L74():
    r13 = dyn base3(<lang attributes(test)>);
    goto L7(c2, r13);
  L80():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L81() else L82();
  L164():
    goto L41(r72);
  L169():
    goto L41(r75);
  L177():
    p2 = prom<V +>{
      test23 = ld test;
      test24 = force? test23;
      checkMissing(test24);
      r81 = `!`(test24);
      return r81;
    };
    r83 = dyn which1(p2);
    check L178() else D48();
  D48():
    deopt 197 [r83];
  L8(c10, r16):
    c11 = `==`(r16, NULL);
    goto L7(c10, c11);
  L10(r19):
    c16 = `as.logical`(r19);
    if c16 then L85() else L11();
  L75():
    test7 = ld test;
    check L77() else D8();
  L76():
    r15 = dyn base4(<sym test>);
    goto L8(c2, r15);
  L81():
    test9 = ld test;
    check L83() else D10();
  L82():
    r18 = dyn base5(<sym test>);
    goto L10(r18);
  L178():
    st npos = r83;
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L179() else L180();
  D8():
    deopt 34 [c2, test7];
  D10():
    deopt 42 [test9];
  L11():
    test11 = ld test;
    check L88() else D12();
  L43(r85):
    r87 = `>`(r85, 0);
    c85 = `as.logical`(r87);
    if c85 then L183() else L44();
  L77():
    test8 = force? test7;
    checkMissing(test8);
    attributes = ldf attributes in base;
    r17 = dyn attributes(test8);
    check L78() else D9();
  L83():
    test10 = force? test9;
    checkMissing(test10);
    is_na = ldf `is.na` in base;
    r20 = dyn is_na(test10);
    check L84() else D11();
  L85():
    popenv;
    return NA_LGL;
  L179():
    ypos = ld ypos;
    check L181() else D49();
  L180():
    r84 = dyn base21(<sym ypos>);
    goto L43(r84);
  D9():
    deopt 37 [c2, r17];
  D11():
    deopt 45 [r20];
  D12():
    deopt 49 [test11];
  D49():
    deopt 201 [ypos];
  L44():
    goto L48();
  L48():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L195() else L196();
  L78():
    goto L8(c2, r17);
  L84():
    goto L10(r20);
  L88():
    test12 = force? test11;
    checkMissing(test12);
    c17 = `as.logical`(test12);
    if c17 then L89() else L13();
  L181():
    ypos1 = force? ypos;
    checkMissing(ypos1);
    length4 = ldf length in base;
    r86 = dyn length4(ypos1);
    check L182() else D50();
  L183():
    sym22 = ldf rep;
    base22 = ldf rep in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L184() else L185();
  D50():
    deopt 204 [r86];
  L12(r22):
    goto L37(r22);
  L13():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L123() else L124();
  L45(r89):
    c86 = `is.object`(r89);
    if c86 then L186() else L187(r89);
  L49(r96):
    r98 = `>`(r96, 0);
    c88 = `as.logical`(r98);
    if c88 then L199() else L50();
  L89():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L90() else L91();
  L182():
    goto L43(r86);
  L184():
    rep = ldf rep in base;
    r90 = dyn rep(<sym yes>, <sym len>);
    goto L45(r90);
  L185():
    r88 = dyn base22[, `length.out`](<sym yes>, <sym len>);
    goto L45(r88);
  L195():
    npos = ld npos;
    check L197() else D53();
  L196():
    r95 = dyn base23(<sym npos>);
    goto L49(r95);
  D53():
    deopt 222 [npos];
  L14(r24):
    r26 = `==`(r24, 1.0);
    c18 = `as.logical`(r26);
    if c18 then L94() else L15();
  L26(r45):
    r47 = `==`(r45, 1.0);
    c51 = `as.logical`(r47);
    if c51 then L127() else L27();
  L46(dx1):
    l1 = ld ans;
    c87 = `is.object`(l1);
    if c87 then L190() else L191(dx1, l1);
  L50():
    goto L54();
  L54():
    ans2 = ld ans;
    check L211() else D57();
  L90():
    yes1 = ld yes;
    check L92() else D13();
  L91():
    r23 = dyn base6(<sym yes>);
    goto L14(r23);
  L123():
    no1 = ld no;
    check L125() else D24();
  L124():
    r44 = dyn base12(<sym no>);
    goto L26(r44);
  L186():
    dr = tryDispatchBuiltin.1("[", r89);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L188() else L187(dr);
  L187(r92):
    ypos2 = ld ypos;
    check L189() else D51();
  L197():
    npos1 = force? npos;
    checkMissing(npos1);
    length5 = ldf length in base;
    r97 = dyn length5(npos1);
    check L198() else D54();
  L199():
    sym24 = ldf rep;
    base24 = ldf rep in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L200() else L201();
  D13():
    deopt 53 [yes1];
  D24():
    deopt 105 [no1];
  D51():
    deopt 210 [r92, ypos2];
  D54():
    deopt 225 [r97];
  D57():
    deopt 241 [ans2];
  L15():
    goto L25(NULL);
  L25(r43):
    goto L12(r43);
  L27():
    goto L12(NULL);
  L47(dx6, dx7):
    st ans = dx7;
    goto L48();
  L51(r100):
    c89 = `is.object`(r100);
    if c89 then L202() else L203(r100);
  L92():
    yes2 = force? yes1;
    checkMissing(yes2);
    length1 = ldf length in base;
    r25 = dyn length1(yes2);
    check L93() else D14();
  L94():
    sym7 = ldf attributes;
    base7 = ldf attributes in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L95() else L96();
  L125():
    no2 = force? no1;
    checkMissing(no2);
    length2 = ldf length in base;
    r46 = dyn length2(no2);
    check L126() else D25();
  L127():
    sym13 = ldf attributes;
    base13 = ldf attributes in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L128() else L129();
  L188():
    dx = getTryDispatchBuiltinValue(dr);
    goto L46(dx);
  L189():
    ypos3 = force? ypos2;
    __1 = ldf `[` in base;
    r93 = dyn __1(r92, ypos3);
    goto L46(r93);
  L190():
    dr2 = tryDispatchBuiltin.0("[<-", l1, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L192() else L191(dx1, dr2);
  L191(dx3, l3):
    ypos4 = ld ypos;
    check L193() else D52();
  L198():
    goto L49(r97);
  L200():
    rep1 = ldf rep in base;
    r101 = dyn rep1(<sym no>, <sym len>);
    goto L51(r101);
  L201():
    r99 = dyn base24[, `length.out`](<sym no>, <sym len>);
    goto L51(r99);
  L211():
    ans3 = force? ans2;
    checkMissing(ans3);
    popenv;
    return ans3;
  D14():
    deopt 56 [r25];
  D25():
    deopt 108 [r46];
  D52():
    deopt 214 [dx3, l3, dx1, ypos4];
  L16(r28):
    st yat = r28;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L99() else L100();
  L28(r49):
    st nat = r49;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L132() else L133();
  L52(dx10):
    l4 = ld ans;
    c90 = `is.object`(l4);
    if c90 then L206() else L207(dx10, l4);
  L93():
    goto L14(r25);
  L95():
    yes3 = ld yes;
    check L97() else D15();
  L96():
    r27 = dyn base7(<sym yes>);
    goto L16(r27);
  L126():
    goto L26(r46);
  L128():
    no3 = ld no;
    check L130() else D26();
  L129():
    r48 = dyn base13(<sym no>);
    goto L28(r48);
  L192():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L47(dx1, dx5);
  L193():
    ypos5 = force? ypos4;
    ___ = ldf `[<-` in base;
    r94 = dyn ___(l3, dx1, ypos5);
    goto L47(dx3, r94);
  L202():
    dr4 = tryDispatchBuiltin.1("[", r100);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L204() else L203(dr4);
  L203(r103):
    npos2 = ld npos;
    check L205() else D55();
  D15():
    deopt 61 [yes3];
  D26():
    deopt 113 [no3];
  D55():
    deopt 231 [r103, npos2];
  L17(r31):
    c20 = `as.logical`(r31);
    if c20 then L18(c20) else L102();
  L29(r52):
    c53 = `as.logical`(r52);
    if c53 then L30(c53) else L135();
  L53(dx15, dx16):
    st ans = dx16;
    goto L54();
  L97():
    yes4 = force? yes3;
    checkMissing(yes4);
    attributes1 = ldf attributes in base;
    r29 = dyn attributes1(yes4);
    check L98() else D16();
  L99():
    yat = ld yat;
    check L101() else D17();
  L100():
    r30 = dyn base8(<sym yat>);
    goto L17(r30);
  L130():
    no4 = force? no3;
    checkMissing(no4);
    attributes2 = ldf attributes in base;
    r50 = dyn attributes2(no4);
    check L131() else D27();
  L132():
    nat = ld nat;
    check L134() else D28();
  L133():
    r51 = dyn base14(<sym nat>);
    goto L29(r51);
  L204():
    dx9 = getTryDispatchBuiltinValue(dr4);
    goto L52(dx9);
  L205():
    npos3 = force? npos2;
    __2 = ldf `[` in base;
    r104 = dyn __2(r103, npos3);
    goto L52(r104);
  L206():
    dr6 = tryDispatchBuiltin.0("[<-", l4, dx10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L208() else L207(dx10, dr6);
  L207(dx12, l6):
    npos4 = ld npos;
    check L209() else D56();
  D16():
    deopt 64 [r29];
  D17():
    deopt 67 [yat];
  D27():
    deopt 116 [r50];
  D28():
    deopt 119 [nat];
  D56():
    deopt 235 [dx12, l6, dx10, npos4];
  L18(c21):
    c50 = `as.logical`(c21);
    if c50 then L117() else L23();
  L30(c54):
    c83 = `as.logical`(c54);
    if c83 then L150() else L35();
  L98():
    goto L16(r29);
  L101():
    yat1 = force? yat;
    checkMissing(yat1);
    c19 = `==`(yat1, NULL);
    goto L17(c19);
  L102():
    sym9 = ldf `is.function`;
    base9 = ldf `is.function` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L103() else L104();
  L131():
    goto L28(r50);
  L134():
    nat1 = force? nat;
    checkMissing(nat1);
    c52 = `==`(nat1, NULL);
    goto L29(c52);
  L135():
    sym15 = ldf `is.function`;
    base15 = ldf `is.function` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L136() else L137();
  L208():
    dx14 = getTryDispatchBuiltinValue(dr6);
    goto L53(dx10, dx14);
  L209():
    npos5 = force? npos4;
    ___1 = ldf `[<-` in base;
    r105 = dyn ___1(l6, dx10, npos5);
    goto L53(dx12, r105);
  L19(c25, r33):
    c26 = `as.logical`(r33);
    if c26 then L107() else L20(c25, c26);
  L23():
    goto L25(NULL);
  L31(c58, r54):
    c59 = `as.logical`(r54);
    if c59 then L140() else L32(c58, c59);
  L35():
    goto L12(NULL);
  L103():
    yes5 = ld yes;
    check L105() else D18();
  L104():
    r32 = dyn base9(<sym yes>);
    goto L19(c20, r32);
  L117():
    yes7 = ld yes;
    check L118() else D23();
  L136():
    no5 = ld no;
    check L138() else D29();
  L137():
    r53 = dyn base15(<sym no>);
    goto L31(c53, r53);
  L150():
    no7 = ld no;
    check L151() else D34();
  D18():
    deopt 72 [c20, yes5];
  D23():
    deopt 96 [yes7];
  D29():
    deopt 124 [c53, no5];
  D34():
    deopt 148 [no7];
  L20(c29, c30):
    c47 = `as.logical`(c30);
    c48 = `||`(c29, c47);
    goto L18(c48);
  L32(c62, c63):
    c80 = `as.logical`(c63);
    c81 = `||`(c62, c80);
    goto L30(c81);
  L105():
    yes6 = force? yes5;
    checkMissing(yes6);
    is_function = ldf `is.function` in base;
    r34 = dyn is_function(yes6);
    check L106() else D19();
  L107():
    sym10 = ldf identical;
    base10 = ldf identical in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L108() else L109();
  L118():
    yes8 = force? yes7;
    checkMissing(yes8);
    popenv;
    return yes8;
  L138():
    no6 = force? no5;
    checkMissing(no6);
    is_function1 = ldf `is.function` in base;
    r55 = dyn is_function1(no6);
    check L139() else D30();
  L140():
    sym16 = ldf identical;
    base16 = ldf identical in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L141() else L142();
  L151():
    no8 = force? no7;
    checkMissing(no8);
    popenv;
    return no8;
  D19():
    deopt 75 [c20, r34];
  D30():
    deopt 127 [c53, r55];
  L21(c35, c36, r36):
    c43 = `as.logical`(r36);
    c44 = `&&`(c36, c43);
    goto L20(c35, c44);
  L33(c68, c69, r57):
    c76 = `as.logical`(r57);
    c77 = `&&`(c69, c76);
    goto L32(c68, c77);
  L106():
    goto L19(c20, r34);
  L108():
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L110() else L111();
  L109():
    r35 = dyn base10(<lang names(yat)>, "srcref");
    goto L21(c25, c26, r35);
  L139():
    goto L31(c53, r55);
  L141():
    sym17 = ldf names;
    base17 = ldf names in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L143() else L144();
  L142():
    r56 = dyn base16(<lang names(nat)>, "srcref");
    goto L33(c58, c59, r56);
  L22(c41, c42, r38):
    identical = ldf identical in base;
    r40 = dyn identical(r38, "srcref", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L114() else D22();
  L34(c74, c75, r59):
    identical1 = ldf identical in base;
    r61 = dyn identical1(r59, "srcref", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L147() else D33();
  L110():
    yat2 = ld yat;
    check L112() else D20();
  L111():
    r37 = dyn base11(<sym yat>);
    goto L22(c25, c26, r37);
  L143():
    nat2 = ld nat;
    check L145() else D31();
  L144():
    r58 = dyn base17(<sym nat>);
    goto L34(c58, c59, r58);
  D20():
    deopt 80 [c25, c26, yat2];
  D22():
    deopt 93 [c41, c42, r40];
  D31():
    deopt 132 [c58, c59, nat2];
  D33():
    deopt 145 [c74, c75, r61];
  L112():
    yat3 = force? yat2;
    checkMissing(yat3);
    names = ldf names in base;
    r39 = dyn names(yat3);
    check L113() else D21();
  L114():
    goto L21(c41, c42, r40);
  L145():
    nat3 = force? nat2;
    checkMissing(nat3);
    names1 = ldf names in base;
    r60 = dyn names1(nat3);
    check L146() else D32();
  L147():
    goto L33(c74, c75, r61);
  D21():
    deopt 83 [c25, c26, r39];
  D32():
    deopt 135 [c58, c59, r60];
  L113():
    goto L22(c25, c26, r39);
  L146():
    goto L34(c58, c59, r60);
  }
}