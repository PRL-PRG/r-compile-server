fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1729222426;
    st `format.hexmode` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1729222426(x, width, `upper.case`, `...`) {
  (reg x:*, reg width:*, reg upper_case:*, reg ddd:dots) -+> V { var x:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, var `upper.case`:*, reg upper_case_isMissing:L, reg upper_case_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_na:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg isna:*, reg isna1:V, reg r5:V, reg __:cls, reg r6:V, reg as_integer:cls, reg r7:V, reg upper_case1:*, reg upper_case2:V, reg c1:L, reg r8:S, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg width1:*, reg width2:V, reg c2:V, reg r11:V, reg c3:L, reg paste0:cls, reg width3:*, reg width4:V, reg p:p(V +), reg fmt0:*, reg fmt1:V, reg p1:p(V +), reg r14:V, reg r15:V, reg paste1:cls, reg fmt2:*, reg fmt3:V, reg p2:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg x7:*, reg x8:V, reg length:cls, reg r22:V, reg rep_int:cls, reg r23:V, reg sprintf:cls, reg fmt4:*, reg fmt5:V, reg p3:p(V +), reg y:*, reg y1:V, reg p4:p(V +), reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg width5:*, reg width6:V, reg c4:V, reg c5:L, reg c7:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg c10:L, reg r30:V, reg y2:*, reg y3:V, reg length1:cls, reg r31:V, reg r32:V, reg c11:L, reg c12:V, reg c14:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg ans0:*, reg ans1:V, reg nchar:cls, reg r37:V, reg max:cls, reg r38:V, reg sprintf1:cls, reg paste2:cls, reg nc:*, reg nc1:V, reg p5:p(V +), reg fmt6:*, reg fmt7:V, reg p6:p(V +), reg r41:V, reg p7:p(V +), reg y4:*, reg y5:V, reg p8:p(V +), reg r44:V, reg ans2:*, reg ans3:V, reg l:*, reg c15:L, reg ans5:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg isna2:*, reg isna3:V, reg r46:V, reg ___:cls, reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg x9:*, reg x10:V, reg dim:cls, reg r50:V, reg l3:*, reg dim__:cls, reg r51:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg r53:V, reg x11:*, reg x12:V, reg dimnames:cls, reg r54:V, reg l4:*, reg dimnames__:cls, reg r55:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg r57:V, reg x13:*, reg x14:V, reg names:cls, reg r58:V, reg l5:*, reg names__:cls, reg r59:V, reg ans8:*, reg ans9:V |
    mkenv;
    st x = x;
    width_isMissing = missing.0(width);
    if width_isMissing then L0(NULL) else L0(width);
  L0(width_orDefault):
    st width = width_orDefault;
    upper_case_isMissing = missing.0(upper_case);
    if upper_case_isMissing then L1(FALSE) else L1(upper_case);
  L1(upper_case_orDefault):
    st `upper.case` = upper_case_orDefault;
    st `...` = ddd;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L2(r1):
    st isna = r1;
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L23():
    x1 = ld x;
    check L25() else D0();
  L24():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3(r4):
    st y = r4;
    upper_case1 = ld `upper.case`;
    check L35() else D5();
  L25():
    x2 = force? x1;
    checkMissing(x2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(x2);
    check L26() else D1();
  L27():
    x3 = ld x;
    check L29() else D2();
  L28():
    r3 = dyn base1(<lang `[`(x, `!`(isna))>);
    goto L3(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [x3];
  D5():
    deopt 18 [upper_case1];
  L26():
    goto L2(r2);
  L29():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L30() else L31(x4);
  L35():
    upper_case2 = force? upper_case1;
    checkMissing(upper_case2);
    c1 = `as.logical`(upper_case2);
    if c1 then L36() else L5();
  L4(dx1):
    as_integer = ldf `as.integer` in base;
    r7 = dyn as_integer(dx1);
    check L34() else D4();
  L5():
    goto L6("x");
  L6(r8):
    st fmt0 = r8;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L30():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(x6):
    isna = ld isna;
    check L33() else D3();
  L36():
    goto L6("X");
  D3():
    deopt 11 [x6, isna];
  D4():
    deopt 16 [r7];
  L7(r10):
    r11 = `!`(r10);
    c3 = `as.logical`(r11);
    if c3 then L41() else L8();
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L33():
    isna1 = force? isna;
    checkMissing(isna1);
    r5 = `!`(isna1);
    __ = ldf `[` in base;
    r6 = dyn __(x6, r5);
    goto L4(r6);
  L34():
    goto L3(r7);
  L38():
    width1 = ld width;
    check L40() else D6();
  L39():
    r9 = dyn base2(<sym width>);
    goto L7(r9);
  D6():
    deopt 26 [width1];
  L8():
    paste1 = ldf paste0;
    check L45() else D9();
  L9(r15):
    st fmt = r15;
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L40():
    width2 = force? width1;
    checkMissing(width2);
    c2 = `==`(width2, NULL);
    goto L7(c2);
  L41():
    paste0 = ldf paste0;
    check L42() else D7();
  D7():
    deopt 31 [];
  D9():
    deopt 37 [];
  L10(r19):
    st ans = r19;
    sprintf = ldf sprintf;
    check L54() else D14();
  L42():
    p = prom<V +>{
      width3 = ld width;
      width4 = force? width3;
      checkMissing(width4);
      return width4;
    };
    p1 = prom<V +>{
      fmt0 = ld fmt0;
      fmt1 = force? fmt0;
      checkMissing(fmt1);
      return fmt1;
    };
    r14 = dyn paste0("%0", p, p1);
    check L43() else D8();
  L45():
    p2 = prom<V +>{
      fmt2 = ld fmt0;
      fmt3 = force? fmt2;
      checkMissing(fmt3);
      return fmt3;
    };
    r17 = dyn paste1("%", p2);
    check L46() else D10();
  L47():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L48():
    r18 = dyn base3(NA_STR, <lang length(x)>);
    goto L10(r18);
  D8():
    deopt 35 [r14];
  D10():
    deopt 40 [r17];
  D14():
    deopt 55 [];
  L11(r21):
    rep_int = ldf `rep.int` in base;
    r23 = dyn rep_int(NA_STR, r21);
    check L53() else D13();
  L43():
    goto L9(r14);
  L46():
    goto L9(r17);
  L49():
    x7 = ld x;
    check L51() else D11();
  L50():
    r20 = dyn base4(<sym x>);
    goto L11(r20);
  L54():
    p3 = prom<V +>{
      fmt4 = ld fmt;
      fmt5 = force? fmt4;
      checkMissing(fmt5);
      return fmt5;
    };
    p4 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r26 = dyn sprintf(p3, p4);
    check L55() else D15();
  D11():
    deopt 47 [x7];
  D13():
    deopt 52 [r23];
  D15():
    deopt 58 [r26];
  L51():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r22 = dyn length(x8);
    check L52() else D12();
  L53():
    goto L10(r23);
  L55():
    st ans0 = r26;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  D12():
    deopt 50 [r22];
  L12(r28):
    c5 = `as.logical`(r28);
    if c5 then L59() else L13(c5);
  L52():
    goto L11(r22);
  L56():
    width5 = ld width;
    check L58() else D16();
  L57():
    r27 = dyn base5(<sym width>);
    goto L12(r27);
  D16():
    deopt 61 [width5];
  L13(c7):
    c14 = `as.logical`(c7);
    if c14 then L65() else L15();
  L58():
    width6 = force? width5;
    checkMissing(width6);
    c4 = `==`(width6, NULL);
    goto L12(c4);
  L59():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L60() else L61();
  L14(c10, r30):
    r32 = `>`(r30, 1);
    c11 = `as.logical`(r32);
    c12 = `&&`(c10, c11);
    goto L13(c12);
  L15():
    goto L18();
  L18():
    ans2 = ld ans0;
    check L76() else D24();
  L60():
    y2 = ld y;
    check L62() else D17();
  L61():
    r29 = dyn base6(<sym y>);
    goto L14(c5, r29);
  L65():
    sym7 = ldf max;
    base7 = ldf max in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L66() else L67();
  D17():
    deopt 66 [c5, y2];
  D24():
    deopt 95 [ans2];
  L16(r34):
    st nc = r34;
    sprintf1 = ldf sprintf;
    check L73() else D22();
  L62():
    y3 = force? y2;
    checkMissing(y3);
    length1 = ldf length in base;
    r31 = dyn length1(y3);
    check L63() else D18();
  L66():
    sym8 = ldf nchar;
    base8 = ldf nchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L68() else L69();
  L67():
    r33 = dyn base7(<lang nchar(ans0)>);
    goto L16(r33);
  L76():
    ans3 = force? ans2;
    checkMissing(ans3);
    l = ld ans;
    c15 = `is.object`(l);
    if c15 then L77() else L78(ans3, l);
  D18():
    deopt 69 [c5, r31];
  D22():
    deopt 88 [];
  L17(r36):
    max = ldf max in base;
    r38 = dyn max(r36);
    check L72() else D21();
  L19(dx3):
    st ans = dx3;
    sym9 = ldf dim;
    base9 = ldf dim in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L81() else L82();
  L63():
    goto L14(c5, r31);
  L68():
    ans0 = ld ans0;
    check L70() else D19();
  L69():
    r35 = dyn base8(<sym ans0>);
    goto L17(r35);
  L73():
    p7 = prom<V +>{
      paste2 = ldf paste0;
      p5 = prom<V +>{
        nc = ld nc;
        nc1 = force? nc;
        checkMissing(nc1);
        return nc1;
      };
      p6 = prom<V +>{
        fmt6 = ld fmt0;
        fmt7 = force? fmt6;
        checkMissing(fmt7);
        return fmt7;
      };
      r41 = dyn paste2("%0", p5, p6);
      return r41;
    };
    p8 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r44 = dyn sprintf1(p7, p8);
    check L74() else D23();
  L77():
    dr2 = tryDispatchBuiltin.0("[<-", l, ans3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L79() else L78(ans3, dr2);
  L78(ans5, l2):
    isna2 = ld isna;
    check L80() else D25();
  D19():
    deopt 77 [ans0];
  D21():
    deopt 85 [r38];
  D23():
    deopt 91 [r44];
  D25():
    deopt 98 [ans5, l2, ans3, isna2];
  L20(r49):
    l3 = ld ans;
    dim__ = ldf `dim<-`;
    check L85() else D28();
  L70():
    ans1 = force? ans0;
    checkMissing(ans1);
    nchar = ldf nchar in base;
    r37 = dyn nchar(ans1, "chars", FALSE, NA_LGL);
    check L71() else D20();
  L72():
    goto L16(r38);
  L74():
    st ans0 = r44;
    goto L18();
  L79():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(dx2);
  L80():
    isna3 = force? isna2;
    checkMissing(isna3);
    r46 = `!`(isna3);
    ___ = ldf `[<-` in base;
    r47 = dyn ___(l2, ans3, r46);
    goto L19(r47);
  L81():
    x9 = ld x;
    check L83() else D26();
  L82():
    r48 = dyn base9(<sym x>);
    goto L20(r48);
  D20():
    deopt 83 [r37];
  D26():
    deopt 105 [x9];
  D28():
    deopt 110 [r49, l3, r49];
  L71():
    goto L17(r37);
  L83():
    x10 = force? x9;
    checkMissing(x10);
    dim = ldf dim in base;
    r50 = dyn dim(x10);
    check L84() else D27();
  L85():
    r51 = dyn dim__(l3, NULL, r49);
    check L86() else D29();
  D27():
    deopt 108 [r50];
  D29():
    deopt 112 [r49, r51];
  L84():
    goto L20(r50);
  L86():
    st ans = r51;
    sym10 = ldf dimnames;
    base10 = ldf dimnames in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L87() else L88();
  L21(r53):
    l4 = ld ans;
    dimnames__ = ldf `dimnames<-`;
    check L91() else D32();
  L87():
    x11 = ld x;
    check L89() else D30();
  L88():
    r52 = dyn base10(<sym x>);
    goto L21(r52);
  D30():
    deopt 116 [x11];
  D32():
    deopt 121 [r53, l4, r53];
  L89():
    x12 = force? x11;
    checkMissing(x12);
    dimnames = ldf dimnames in base;
    r54 = dyn dimnames(x12);
    check L90() else D31();
  L91():
    r55 = dyn dimnames__(l4, NULL, r53);
    check L92() else D33();
  D31():
    deopt 119 [r54];
  D33():
    deopt 123 [r53, r55];
  L90():
    goto L21(r54);
  L92():
    st ans = r55;
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L93() else L94();
  L22(r57):
    l5 = ld ans;
    names__ = ldf `names<-`;
    check L97() else D36();
  L93():
    x13 = ld x;
    check L95() else D34();
  L94():
    r56 = dyn base11(<sym x>);
    goto L22(r56);
  D34():
    deopt 127 [x13];
  D36():
    deopt 132 [r57, l5, r57];
  L95():
    x14 = force? x13;
    checkMissing(x14);
    names = ldf names in base;
    r58 = dyn names(x14);
    check L96() else D35();
  L97():
    r59 = dyn names__(l5, NULL, r57);
    check L98() else D37();
  D35():
    deopt 130 [r58];
  D37():
    deopt 134 [r57, r59];
  L96():
    goto L22(r58);
  L98():
    st ans = r59;
    ans8 = ld ans;
    check L99() else D38();
  D38():
    deopt 136 [ans8];
  L99():
    ans9 = force? ans8;
    checkMissing(ans9);
    popenv;
    return ans9;
  }
}