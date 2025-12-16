fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner116829489;
    st `format.octmode` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner116829489(x, width, `...`) {
  (reg x:*, reg width:*, reg ddd:dots) -+> V { var x:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_na:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg isna:*, reg isna1:V, reg r5:V, reg __:cls, reg r6:V, reg as_integer:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg width1:*, reg width2:V, reg c1:V, reg r10:V, reg c2:L, reg paste0:cls, reg width3:*, reg width4:V, reg p:p(V +), reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg x7:*, reg x8:V, reg length:cls, reg r18:V, reg rep_int:cls, reg r19:V, reg sprintf:cls, reg fmt:*, reg fmt1:V, reg p1:p(V +), reg y:*, reg y1:V, reg p2:p(V +), reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg width5:*, reg width6:V, reg c3:V, reg c4:L, reg c6:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg c9:L, reg r26:V, reg y2:*, reg y3:V, reg length1:cls, reg r27:V, reg r28:V, reg c10:L, reg c11:V, reg c13:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg r32:V, reg ans0:*, reg ans1:V, reg nchar:cls, reg r33:V, reg max:cls, reg r34:V, reg sprintf1:cls, reg paste1:cls, reg nc:*, reg nc1:V, reg p3:p(V +), reg r36:V, reg p4:p(V +), reg y4:*, reg y5:V, reg p5:p(V +), reg r39:V, reg ans2:*, reg ans3:V, reg l:*, reg c14:L, reg ans5:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg isna2:*, reg isna3:V, reg r41:V, reg ___:cls, reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg x9:*, reg x10:V, reg dim:cls, reg r45:V, reg l3:*, reg dim__:cls, reg r46:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r47:V, reg r48:V, reg x11:*, reg x12:V, reg dimnames:cls, reg r49:V, reg l4:*, reg dimnames__:cls, reg r50:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r51:V, reg r52:V, reg x13:*, reg x14:V, reg names:cls, reg r53:V, reg l5:*, reg names__:cls, reg r54:V, reg ans8:*, reg ans9:V |
    mkenv;
    st x = x;
    width_isMissing = missing.0(width);
    if width_isMissing then L0(NULL) else L0(width);
  L0(width_orDefault):
    st width = width_orDefault;
    st `...` = ddd;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L1(r1):
    st isna = r1;
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L20():
    x1 = ld x;
    check L22() else D0();
  L21():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2(r4):
    st y = r4;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L22():
    x2 = force? x1;
    checkMissing(x2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(x2);
    check L23() else D1();
  L24():
    x3 = ld x;
    check L26() else D2();
  L25():
    r3 = dyn base1(<lang `[`(x, `!`(isna))>);
    goto L2(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [x3];
  L4(r9):
    r10 = `!`(r9);
    c2 = `as.logical`(r10);
    if c2 then L35() else L5();
  L23():
    goto L1(r2);
  L26():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L27() else L28(x4);
  L32():
    width1 = ld width;
    check L34() else D5();
  L33():
    r8 = dyn base2(<sym width>);
    goto L4(r8);
  D5():
    deopt 19 [width1];
  L3(dx1):
    as_integer = ldf `as.integer` in base;
    r7 = dyn as_integer(dx1);
    check L31() else D4();
  L5():
    goto L6("%o");
  L6(r13):
    st fmt = r13;
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L27():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(x6):
    isna = ld isna;
    check L30() else D3();
  L34():
    width2 = force? width1;
    checkMissing(width2);
    c1 = `==`(width2, NULL);
    goto L4(c1);
  L35():
    paste0 = ldf paste0;
    check L36() else D6();
  D3():
    deopt 11 [x6, isna];
  D4():
    deopt 16 [r7];
  D6():
    deopt 24 [];
  L7(r15):
    st ans = r15;
    sprintf = ldf sprintf;
    check L46() else D11();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L30():
    isna1 = force? isna;
    checkMissing(isna1);
    r5 = `!`(isna1);
    __ = ldf `[` in base;
    r6 = dyn __(x6, r5);
    goto L3(r6);
  L31():
    goto L2(r7);
  L36():
    p = prom<V +>{
      width3 = ld width;
      width4 = force? width3;
      checkMissing(width4);
      return width4;
    };
    r12 = dyn paste0("%0", p, "o");
    check L37() else D7();
  L39():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L40():
    r14 = dyn base3(NA_STR, <lang length(x)>);
    goto L7(r14);
  D7():
    deopt 28 [r12];
  D11():
    deopt 45 [];
  L8(r17):
    rep_int = ldf `rep.int` in base;
    r19 = dyn rep_int(NA_STR, r17);
    check L45() else D10();
  L37():
    goto L6(r12);
  L41():
    x7 = ld x;
    check L43() else D8();
  L42():
    r16 = dyn base4(<sym x>);
    goto L8(r16);
  L46():
    p1 = prom<V +>{
      fmt = ld fmt;
      fmt1 = force? fmt;
      checkMissing(fmt1);
      return fmt1;
    };
    p2 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r22 = dyn sprintf(p1, p2);
    check L47() else D12();
  D8():
    deopt 37 [x7];
  D10():
    deopt 42 [r19];
  D12():
    deopt 48 [r22];
  L43():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r18 = dyn length(x8);
    check L44() else D9();
  L45():
    goto L7(r19);
  L47():
    st ans0 = r22;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  D9():
    deopt 40 [r18];
  L9(r24):
    c4 = `as.logical`(r24);
    if c4 then L51() else L10(c4);
  L44():
    goto L8(r18);
  L48():
    width5 = ld width;
    check L50() else D13();
  L49():
    r23 = dyn base5(<sym width>);
    goto L9(r23);
  D13():
    deopt 51 [width5];
  L10(c6):
    c13 = `as.logical`(c6);
    if c13 then L57() else L12();
  L50():
    width6 = force? width5;
    checkMissing(width6);
    c3 = `==`(width6, NULL);
    goto L9(c3);
  L51():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  L11(c9, r26):
    r28 = `>`(r26, 1);
    c10 = `as.logical`(r28);
    c11 = `&&`(c9, c10);
    goto L10(c11);
  L12():
    goto L15();
  L15():
    ans2 = ld ans0;
    check L68() else D21();
  L52():
    y2 = ld y;
    check L54() else D14();
  L53():
    r25 = dyn base6(<sym y>);
    goto L11(c4, r25);
  L57():
    sym7 = ldf max;
    base7 = ldf max in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L58() else L59();
  D14():
    deopt 56 [c4, y2];
  D21():
    deopt 85 [ans2];
  L13(r30):
    st nc = r30;
    sprintf1 = ldf sprintf;
    check L65() else D19();
  L54():
    y3 = force? y2;
    checkMissing(y3);
    length1 = ldf length in base;
    r27 = dyn length1(y3);
    check L55() else D15();
  L58():
    sym8 = ldf nchar;
    base8 = ldf nchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L60() else L61();
  L59():
    r29 = dyn base7(<lang nchar(ans0)>);
    goto L13(r29);
  L68():
    ans3 = force? ans2;
    checkMissing(ans3);
    l = ld ans;
    c14 = `is.object`(l);
    if c14 then L69() else L70(ans3, l);
  D15():
    deopt 59 [c4, r27];
  D19():
    deopt 78 [];
  L14(r32):
    max = ldf max in base;
    r34 = dyn max(r32);
    check L64() else D18();
  L16(dx3):
    st ans = dx3;
    sym9 = ldf dim;
    base9 = ldf dim in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L73() else L74();
  L55():
    goto L11(c4, r27);
  L60():
    ans0 = ld ans0;
    check L62() else D16();
  L61():
    r31 = dyn base8(<sym ans0>);
    goto L14(r31);
  L65():
    p4 = prom<V +>{
      paste1 = ldf paste0;
      p3 = prom<V +>{
        nc = ld nc;
        nc1 = force? nc;
        checkMissing(nc1);
        return nc1;
      };
      r36 = dyn paste1("%0", p3, "o");
      return r36;
    };
    p5 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r39 = dyn sprintf1(p4, p5);
    check L66() else D20();
  L69():
    dr2 = tryDispatchBuiltin.0("[<-", l, ans3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L71() else L70(ans3, dr2);
  L70(ans5, l2):
    isna2 = ld isna;
    check L72() else D22();
  D16():
    deopt 67 [ans0];
  D18():
    deopt 75 [r34];
  D20():
    deopt 81 [r39];
  D22():
    deopt 88 [ans5, l2, ans3, isna2];
  L17(r44):
    l3 = ld ans;
    dim__ = ldf `dim<-`;
    check L77() else D25();
  L62():
    ans1 = force? ans0;
    checkMissing(ans1);
    nchar = ldf nchar in base;
    r33 = dyn nchar(ans1, "chars", FALSE, NA_LGL);
    check L63() else D17();
  L64():
    goto L13(r34);
  L66():
    st ans0 = r39;
    goto L15();
  L71():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(dx2);
  L72():
    isna3 = force? isna2;
    checkMissing(isna3);
    r41 = `!`(isna3);
    ___ = ldf `[<-` in base;
    r42 = dyn ___(l2, ans3, r41);
    goto L16(r42);
  L73():
    x9 = ld x;
    check L75() else D23();
  L74():
    r43 = dyn base9(<sym x>);
    goto L17(r43);
  D17():
    deopt 73 [r33];
  D23():
    deopt 95 [x9];
  D25():
    deopt 100 [r44, l3, r44];
  L63():
    goto L14(r33);
  L75():
    x10 = force? x9;
    checkMissing(x10);
    dim = ldf dim in base;
    r45 = dyn dim(x10);
    check L76() else D24();
  L77():
    r46 = dyn dim__(l3, NULL, r44);
    check L78() else D26();
  D24():
    deopt 98 [r45];
  D26():
    deopt 102 [r44, r46];
  L76():
    goto L17(r45);
  L78():
    st ans = r46;
    sym10 = ldf dimnames;
    base10 = ldf dimnames in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L79() else L80();
  L18(r48):
    l4 = ld ans;
    dimnames__ = ldf `dimnames<-`;
    check L83() else D29();
  L79():
    x11 = ld x;
    check L81() else D27();
  L80():
    r47 = dyn base10(<sym x>);
    goto L18(r47);
  D27():
    deopt 106 [x11];
  D29():
    deopt 111 [r48, l4, r48];
  L81():
    x12 = force? x11;
    checkMissing(x12);
    dimnames = ldf dimnames in base;
    r49 = dyn dimnames(x12);
    check L82() else D28();
  L83():
    r50 = dyn dimnames__(l4, NULL, r48);
    check L84() else D30();
  D28():
    deopt 109 [r49];
  D30():
    deopt 113 [r48, r50];
  L82():
    goto L18(r49);
  L84():
    st ans = r50;
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L85() else L86();
  L19(r52):
    l5 = ld ans;
    names__ = ldf `names<-`;
    check L89() else D33();
  L85():
    x13 = ld x;
    check L87() else D31();
  L86():
    r51 = dyn base11(<sym x>);
    goto L19(r51);
  D31():
    deopt 117 [x13];
  D33():
    deopt 122 [r52, l5, r52];
  L87():
    x14 = force? x13;
    checkMissing(x14);
    names = ldf names in base;
    r53 = dyn names(x14);
    check L88() else D32();
  L89():
    r54 = dyn names__(l5, NULL, r52);
    check L90() else D34();
  D32():
    deopt 120 [r53];
  D34():
    deopt 124 [r52, r54];
  L88():
    goto L19(r53);
  L90():
    st ans = r54;
    ans8 = ld ans;
    check L91() else D35();
  D35():
    deopt 126 [ans8];
  L91():
    ans9 = force? ans8;
    checkMissing(ans9);
    popenv;
    return ans9;
  }
}