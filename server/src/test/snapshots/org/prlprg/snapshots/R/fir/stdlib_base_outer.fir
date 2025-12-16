fun main() {
  () -+> V { reg r:cls, reg x:*, reg x1:V, reg l:*, reg names__:cls, reg r1:V, reg _o_:cls, reg x2:*, reg x3:V, reg p:p(V +), reg x4:*, reg x5:V, reg p1:p(V +), reg r4:V, reg paste:cls, reg y:*, reg y1:V, reg p2:p(V +), reg r6:V, reg l1:*, reg names__1:cls, reg r7:V, reg outer:cls, reg y2:*, reg y3:V, reg p3:p(V +), reg x6:*, reg x7:V, reg p4:p(V +), reg __:*, reg __1:V, reg p5:p(V +), reg r11:V, reg outer1:cls, reg month_abb:*, reg month_abb1:V, reg p6:p(V +), reg p7:p(V +), reg paste1:*, reg paste2:V, reg p8:p(V +), reg r15:V, reg _o_1:cls, reg _o_2:cls, reg x8:*, reg x9:V, reg p9:p(V +), reg x10:*, reg x11:V, reg p10:p(V +), reg r18:V, reg p11:p(V +), reg y4:*, reg y5:V, reg c:L, reg y7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __2:cls, reg r20:V, reg p12:p(V +), reg r22:V |
    mkenv;
    r = clos inner1081568704;
    st outer = r;
    st x = <int 1, 2, 3, 4, 5, 6, 7, 8, 9>;
    x = ld x;
    check L0() else D0();
  D0():
    deopt 6 [x];
  L0():
    x1 = force? x;
    checkMissing(x1);
    l = ld x;
    names__ = ldf `names<-`;
    check L1() else D1();
  D1():
    deopt 9 [x1, l, x1];
  L1():
    r1 = dyn names__(l, NULL, x1);
    check L2() else D2();
  D2():
    deopt 11 [x1, r1];
  L2():
    st x = r1;
    _o_ = ldf `%o%`;
    check L3() else D3();
  D3():
    deopt 14 [];
  L3():
    p = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p1 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r4 = dyn _o_(p, p1);
    check L4() else D4();
  D4():
    deopt 17 [r4];
  L4():
    st y = <int 2, 3, 4, 5, 6, 7, 8>;
    paste = ldf paste;
    check L5() else D5();
  D5():
    deopt 22 [];
  L5():
    p2 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r6 = dyn paste[, , sep](p2, ":", "");
    check L6() else D6();
  D6():
    deopt 27 [r6];
  L6():
    l1 = ld y;
    names__1 = ldf `names<-`;
    check L7() else D7();
  D7():
    deopt 29 [r6, l1, r6];
  L7():
    r7 = dyn names__1(l1, NULL, r6);
    check L8() else D8();
  D8():
    deopt 31 [r6, r7];
  L8():
    st y = r7;
    outer = ldf outer;
    check L9() else D9();
  D9():
    deopt 34 [];
  L9():
    p3 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p4 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p5 = prom<V +>{
      __ = ld `^`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r11 = dyn outer(p3, p4, p5);
    check L10() else D10();
  D10():
    deopt 38 [r11];
  L10():
    outer1 = ldf outer;
    check L11() else D11();
  D11():
    deopt 40 [];
  L11():
    p6 = prom<V +>{
      month_abb = ld `month.abb`;
      month_abb1 = force? month_abb;
      checkMissing(month_abb1);
      return month_abb1;
    };
    p7 = prom<V +>{
      return <int 1999, 2000, 2001, 2002, 2003>;
    };
    p8 = prom<V +>{
      paste1 = ld paste;
      paste2 = force? paste1;
      checkMissing(paste2);
      return paste2;
    };
    r15 = dyn outer1[, , FUN](p6, p7, p8);
    check L12() else D12();
  D12():
    deopt 45 [r15];
  L12():
    _o_1 = ldf `%o%`;
    check L13() else D13();
  D13():
    deopt 47 [];
  L13():
    p11 = prom<V +>{
      _o_2 = ldf `%o%`;
      p9 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      p10 = prom<V +>{
        x10 = ld x;
        x11 = force? x10;
        checkMissing(x11);
        return x11;
      };
      r18 = dyn _o_2(p9, p10);
      return r18;
    };
    p12 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      c = `is.object`(y5);
      if c then L1() else L2(y5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", y5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(y7):
      __2 = ldf `[` in base;
      r20 = dyn __2(y7, <int 1, 2, 3>);
      goto L0(r20);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r22 = dyn _o_1(p11, p12);
    check L14() else D14();
  D14():
    deopt 50 [r22];
  L14():
    popenv;
    return r22;
  }
}
fun inner1081568704(X, Y, FUN, `...`) {
  (reg X:*, reg Y:*, reg FUN:*, reg ddd:dots) -+> V { var X:*, var Y:*, var FUN:*, reg FUN_isMissing:L, reg FUN_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg X1:*, reg X2:V, reg is_array:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg X3:*, reg X4:V, reg dim:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg X5:*, reg X6:V, reg dimnames:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg nx:*, reg nx1:V, reg c1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg X7:*, reg X8:V, reg length:cls, reg r14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg r16:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r17:V, reg r18:V, reg X9:*, reg X10:V, reg names:cls, reg r19:V, reg c2:V, reg no_nx:*, reg no_nx1:V, reg r20:V, reg c3:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r21:V, reg r22:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r23:V, reg r24:V, reg X11:*, reg X12:V, reg names1:cls, reg r25:V, reg list:cls, reg r26:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r27:V, reg r28:V, reg Y1:*, reg Y2:V, reg is_array1:cls, reg r29:V, reg c4:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r30:V, reg r31:V, reg Y3:*, reg Y4:V, reg dim1:cls, reg r32:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r33:V, reg r34:V, reg Y5:*, reg Y6:V, reg dimnames1:cls, reg r35:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r36:V, reg r37:V, reg ny:*, reg ny1:V, reg c5:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r39:V, reg r40:V, reg Y7:*, reg Y8:V, reg length1:cls, reg r41:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r42:V, reg r43:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r44:V, reg r45:V, reg Y9:*, reg Y10:V, reg names2:cls, reg r46:V, reg c6:V, reg no_ny:*, reg no_ny1:V, reg r47:V, reg c7:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r48:V, reg r49:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r50:V, reg r51:V, reg Y11:*, reg Y12:V, reg names3:cls, reg r52:V, reg list1:cls, reg r53:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r54:V, reg r55:V, reg FUN1:*, reg FUN2:V, reg c8:L, reg c9:L, reg c11:V, reg FUN3:*, reg FUN4:V, reg r56:V, reg c12:L, reg c13:V, reg c15:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r57:V, reg r58:V, reg missing:cls, reg r59:V, reg r60:V, reg c16:L, reg stop:cls, reg r61:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r63:V, reg r64:V, reg as_vector:cls, reg X13:*, reg X14:V, reg p:p(V +), reg r66:V, reg as_vector1:cls, reg Y13:*, reg Y14:V, reg p1:p(V +), reg r68:V, reg tcrossprod:cls, reg r69:V, reg r70:V, reg match_fun:cls, reg FUN5:*, reg FUN6:V, reg p2:p(V +), reg r72:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r73:V, reg r74:V, reg rep:cls, reg r75:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r76:V, reg r77:V, reg X15:*, reg X16:V, reg length2:cls, reg r78:V, reg c17:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r79:V, reg r80:V, reg rep1:cls, reg r81:V, reg FUN7:cls, reg X17:*, reg X18:V, reg p3:p(V +), reg Y15:*, reg Y16:V, reg p4:p(V +), reg ddd1:dots?, reg r85:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r86:V, reg r87:V, reg dX:*, reg dX1:V, reg dY:*, reg dY1:V, reg c18:cls, reg r88:V, reg l:*, reg dim__:cls, reg r89:V, reg no_nx2:*, reg no_nx3:V, reg c19:L, reg c21:V, reg no_ny2:*, reg no_ny3:V, reg c22:L, reg c23:V, reg r90:V, reg c25:L, reg no_nx4:*, reg no_nx5:V, reg c26:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r91:V, reg r92:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r93:V, reg r94:V, reg dX2:*, reg dX3:V, reg length3:cls, reg r95:V, reg vector:cls, reg r96:V, reg no_ny4:*, reg no_ny5:V, reg c27:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r98:V, reg r99:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r100:V, reg r101:V, reg dY2:*, reg dY3:V, reg length4:cls, reg r102:V, reg vector1:cls, reg r103:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r104:V, reg r105:V, reg nx2:*, reg nx3:V, reg ny2:*, reg ny3:V, reg c28:cls, reg r106:V, reg l1:*, reg dimnames__:cls, reg r107:V, reg robj:*, reg robj1:V |
    mkenv;
    st X = X;
    st Y = Y;
    FUN_isMissing = missing.0(FUN);
    if FUN_isMissing then L0("*") else L0(FUN);
  L0(FUN_orDefault):
    st FUN = FUN_orDefault;
    st `...` = ddd;
    sym = ldf `is.array`;
    base = ldf `is.array` in base;
    guard = `==`.4(sym, base);
    if guard then L50() else L51();
  L1(r1):
    c = `as.logical`(r1);
    if c then L54() else L2();
  L50():
    X1 = ld X;
    check L52() else D0();
  L51():
    r = dyn base(<sym X>);
    goto L1(r);
  D0():
    deopt 2 [X1];
  L2():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L6():
    sym9 = ldf `is.array`;
    base9 = ldf `is.array` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L87() else L88();
  L52():
    X2 = force? X1;
    checkMissing(X2);
    is_array = ldf `is.array` in base;
    r2 = dyn is_array(X2);
    check L53() else D1();
  L54():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L55() else L56();
  D1():
    deopt 5 [r2];
  L3(r4):
    st dX = r4;
    sym2 = ldf dimnames;
    base2 = ldf dimnames in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L7(r13):
    st dX = r13;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L13(r28):
    c4 = `as.logical`(r28);
    if c4 then L91() else L14();
  L53():
    goto L1(r2);
  L55():
    X3 = ld X;
    check L57() else D2();
  L56():
    r3 = dyn base1(<sym X>);
    goto L3(r3);
  L67():
    X7 = ld X;
    check L69() else D7();
  L68():
    r12 = dyn base4(<sym X>);
    goto L7(r12);
  L87():
    Y1 = ld Y;
    check L89() else D15();
  L88():
    r27 = dyn base9(<sym Y>);
    goto L13(r27);
  D2():
    deopt 8 [X3];
  D7():
    deopt 27 [X7];
  D15():
    deopt 59 [Y1];
  L4(r7):
    st nx = r7;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L63() else L64();
  L8(r16):
    st `no.nx` = r16;
    no_nx = ld `no.nx`;
    check L77() else D11();
  L14():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L104() else L105();
  L18():
    sym18 = ldf `is.character`;
    base18 = ldf `is.character` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L124() else L125();
  L57():
    X4 = force? X3;
    checkMissing(X4);
    dim = ldf dim in base;
    r5 = dyn dim(X4);
    check L58() else D3();
  L59():
    X5 = ld X;
    check L61() else D4();
  L60():
    r6 = dyn base2(<sym X>);
    goto L4(r6);
  L69():
    X8 = force? X7;
    checkMissing(X8);
    length = ldf length in base;
    r14 = dyn length(X8);
    check L70() else D8();
  L71():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L73() else L74();
  L72():
    r15 = dyn base5(<lang names(X)>);
    goto L8(r15);
  L89():
    Y2 = force? Y1;
    checkMissing(Y2);
    is_array1 = ldf `is.array` in base;
    r29 = dyn is_array1(Y2);
    check L90() else D16();
  L91():
    sym10 = ldf dim;
    base10 = ldf dim in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L92() else L93();
  D3():
    deopt 11 [r5];
  D4():
    deopt 15 [X5];
  D8():
    deopt 30 [r14];
  D11():
    deopt 41 [no_nx];
  D16():
    deopt 62 [r29];
  L5(r10):
    st `no.nx` = r10;
    goto L6();
  L9(r18):
    c2 = `==`(r18, NULL);
    goto L8(c2);
  L15(r31):
    st dY = r31;
    sym11 = ldf dimnames;
    base11 = ldf dimnames in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L96() else L97();
  L19(r40):
    st dY = r40;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L108() else L109();
  L25(r55):
    c9 = `as.logical`(r55);
    if c9 then L127() else L26(c9);
  L58():
    goto L3(r5);
  L61():
    X6 = force? X5;
    checkMissing(X6);
    dimnames = ldf dimnames in base;
    r8 = dyn dimnames(X6);
    check L62() else D5();
  L63():
    nx = ld nx;
    check L65() else D6();
  L64():
    r9 = dyn base3(<sym nx>);
    goto L5(r9);
  L70():
    goto L7(r14);
  L73():
    X9 = ld X;
    check L75() else D9();
  L74():
    r17 = dyn base6(<sym X>);
    goto L9(r17);
  L77():
    no_nx1 = force? no_nx;
    checkMissing(no_nx1);
    r20 = `!`(no_nx1);
    c3 = `as.logical`(r20);
    if c3 then L78() else L10();
  L90():
    goto L13(r29);
  L92():
    Y3 = ld Y;
    check L94() else D17();
  L93():
    r30 = dyn base10(<sym Y>);
    goto L15(r30);
  L104():
    Y7 = ld Y;
    check L106() else D22();
  L105():
    r39 = dyn base13(<sym Y>);
    goto L19(r39);
  L124():
    FUN1 = ld FUN;
    check L126() else D30();
  L125():
    r54 = dyn base18(<sym FUN>);
    goto L25(r54);
  D5():
    deopt 18 [r8];
  D6():
    deopt 21 [nx];
  D9():
    deopt 35 [X9];
  D17():
    deopt 65 [Y3];
  D22():
    deopt 84 [Y7];
  D30():
    deopt 115 [FUN1];
  L10():
    goto L6();
  L16(r34):
    st ny = r34;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L100() else L101();
  L20(r43):
    st `no.ny` = r43;
    no_ny = ld `no.ny`;
    check L114() else D26();
  L26(c11):
    c15 = `as.logical`(c11);
    if c15 then L130() else L27();
  L62():
    goto L4(r8);
  L65():
    nx1 = force? nx;
    checkMissing(nx1);
    c1 = `==`(nx1, NULL);
    goto L5(c1);
  L75():
    X10 = force? X9;
    checkMissing(X10);
    names = ldf names in base;
    r19 = dyn names(X10);
    check L76() else D10();
  L78():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L79() else L80();
  L94():
    Y4 = force? Y3;
    checkMissing(Y4);
    dim1 = ldf dim in base;
    r32 = dyn dim1(Y4);
    check L95() else D18();
  L96():
    Y5 = ld Y;
    check L98() else D19();
  L97():
    r33 = dyn base11(<sym Y>);
    goto L16(r33);
  L106():
    Y8 = force? Y7;
    checkMissing(Y8);
    length1 = ldf length in base;
    r41 = dyn length1(Y8);
    check L107() else D23();
  L108():
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L110() else L111();
  L109():
    r42 = dyn base14(<lang names(Y)>);
    goto L20(r42);
  L126():
    FUN2 = force? FUN1;
    checkMissing(FUN2);
    c8 = `is.character`(FUN2);
    goto L25(c8);
  L127():
    FUN3 = ld FUN;
    check L128() else D31();
  D10():
    deopt 38 [r19];
  D18():
    deopt 68 [r32];
  D19():
    deopt 72 [Y5];
  D23():
    deopt 87 [r41];
  D26():
    deopt 98 [no_ny];
  D31():
    deopt 118 [c9, FUN3];
  L11(r22):
    st nx = r22;
    goto L6();
  L17(r37):
    st `no.ny` = r37;
    goto L18();
  L21(r45):
    c6 = `==`(r45, NULL);
    goto L20(c6);
  L27():
    match_fun = ldf `match.fun`;
    check L145() else D39();
  L32(r70):
    st robj = r70;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L159() else L160();
  L76():
    goto L9(r19);
  L79():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L81() else L82();
  L80():
    r21 = dyn base7(<lang names(X)>);
    goto L11(r21);
  L95():
    goto L15(r32);
  L98():
    Y6 = force? Y5;
    checkMissing(Y6);
    dimnames1 = ldf dimnames in base;
    r35 = dyn dimnames1(Y6);
    check L99() else D20();
  L100():
    ny = ld ny;
    check L102() else D21();
  L101():
    r36 = dyn base12(<sym ny>);
    goto L17(r36);
  L107():
    goto L19(r41);
  L110():
    Y9 = ld Y;
    check L112() else D24();
  L111():
    r44 = dyn base15(<sym Y>);
    goto L21(r44);
  L114():
    no_ny1 = force? no_ny;
    checkMissing(no_ny1);
    r47 = `!`(no_ny1);
    c7 = `as.logical`(r47);
    if c7 then L115() else L22();
  L128():
    FUN4 = force? FUN3;
    checkMissing(FUN4);
    r56 = `==`(FUN4, "*");
    c12 = `as.logical`(r56);
    c13 = `&&`(c9, c12);
    goto L26(c13);
  L130():
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L131() else L132();
  D20():
    deopt 75 [r35];
  D21():
    deopt 78 [ny];
  D24():
    deopt 92 [Y9];
  D39():
    deopt 146 [];
  L12(r24):
    list = ldf list in base;
    r26 = dyn list(r24);
    check L85() else D14();
  L22():
    goto L18();
  L28(r58):
    r60 = `!`(r58);
    c16 = `as.logical`(r60);
    if c16 then L133() else L29();
  L38(r87):
    l = ld robj;
    dim__ = ldf `dim<-`;
    check L164() else D48();
  L81():
    X11 = ld X;
    check L83() else D12();
  L82():
    r23 = dyn base8(<sym X>);
    goto L12(r23);
  L99():
    goto L16(r35);
  L102():
    ny1 = force? ny;
    checkMissing(ny1);
    c5 = `==`(ny1, NULL);
    goto L17(c5);
  L112():
    Y10 = force? Y9;
    checkMissing(Y10);
    names2 = ldf names in base;
    r46 = dyn names2(Y10);
    check L113() else D25();
  L115():
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L116() else L117();
  L131():
    missing = ldf missing in base;
    r59 = dyn missing(<sym ...>);
    goto L28(r59);
  L132():
    r57 = dyn base19(<sym ...>);
    goto L28(r57);
  L145():
    p2 = prom<V +>{
      FUN5 = ld FUN;
      FUN6 = force? FUN5;
      checkMissing(FUN6);
      return FUN6;
    };
    r72 = dyn match_fun(p2);
    check L146() else D40();
  L159():
    dX = ld dX;
    check L161() else D45();
  L160():
    r86 = dyn base24(<sym dX>, <sym dY>);
    goto L38(r86);
  D12():
    deopt 48 [X11];
  D14():
    deopt 53 [r26];
  D25():
    deopt 95 [r46];
  D40():
    deopt 148 [r72];
  D45():
    deopt 175 [dX];
  D48():
    deopt 182 [r87, l, r87];
  L23(r49):
    st ny = r49;
    goto L18();
  L29():
    goto L30();
  L30():
    sym20 = ldf tcrossprod;
    base20 = ldf tcrossprod in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L137() else L138();
  L83():
    X12 = force? X11;
    checkMissing(X12);
    names1 = ldf names in base;
    r25 = dyn names1(X12);
    check L84() else D13();
  L85():
    goto L11(r26);
  L113():
    goto L21(r46);
  L116():
    sym17 = ldf names;
    base17 = ldf names in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L118() else L119();
  L117():
    r48 = dyn base16(<lang names(Y)>);
    goto L23(r48);
  L133():
    stop = ldf stop;
    check L134() else D32();
  L146():
    st FUN = r72;
    sym21 = ldf rep;
    base21 = ldf rep in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L147() else L148();
  L161():
    dX1 = force? dX;
    checkMissing(dX1);
    dY = ld dY;
    check L162() else D46();
  L164():
    r89 = dyn dim__(l, NULL, r87);
    check L165() else D49();
  D13():
    deopt 51 [r25];
  D32():
    deopt 128 [];
  D46():
    deopt 177 [dY];
  D49():
    deopt 184 [r87, r89];
  L24(r51):
    list1 = ldf list in base;
    r53 = dyn list1(r51);
    check L122() else D29();
  L31(r64):
    goto L32(r64);
  L33(r74):
    st Y = r74;
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L149() else L150();
  L84():
    goto L12(r25);
  L118():
    Y11 = ld Y;
    check L120() else D27();
  L119():
    r50 = dyn base17(<sym Y>);
    goto L24(r50);
  L134():
    r61 = dyn stop("using ... with FUN = \"*\" is an error");
    check L135() else D33();
  L137():
    as_vector = ldf `as.vector`;
    check L139() else D34();
  L138():
    r63 = dyn base20(<lang as.vector(X)>, <lang as.vector(Y)>);
    goto L31(r63);
  L147():
    rep = ldf rep in base;
    r75 = dyn rep(<sym Y>, <lang rep.int(length(X), length(Y))>);
    goto L33(r75);
  L148():
    r73 = dyn base21(<sym Y>, <lang rep.int(length(X), length(Y))>);
    goto L33(r73);
  L162():
    dY1 = force? dY;
    checkMissing(dY1);
    c18 = ldf c in base;
    r88 = dyn c18(dX1, dY1);
    check L163() else D47();
  L165():
    st robj = r89;
    no_nx2 = ld `no.nx`;
    check L166() else D50();
  D27():
    deopt 105 [Y11];
  D29():
    deopt 110 [r53];
  D33():
    deopt 130 [r61];
  D34():
    deopt 136 [];
  D47():
    deopt 180 [r88];
  D50():
    deopt 186 [no_nx2];
  L34(r77):
    c17 = `as.logical`(r77);
    if c17 then L153() else L35();
  L120():
    Y12 = force? Y11;
    checkMissing(Y12);
    names3 = ldf names in base;
    r52 = dyn names3(Y12);
    check L121() else D28();
  L122():
    goto L23(r53);
  L135():
    goto L30();
  L139():
    p = prom<V +>{
      X13 = ld X;
      X14 = force? X13;
      checkMissing(X14);
      return X14;
    };
    r66 = dyn as_vector(p);
    check L140() else D35();
  L149():
    X15 = ld X;
    check L151() else D41();
  L150():
    r76 = dyn base22(<sym X>);
    goto L34(r76);
  L163():
    goto L38(r88);
  L166():
    no_nx3 = force? no_nx2;
    checkMissing(no_nx3);
    c19 = `as.logical`(no_nx3);
    if c19 then L167() else L39(c19);
  D28():
    deopt 108 [r52];
  D35():
    deopt 138 [r66];
  D41():
    deopt 156 [X15];
  L35():
    goto L37();
  L37():
    FUN7 = ldf FUN;
    check L157() else D43();
  L39(c21):
    r90 = `!`(c21);
    c25 = `as.logical`(r90);
    if c25 then L170() else L40();
  L121():
    goto L24(r52);
  L140():
    as_vector1 = ldf `as.vector`;
    check L141() else D36();
  L151():
    X16 = force? X15;
    checkMissing(X16);
    length2 = ldf length in base;
    r78 = dyn length2(X16);
    check L152() else D42();
  L153():
    sym23 = ldf rep;
    base23 = ldf rep in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L154() else L155();
  L167():
    no_ny2 = ld `no.ny`;
    check L168() else D51();
  D36():
    deopt 140 [];
  D42():
    deopt 159 [r78];
  D43():
    deopt 167 [];
  D51():
    deopt 188 [c19, no_ny2];
  L36(r80):
    st X = r80;
    goto L37();
  L40():
    goto L49();
  L49():
    robj = ld robj;
    check L199() else D65();
  L141():
    p1 = prom<V +>{
      Y13 = ld Y;
      Y14 = force? Y13;
      checkMissing(Y14);
      return Y14;
    };
    r68 = dyn as_vector1(p1);
    check L142() else D37();
  L152():
    goto L34(r78);
  L154():
    rep1 = ldf rep in base;
    r81 = dyn rep1(<sym X>, <lang ceiling(`/`(length(Y), length(X)))>);
    goto L36(r81);
  L155():
    r79 = dyn base23[, times](<sym X>, <lang ceiling(`/`(length(Y), length(X)))>);
    goto L36(r79);
  L157():
    p3 = prom<V +>{
      X17 = ld X;
      X18 = force? X17;
      checkMissing(X18);
      return X18;
    };
    p4 = prom<V +>{
      Y15 = ld Y;
      Y16 = force? Y15;
      checkMissing(Y16);
      return Y16;
    };
    ddd1 = ld `...`;
    r85 = dyn FUN7[, , `...`](p3, p4, ddd1);
    check L158() else D44();
  L168():
    no_ny3 = force? no_ny2;
    checkMissing(no_ny3);
    c22 = `as.logical`(no_ny3);
    c23 = `&&`(c19, c22);
    goto L39(c23);
  L170():
    no_nx4 = ld `no.nx`;
    check L171() else D52();
  D37():
    deopt 142 [r68];
  D44():
    deopt 171 [r85];
  D52():
    deopt 192 [no_nx4];
  D65():
    deopt 237 [robj];
  L142():
    tcrossprod = ldf tcrossprod in base;
    r69 = dyn tcrossprod(r66, r68);
    check L143() else D38();
  L158():
    goto L32(r85);
  L171():
    no_nx5 = force? no_nx4;
    checkMissing(no_nx5);
    c26 = `as.logical`(no_nx5);
    if c26 then L172() else L41();
  L199():
    robj1 = force? robj;
    checkMissing(robj1);
    popenv;
    return robj1;
  D38():
    deopt 144 [r69];
  L41():
    no_ny4 = ld `no.ny`;
    check L181() else D56();
  L44():
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L191() else L192();
  L143():
    goto L31(r69);
  L172():
    sym25 = ldf vector;
    base25 = ldf vector in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L173() else L174();
  D56():
    deopt 206 [no_ny4];
  L42(r92):
    st nx = r92;
    goto L44();
  L48(r105):
    l1 = ld robj;
    dimnames__ = ldf `dimnames<-`;
    check L196() else D63();
  L173():
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L175() else L176();
  L174():
    r91 = dyn base25("list", <lang length(dX)>);
    goto L42(r91);
  L181():
    no_ny5 = force? no_ny4;
    checkMissing(no_ny5);
    c27 = `as.logical`(no_ny5);
    if c27 then L182() else L45();
  L191():
    nx2 = ld nx;
    check L193() else D60();
  L192():
    r104 = dyn base29(<sym nx>, <sym ny>);
    goto L48(r104);
  D60():
    deopt 224 [nx2];
  D63():
    deopt 231 [r105, l1, r105];
  L43(r94):
    vector = ldf vector in base;
    r96 = dyn vector("list", r94);
    check L179() else D55();
  L45():
    goto L44();
  L175():
    dX2 = ld dX;
    check L177() else D53();
  L176():
    r93 = dyn base26(<sym dX>);
    goto L43(r93);
  L182():
    sym27 = ldf vector;
    base27 = ldf vector in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L183() else L184();
  L193():
    nx3 = force? nx2;
    checkMissing(nx3);
    ny2 = ld ny;
    check L194() else D61();
  L196():
    r107 = dyn dimnames__(l1, NULL, r105);
    check L197() else D64();
  D53():
    deopt 199 [dX2];
  D55():
    deopt 204 [r96];
  D61():
    deopt 226 [ny2];
  D64():
    deopt 233 [r105, r107];
  L46(r99):
    st ny = r99;
    goto L44();
  L177():
    dX3 = force? dX2;
    checkMissing(dX3);
    length3 = ldf length in base;
    r95 = dyn length3(dX3);
    check L178() else D54();
  L179():
    goto L42(r96);
  L183():
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L185() else L186();
  L184():
    r98 = dyn base27("list", <lang length(dY)>);
    goto L46(r98);
  L194():
    ny3 = force? ny2;
    checkMissing(ny3);
    c28 = ldf c in base;
    r106 = dyn c28(nx3, ny3);
    check L195() else D62();
  L197():
    st robj = r107;
    goto L49();
  D54():
    deopt 202 [r95];
  D62():
    deopt 229 [r106];
  L47(r101):
    vector1 = ldf vector in base;
    r103 = dyn vector1("list", r101);
    check L189() else D59();
  L178():
    goto L43(r95);
  L185():
    dY2 = ld dY;
    check L187() else D57();
  L186():
    r100 = dyn base28(<sym dY>);
    goto L47(r100);
  L195():
    goto L48(r106);
  D57():
    deopt 213 [dY2];
  D59():
    deopt 218 [r103];
  L187():
    dY3 = force? dY2;
    checkMissing(dY3);
    length4 = ldf length in base;
    r102 = dyn length4(dY3);
    check L188() else D58();
  L189():
    goto L46(r103);
  D58():
    deopt 216 [r102];
  L188():
    goto L47(r102);
  }
}