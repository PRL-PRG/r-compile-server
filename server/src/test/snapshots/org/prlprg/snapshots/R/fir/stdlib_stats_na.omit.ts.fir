fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `na.omit.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg time:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg frequency:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg object5:*, reg object6:V, reg is_matrix:cls, reg r6:V, reg c:L, reg which:cls, reg apply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg object7:*, reg object8:V, reg is_na:cls, reg r9:V, reg r10:V, reg p2:p(V +), reg all:*, reg all1:V, reg p3:p(V +), reg r13:V, reg p4:p(V +), reg r15:V, reg which1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg object9:*, reg object10:V, reg is_na1:cls, reg r19:V, reg r20:V, reg p5:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg good:*, reg good1:V, reg length:cls, reg r25:V, reg r26:V, reg c1:L, reg stop:cls, reg r27:V, reg integer:cls, reg r29:V, reg NROW:cls, reg object11:*, reg object12:V, reg p6:p(V +), reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg good2:*, reg good3:V, reg min:cls, reg r34:V, reg st:*, reg st1:V, reg r35:V, reg c2:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg omit:*, reg omit1:V, reg st2:*, reg st3:V, reg r38:V, reg r39:V, reg c3:cls, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg good4:*, reg good5:V, reg max:cls, reg r44:V, reg en:*, reg en1:V, reg n:*, reg n1:V, reg r45:V, reg c4:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg omit2:*, reg omit3:V, reg en2:*, reg en3:V, reg r48:V, reg n2:*, reg n3:V, reg r49:V, reg c5:cls, reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg r53:V, reg object13:*, reg object14:V, reg attr:cls, reg r54:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg omit4:*, reg omit5:V, reg length1:cls, reg r57:V, reg c6:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r58:V, reg r59:V, reg object15:*, reg object16:V, reg is_matrix1:cls, reg r60:V, reg c7:L, reg object17:*, reg object18:V, reg c8:L, reg object20:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg st4:*, reg st5:V, reg en4:*, reg en5:V, reg r61:V, reg __:cls, reg r62:V, reg dx2:V, reg object21:*, reg object22:V, reg c9:L, reg object24:V, reg dr2:V, reg dc1:L, reg dx3:V, reg st6:*, reg st7:V, reg en6:*, reg en7:V, reg r63:V, reg __1:cls, reg r64:V, reg l:*, reg attr__:cls, reg r65:V, reg omit6:*, reg omit7:V, reg l1:*, reg attr__1:cls, reg r66:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg tm:*, reg tm1:V, reg c10:L, reg tm3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg st8:*, reg st9:V, reg __2:cls, reg r69:V, reg tm4:*, reg tm5:V, reg c11:L, reg tm7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg en8:*, reg en9:V, reg __3:cls, reg r70:V, reg xfreq:*, reg xfreq1:V, reg c12:cls, reg r71:V, reg l2:*, reg tsp__:cls, reg r72:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r73:V, reg r74:V, reg cl:*, reg cl1:V, reg c13:V, reg r75:V, reg c14:L, reg cl2:*, reg cl3:V, reg l3:*, reg class__:cls, reg r76:V, reg cl4:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r77:V, reg r78:V, reg object25:*, reg object26:V, reg anyNA:cls, reg r79:V, reg c15:L, reg stop1:cls, reg r80:V, reg object27:*, reg object28:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    time = ldf time;
    check L31() else D0();
  D0():
    deopt 1 [];
  L31():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn time(p);
    check L32() else D1();
  D1():
    deopt 3 [r1];
  L32():
    st tm = r1;
    frequency = ldf frequency;
    check L33() else D2();
  D2():
    deopt 6 [];
  L33():
    p1 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r3 = dyn frequency(p1);
    check L34() else D3();
  D3():
    deopt 8 [r3];
  L34():
    st xfreq = r3;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L0(r5):
    c = `as.logical`(r5);
    if c then L39() else L1();
  L35():
    object5 = ld object;
    check L37() else D4();
  L36():
    r4 = dyn base(<sym object>);
    goto L0(r4);
  D4():
    deopt 12 [object5];
  L1():
    which1 = ldf which;
    check L43() else D8();
  L2():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L37():
    object6 = force? object5;
    checkMissing(object6);
    is_matrix = ldf `is.matrix` in base;
    r6 = dyn is_matrix(object6);
    check L38() else D5();
  L39():
    which = ldf which;
    check L40() else D6();
  D5():
    deopt 15 [r6];
  D6():
    deopt 17 [];
  D8():
    deopt 22 [];
  L3(r24):
    r26 = `!`(r24);
    c1 = `as.logical`(r26);
    if c1 then L49() else L4();
  L38():
    goto L0(r6);
  L40():
    p4 = prom<V +>{
      apply = ldf apply;
      p2 = prom<V +>{
        sym1 = ldf `is.na`;
        base1 = ldf `is.na` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r8):
        r10 = `!`(r8);
        return r10;
      L1():
        object7 = ld object;
        object8 = force? object7;
        checkMissing(object8);
        is_na = ldf `is.na` in base;
        r9 = dyn is_na(object8);
        goto L0(r9);
      L2():
        r7 = dyn base1(<sym object>);
        goto L0(r7);
      };
      p3 = prom<V +>{
        all = ld all;
        all1 = force? all;
        checkMissing(all1);
        return all1;
      };
      r13 = dyn apply(p2, 1, p3);
      return r13;
    };
    r15 = dyn which(p4);
    check L41() else D7();
  L43():
    p5 = prom<V +>{
      sym2 = ldf `is.na`;
      base2 = ldf `is.na` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      r20 = `!`(r18);
      return r20;
    L1():
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      is_na1 = ldf `is.na` in base;
      r19 = dyn is_na1(object10);
      goto L0(r19);
    L2():
      r17 = dyn base2(<sym object>);
      goto L0(r17);
    };
    r22 = dyn which1(p5);
    check L44() else D9();
  L45():
    good = ld good;
    check L47() else D10();
  L46():
    r23 = dyn base3(<sym good>);
    goto L3(r23);
  D7():
    deopt 19 [r15];
  D9():
    deopt 24 [r22];
  D10():
    deopt 28 [good];
  L4():
    goto L5();
  L5():
    integer = ldf integer;
    check L53() else D14();
  L41():
    st good = r15;
    goto L2();
  L44():
    st good = r22;
    goto L2();
  L47():
    good1 = force? good;
    checkMissing(good1);
    length = ldf length in base;
    r25 = dyn length(good1);
    check L48() else D11();
  L49():
    stop = ldf stop;
    check L50() else D12();
  D11():
    deopt 31 [r25];
  D12():
    deopt 34 [];
  D14():
    deopt 40 [];
  L48():
    goto L3(r25);
  L50():
    r27 = dyn stop("all times contain an NA");
    check L51() else D13();
  L53():
    r29 = dyn integer();
    check L54() else D15();
  D13():
    deopt 36 [r27];
  D15():
    deopt 41 [r29];
  L51():
    goto L5();
  L54():
    st omit = r29;
    NROW = ldf NROW;
    check L55() else D16();
  D16():
    deopt 44 [];
  L55():
    p6 = prom<V +>{
      object11 = ld object;
      object12 = force? object11;
      checkMissing(object12);
      return object12;
    };
    r31 = dyn NROW(p6);
    check L56() else D17();
  D17():
    deopt 46 [r31];
  L56():
    st n = r31;
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  L6(r33):
    st st = r33;
    st = ld st;
    check L61() else D20();
  L57():
    good2 = ld good;
    check L59() else D18();
  L58():
    r32 = dyn base4(<sym good>);
    goto L6(r32);
  D18():
    deopt 50 [good2];
  D20():
    deopt 55 [st];
  L59():
    good3 = force? good2;
    checkMissing(good3);
    min = ldf min in base;
    r34 = dyn min(good3);
    check L60() else D19();
  L61():
    st1 = force? st;
    checkMissing(st1);
    r35 = `>`(st1, 1.0);
    c2 = `as.logical`(r35);
    if c2 then L62() else L7();
  D19():
    deopt 53 [r34];
  L7():
    goto L9();
  L9():
    sym6 = ldf max;
    base6 = ldf max in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L60():
    goto L6(r34);
  L62():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L8(r37):
    st omit = r37;
    goto L9();
  L10(r43):
    st en = r43;
    en = ld en;
    check L73() else D26();
  L63():
    omit = ld omit;
    check L65() else D21();
  L64():
    r36 = dyn base5(<sym omit>, <lang `:`(1, `(`(`-`(st, 1.0)))>);
    goto L8(r36);
  L69():
    good4 = ld good;
    check L71() else D24();
  L70():
    r42 = dyn base6(<sym good>);
    goto L10(r42);
  D21():
    deopt 61 [omit];
  D24():
    deopt 76 [good4];
  D26():
    deopt 81 [en];
  L65():
    omit1 = force? omit;
    checkMissing(omit1);
    st2 = ld st;
    check L66() else D22();
  L71():
    good5 = force? good4;
    checkMissing(good5);
    max = ldf max in base;
    r44 = dyn max(good5);
    check L72() else D25();
  L73():
    en1 = force? en;
    checkMissing(en1);
    n = ld n;
    check L74() else D27();
  D22():
    deopt 64 [1, st2];
  D25():
    deopt 79 [r44];
  D27():
    deopt 82 [en1, n];
  L66():
    st3 = force? st2;
    checkMissing(st3);
    r38 = `-`(st3, 1.0);
    r39 = `:`(1, r38);
    c3 = ldf c in base;
    r40 = dyn c3(omit1, r39);
    check L67() else D23();
  L72():
    goto L10(r44);
  L74():
    n1 = force? n;
    checkMissing(n1);
    r45 = `<`(en1, n1);
    c4 = `as.logical`(r45);
    if c4 then L75() else L11();
  D23():
    deopt 70 [r40];
  L11():
    goto L13();
  L13():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L83() else L84();
  L67():
    goto L8(r40);
  L75():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L12(r47):
    st omit = r47;
    goto L13();
  L14(r53):
    st cl = r53;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L87() else L88();
  L76():
    omit2 = ld omit;
    check L78() else D28();
  L77():
    r46 = dyn base7(<sym omit>, <lang `:`(`(`(`+`(en, 1.0)), n)>);
    goto L12(r46);
  L83():
    object13 = ld object;
    check L85() else D32();
  L84():
    r52 = dyn base8(<sym object>, "class");
    goto L14(r52);
  D28():
    deopt 87 [omit2];
  D32():
    deopt 102 [object13];
  L15(r56):
    c6 = `as.logical`(r56);
    if c6 then L91() else L16();
  L78():
    omit3 = force? omit2;
    checkMissing(omit3);
    en2 = ld en;
    check L79() else D29();
  L85():
    object14 = force? object13;
    checkMissing(object14);
    attr = ldf attr in base;
    r54 = dyn attr(object14, "class");
    check L86() else D33();
  L87():
    omit4 = ld omit;
    check L89() else D34();
  L88():
    r55 = dyn base9(<sym omit>);
    goto L15(r55);
  D29():
    deopt 89 [en2];
  D33():
    deopt 106 [r54];
  D34():
    deopt 110 [omit4];
  L16():
    goto L27();
  L27():
    sym13 = ldf anyNA;
    base13 = ldf anyNA in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L140() else L141();
  L79():
    en3 = force? en2;
    checkMissing(en3);
    r48 = `+`(en3, 1.0);
    n2 = ld n;
    check L80() else D30();
  L86():
    goto L14(r54);
  L89():
    omit5 = force? omit4;
    checkMissing(omit5);
    length1 = ldf length in base;
    r57 = dyn length1(omit5);
    check L90() else D35();
  L91():
    sym10 = ldf `is.matrix`;
    base10 = ldf `is.matrix` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L92() else L93();
  D30():
    deopt 92 [r48, n2];
  D35():
    deopt 113 [r57];
  L17(r59):
    c7 = `as.logical`(r59);
    if c7 then L96() else L18();
  L28(r78):
    c15 = `as.logical`(r78);
    if c15 then L144() else L29();
  L80():
    n3 = force? n2;
    checkMissing(n3);
    r49 = `:`(r48, n3);
    c5 = ldf c in base;
    r50 = dyn c5(omit3, r49);
    check L81() else D31();
  L90():
    goto L15(r57);
  L92():
    object15 = ld object;
    check L94() else D36();
  L93():
    r58 = dyn base10(<sym object>);
    goto L17(r58);
  L140():
    object25 = ld object;
    check L142() else D61();
  L141():
    r77 = dyn base13(<sym object>);
    goto L28(r77);
  D31():
    deopt 96 [r50];
  D36():
    deopt 116 [object15];
  D61():
    deopt 192 [object25];
  L18():
    object21 = ld object;
    check L104() else D41();
  L20(dx2):
    st object = dx2;
    l = ld omit;
    attr__ = ldf `attr<-`;
    check L110() else D44();
  L29():
    goto L30();
  L30():
    object27 = ld object;
    check L148() else D65();
  L81():
    goto L12(r50);
  L94():
    object16 = force? object15;
    checkMissing(object16);
    is_matrix1 = ldf `is.matrix` in base;
    r60 = dyn is_matrix1(object16);
    check L95() else D37();
  L96():
    object17 = ld object;
    check L97() else D38();
  L142():
    object26 = force? object25;
    checkMissing(object26);
    anyNA = ldf anyNA in base;
    r79 = dyn anyNA(object26);
    check L143() else D62();
  L144():
    stop1 = ldf stop;
    check L145() else D63();
  D37():
    deopt 119 [r60];
  D38():
    deopt 120 [object17];
  D41():
    deopt 129 [object21];
  D44():
    deopt 140 ["omit", l, "omit"];
  D62():
    deopt 195 [r79];
  D63():
    deopt 197 [];
  D65():
    deopt 202 [object27];
  L95():
    goto L17(r60);
  L97():
    object18 = force? object17;
    checkMissing(object18);
    c8 = `is.object`(object18);
    if c8 then L98() else L99(object18);
  L104():
    object22 = force? object21;
    checkMissing(object22);
    c9 = `is.object`(object22);
    if c9 then L105() else L106(object22);
  L110():
    r65 = dyn attr__(l, NULL, "class", "omit");
    check L111() else D45();
  L143():
    goto L28(r79);
  L145():
    r80 = dyn stop1("time series contains internal NAs");
    check L146() else D64();
  L148():
    object28 = force? object27;
    checkMissing(object28);
    popenv;
    return object28;
  D45():
    deopt 143 ["omit", r65];
  D64():
    deopt 199 [r80];
  L19(dx1):
    goto L20(dx1);
  L98():
    dr = tryDispatchBuiltin.1("[", object18);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L100() else L99(dr);
  L99(object20):
    st4 = ld st;
    check L101() else D39();
  L105():
    dr2 = tryDispatchBuiltin.1("[", object22);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L107() else L106(dr2);
  L106(object24):
    st6 = ld st;
    check L108() else D42();
  L111():
    st omit = r65;
    omit6 = ld omit;
    check L112() else D46();
  L146():
    goto L30();
  D39():
    deopt 122 [object20, st4];
  D42():
    deopt 131 [object24, st6];
  D46():
    deopt 145 [omit6];
  L100():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L101():
    st5 = force? st4;
    checkMissing(st5);
    en4 = ld en;
    check L102() else D40();
  L107():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L20(dx3);
  L108():
    st7 = force? st6;
    checkMissing(st7);
    en6 = ld en;
    check L109() else D43();
  L112():
    omit7 = force? omit6;
    checkMissing(omit7);
    l1 = ld object;
    attr__1 = ldf `attr<-`;
    check L113() else D47();
  D40():
    deopt 123 [object20, st5, en4];
  D43():
    deopt 132 [object24, st7, en6];
  D47():
    deopt 148 [omit7, l1, omit7];
  L102():
    en5 = force? en4;
    checkMissing(en5);
    r61 = `:`(st5, en5);
    __ = ldf `[` in base;
    r62 = dyn __(object18, r61, <missing>);
    goto L19(r62);
  L109():
    en7 = force? en6;
    checkMissing(en7);
    r63 = `:`(st7, en7);
    __1 = ldf `[` in base;
    r64 = dyn __1(object24, r63);
    goto L20(r64);
  L113():
    r66 = dyn attr__1(l1, NULL, "na.action", omit7);
    check L114() else D48();
  D48():
    deopt 151 [omit7, r66];
  L114():
    st object = r66;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L115() else L116();
  L21(r68):
    l2 = ld object;
    tsp__ = ldf `tsp<-`;
    check L129() else D55();
  L115():
    tm = ld tm;
    check L117() else D49();
  L116():
    r67 = dyn base11(<lang `[`(tm, st)>, <lang `[`(tm, en)>, <sym xfreq>);
    goto L21(r67);
  D49():
    deopt 155 [tm];
  D55():
    deopt 170 [r68, l2, r68];
  L117():
    tm1 = force? tm;
    checkMissing(tm1);
    c10 = `is.object`(tm1);
    if c10 then L118() else L119(tm1);
  L129():
    r72 = dyn tsp__(l2, NULL, r68);
    check L130() else D56();
  D56():
    deopt 172 [r68, r72];
  L22(dx5):
    tm4 = ld tm;
    check L122() else D51();
  L118():
    dr4 = tryDispatchBuiltin.1("[", tm1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L120() else L119(dr4);
  L119(tm3):
    st8 = ld st;
    check L121() else D50();
  L130():
    st object = r72;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L131() else L132();
  D50():
    deopt 157 [tm3, st8];
  D51():
    deopt 160 [tm4];
  L24(r74):
    r75 = `!`(r74);
    c14 = `as.logical`(r75);
    if c14 then L134() else L25();
  L120():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L22(dx4);
  L121():
    st9 = force? st8;
    __2 = ldf `[` in base;
    r69 = dyn __2(tm3, st9);
    goto L22(r69);
  L122():
    tm5 = force? tm4;
    checkMissing(tm5);
    c11 = `is.object`(tm5);
    if c11 then L123() else L124(tm5);
  L131():
    cl = ld cl;
    check L133() else D57();
  L132():
    r73 = dyn base12(<sym cl>);
    goto L24(r73);
  D57():
    deopt 175 [cl];
  L23(dx7):
    xfreq = ld xfreq;
    check L127() else D53();
  L25():
    goto L26(NULL);
  L26(cl4):
    goto L27();
  L123():
    dr6 = tryDispatchBuiltin.1("[", tm5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L125() else L124(dr6);
  L124(tm7):
    en8 = ld en;
    check L126() else D52();
  L133():
    cl1 = force? cl;
    checkMissing(cl1);
    c13 = `==`(cl1, NULL);
    goto L24(c13);
  L134():
    cl2 = ld cl;
    check L135() else D58();
  D52():
    deopt 162 [tm7, en8];
  D53():
    deopt 165 [xfreq];
  D58():
    deopt 179 [cl2];
  L125():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L23(dx6);
  L126():
    en9 = force? en8;
    __3 = ldf `[` in base;
    r70 = dyn __3(tm7, en9);
    goto L23(r70);
  L127():
    xfreq1 = force? xfreq;
    checkMissing(xfreq1);
    c12 = ldf c in base;
    r71 = dyn c12(dx5, dx7, xfreq1);
    check L128() else D54();
  L135():
    cl3 = force? cl2;
    checkMissing(cl3);
    l3 = ld object;
    class__ = ldf `class<-`;
    check L136() else D59();
  D54():
    deopt 168 [r71];
  D59():
    deopt 182 [cl3, l3, cl3];
  L128():
    goto L21(r71);
  L136():
    r76 = dyn class__(l3, NULL, cl3);
    check L137() else D60();
  D60():
    deopt 184 [cl3, r76];
  L137():
    st object = r76;
    goto L26(cl3);
  }
}