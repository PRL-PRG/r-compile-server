fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2095204764;
    st `merge.dendrogram` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2095204764(x, y, `...`, height, adjust) {
  (reg x:*, reg y:*, reg ddd:dots, reg height:*, reg adjust:*) -+> V { var x:*, var y:*, var `...`:dots?, var height:*, var adjust:*, reg adjust_isMissing:L, reg adjust_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg inherits:cls, reg r6:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg y1:*, reg y2:V, reg inherits1:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg match_arg:cls, reg adjust1:*, reg adjust2:V, reg p3:p(V +), reg r14:V, reg r15:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg unlist:cls, reg x3:*, reg x4:V, reg p4:p(V +), reg r19:V, reg min:cls, reg r20:V, reg r21:V, reg c2:L, reg c4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg c7:L, reg r23:V, reg unlist1:cls, reg y3:*, reg y4:V, reg p5:p(V +), reg r25:V, reg min1:cls, reg r26:V, reg r27:V, reg c8:L, reg c9:V, reg c11:L, reg r28:S, reg adjust3:*, reg adjust4:V, reg r30:V, reg c12:L, reg r31:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg unlist2:cls, reg x5:*, reg x6:V, reg p6:p(V +), reg r35:V, reg max:cls, reg r36:V, reg dendrapply:cls, reg y5:*, reg y6:V, reg p7:p(V +), reg add_ifleaf:*, reg add_ifleaf1:V, reg p8:p(V +), reg add:*, reg add1:V, reg p9:p(V +), reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg x7:*, reg x8:V, reg y7:*, reg y8:V, reg list:cls, reg r44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg list1:cls, reg ddd1:dots?, reg r49:V, reg length:cls, reg r50:V, reg c13:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r51:V, reg r52:V, reg vapply:cls, reg xtr:*, reg xtr1:V, reg p10:p(V +), reg inherits2:*, reg inherits3:V, reg p11:p(V +), reg r55:V, reg all:cls, reg r56:V, reg r57:V, reg c14:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r58:V, reg r59:V, reg substitute:cls, reg r60:V, reg sapply:cls, reg xpr:*, reg xpr1:V, reg c15:L, reg xpr3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r61:V, reg c16:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg is_d:*, reg is_d1:V, reg r62:V, reg __1:cls, reg r63:V, reg p12:p(V +), reg deparse:*, reg deparse1:V, reg p13:p(V +), reg r66:V, reg ngettext:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg nms:*, reg nms1:V, reg length1:cls, reg r69:V, reg p14:p(V +), reg r71:V, reg stop:cls, reg sprintf:cls, reg msg:*, reg msg1:V, reg p15:p(V +), reg paste:cls, reg nms2:*, reg nms3:V, reg p16:p(V +), reg r74:V, reg p17:p(V +), reg r76:V, reg p18:p(V +), reg r78:V, reg adjust5:*, reg adjust6:V, reg r80:V, reg c17:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r81:V, reg r82:V, reg add2:*, reg add3:V, reg unlist3:cls, reg y9:*, reg y10:V, reg p19:p(V +), reg r84:V, reg max1:cls, reg r85:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r86:V, reg r87:V, reg xtr2:*, reg xtr3:V, reg r88:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c18:L, reg x9:V, reg i5:*, reg i6:V, reg r89:V, reg c19:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r90:V, reg i11:I, reg r91:V, reg add4:*, reg add5:V, reg unlist4:cls, reg xtr4:*, reg xtr5:V, reg c20:L, reg xtr7:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg i12:*, reg i13:V, reg r92:V, reg __2:cls, reg r93:V, reg p20:p(V +), reg r95:V, reg max2:cls, reg r96:V, reg i14:I, reg dendrapply1:cls, reg xtr8:*, reg xtr9:V, reg c21:L, reg xtr11:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg i15:*, reg i16:V, reg __3:cls, reg r98:V, reg p21:p(V +), reg add_ifleaf2:*, reg add_ifleaf3:V, reg p22:p(V +), reg add6:*, reg add7:V, reg p23:p(V +), reg r102:V, reg l1:*, reg c22:L, reg i18:I, reg r104:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx10:V, reg i20:I, reg dx11:V, reg i21:*, reg i22:V, reg ____:cls, reg r107:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r108:V, reg r109:V, reg r110:*, reg r111:V, reg xtr12:*, reg xtr13:V, reg c23:cls, reg r112:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r114:V, reg r115:V, reg vapply1:cls, reg r116:*, reg r117:V, reg p24:p(V +), reg attr:*, reg attr1:V, reg p25:p(V +), reg r120:V, reg sum:cls, reg r121:V, reg l4:*, reg attr__:cls, reg r122:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r123:V, reg r124:V, reg vapply2:cls, reg r125:*, reg r126:V, reg p26:p(V +), reg attr2:*, reg attr3:V, reg p27:p(V +), reg r129:V, reg max3:cls, reg r130:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r131:V, reg r132:V, reg missing:cls, reg r133:V, reg c24:L, reg c25:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r134:V, reg c29:L, reg r135:V, reg height1:*, reg height2:V, reg c30:V, reg c31:L, reg c32:V, reg c34:L, reg h_max:*, reg h_max1:V, reg r136:V, reg height3:*, reg height4:V, reg h_max2:*, reg h_max3:V, reg r138:V, reg c35:L, reg gettextf:cls, reg h_max4:*, reg h_max5:V, reg p28:p(V +), reg r140:V, reg stop1:cls, reg msg2:*, reg msg3:V, reg p29:p(V +), reg r142:V, reg height5:*, reg height6:V, reg l5:*, reg attr__1:cls, reg r143:V, reg l6:*, reg class__:cls, reg r144:V, reg midcache_dendrogram:cls, reg r145:*, reg r146:V, reg p30:p(V +), reg r148:V |
    mkenv;
    st x = x;
    st y = y;
    st `...` = ddd;
    st height = height;
    adjust_isMissing = missing.0(adjust);
    if adjust_isMissing then L0() else L1(adjust);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("auto", "add.max", "none");
      goto L0(r2);
    L2():
      r = dyn base("auto", "add.max", "none");
      goto L0(r);
    };
    goto L1(p);
  L1(adjust_orDefault):
    st adjust = adjust_orDefault;
    stopifnot = ldf stopifnot;
    check L40() else D0();
  D0():
    deopt 1 [];
  L40():
    p1 = prom<V +>{
      sym1 = ldf inherits;
      base1 = ldf inherits in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      inherits = ldf inherits in base;
      r6 = dyn inherits(x2, "dendrogram", FALSE);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym x>, "dendrogram");
      goto L0(r4);
    };
    p2 = prom<V +>{
      sym2 = ldf inherits;
      base2 = ldf inherits in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      inherits1 = ldf inherits in base;
      r10 = dyn inherits1(y2, "dendrogram", FALSE);
      goto L0(r10);
    L2():
      r8 = dyn base2(<sym y>, "dendrogram");
      goto L0(r8);
    };
    r12 = dyn stopifnot(p1, p2);
    check L41() else D1();
  D1():
    deopt 4 [r12];
  L41():
    match_arg = ldf `match.arg`;
    check L42() else D2();
  D2():
    deopt 6 [];
  L42():
    p3 = prom<V +>{
      adjust1 = ld adjust;
      adjust2 = force? adjust1;
      checkMissing(adjust2);
      return adjust2;
    };
    r14 = dyn match_arg(p3);
    check L43() else D3();
  D3():
    deopt 8 [r14];
  L43():
    st adjust = r14;
    r15 = `==`(r14, "auto");
    c1 = `as.logical`(r15);
    if c1 then L44() else L2();
  L2():
    goto L8();
  L8():
    adjust3 = ld adjust;
    check L60() else D10();
  L44():
    sym3 = ldf min;
    base3 = ldf min in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  D10():
    deopt 40 [adjust3];
  L3(r17):
    r21 = `==`(r17, 1.0);
    c2 = `as.logical`(r21);
    if c2 then L50() else L4(c2);
  L45():
    unlist = ldf unlist;
    check L47() else D4();
  L46():
    r16 = dyn base3(<lang unlist(x)>);
    goto L3(r16);
  L60():
    adjust4 = force? adjust3;
    checkMissing(adjust4);
    r30 = `==`(adjust4, "add.max");
    c12 = `as.logical`(r30);
    if c12 then L61() else L9();
  D4():
    deopt 15 [];
  L4(c4):
    c11 = `as.logical`(c4);
    if c11 then L57() else L6();
  L9():
    goto L11();
  L11():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L70() else L71();
  L47():
    p4 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r19 = dyn unlist(p4);
    check L48() else D5();
  L50():
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L61():
    r31 = clos inner2870366340;
    st `add.ifleaf` = r31;
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  D5():
    deopt 17 [r19];
  L5(c7, r23):
    r27 = `==`(r23, 1.0);
    c8 = `as.logical`(r27);
    c9 = `&&`(c7, c8);
    goto L4(c9);
  L6():
    goto L7("none");
  L7(r28):
    st adjust = r28;
    goto L8();
  L10(r33):
    st add = r33;
    dendrapply = ldf dendrapply;
    check L67() else D14();
  L12(r43):
    st r = r43;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L75() else L76();
  L48():
    min = ldf min in base;
    r20 = dyn min(r19);
    check L49() else D6();
  L51():
    unlist1 = ldf unlist;
    check L53() else D7();
  L52():
    r22 = dyn base4(<lang unlist(y)>);
    goto L5(c2, r22);
  L57():
    goto L7("add.max");
  L62():
    unlist2 = ldf unlist;
    check L64() else D11();
  L63():
    r32 = dyn base5(<lang unlist(x)>);
    goto L10(r32);
  L70():
    x7 = ld x;
    check L72() else D16();
  L71():
    r42 = dyn base6(<sym x>, <sym y>);
    goto L12(r42);
  D6():
    deopt 19 [r20];
  D7():
    deopt 25 [c2];
  D11():
    deopt 50 [];
  D14():
    deopt 57 [];
  D16():
    deopt 68 [x7];
  L13(r46):
    c13 = `as.logical`(r46);
    if c13 then L82() else L15();
  L49():
    goto L3(r20);
  L53():
    p5 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r25 = dyn unlist1(p5);
    check L54() else D8();
  L64():
    p6 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r35 = dyn unlist2(p6);
    check L65() else D12();
  L67():
    p7 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    p8 = prom<V +>{
      add_ifleaf = ld `add.ifleaf`;
      add_ifleaf1 = force? add_ifleaf;
      checkMissing(add_ifleaf1);
      return add_ifleaf1;
    };
    p9 = prom<V +>{
      add = ld add;
      add1 = force? add;
      checkMissing(add1);
      return add1;
    };
    r40 = dyn dendrapply[, , add](p7, p8, p9);
    check L68() else D15();
  L72():
    x8 = force? x7;
    checkMissing(x8);
    y7 = ld y;
    check L73() else D17();
  L75():
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L77() else L78();
  L76():
    r45 = dyn base7(<lang `<-`(xtr, list(...))>);
    goto L13(r45);
  D8():
    deopt 27 [c2, r25];
  D12():
    deopt 52 [r35];
  D15():
    deopt 62 [r40];
  D17():
    deopt 70 [y7];
  L14(r48):
    st xtr = r48;
    length = ldf length in base;
    r50 = dyn length(r48);
    check L81() else D21();
  L15():
    goto L31();
  L31():
    sym16 = ldf sum;
    base16 = ldf sum in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L132() else L133();
  L54():
    min1 = ldf min in base;
    r26 = dyn min1(r25);
    check L55() else D9();
  L65():
    max = ldf max in base;
    r36 = dyn max(r35);
    check L66() else D13();
  L68():
    st y = r40;
    goto L11();
  L73():
    y8 = force? y7;
    checkMissing(y8);
    list = ldf list in base;
    r44 = dyn list(x8, y8);
    check L74() else D18();
  L77():
    list1 = ldf list;
    check L79() else D19();
  L78():
    r47 = dyn base8(<sym ...>);
    goto L14(r47);
  L82():
    sym9 = ldf all;
    base9 = ldf all in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L83() else L84();
  D9():
    deopt 29 [c2, r26];
  D13():
    deopt 54 [r36];
  D18():
    deopt 73 [r44];
  D19():
    deopt 79 [];
  D21():
    deopt 84 [r50];
  L16(r52):
    r57 = `!`(r52);
    c14 = `as.logical`(r57);
    if c14 then L88() else L17();
  L32(r115):
    l4 = ld r;
    attr__ = ldf `attr<-`;
    check L137() else D51();
  L55():
    goto L5(c2, r26);
  L66():
    goto L10(r36);
  L74():
    goto L12(r44);
  L79():
    ddd1 = ld `...`;
    r49 = dyn list1[`...`](ddd1);
    check L80() else D20();
  L81():
    goto L13(r50);
  L83():
    vapply = ldf vapply;
    check L85() else D22();
  L84():
    r51 = dyn base9(<lang `<-`(is.d, vapply(xtr, inherits, NA_LGL, what="dendrogram"))>);
    goto L16(r51);
  L132():
    vapply1 = ldf vapply;
    check L134() else D48();
  L133():
    r114 = dyn base16(<lang vapply(r, attr, 0, which="members")>);
    goto L32(r114);
  D20():
    deopt 81 [r49];
  D22():
    deopt 88 [];
  D48():
    deopt 193 [];
  D51():
    deopt 203 [r115, l4, r115];
  L17():
    goto L19();
  L19():
    adjust5 = ld adjust;
    check L98() else D31();
  L80():
    goto L14(r49);
  L85():
    p10 = prom<V +>{
      xtr = ld xtr;
      xtr1 = force? xtr;
      checkMissing(xtr1);
      return xtr1;
    };
    p11 = prom<V +>{
      inherits2 = ld inherits;
      inherits3 = force? inherits2;
      checkMissing(inherits3);
      return inherits3;
    };
    r55 = dyn vapply[, , , what](p10, p11, NA_LGL, "dendrogram");
    check L86() else D23();
  L88():
    sym10 = ldf substitute;
    base10 = ldf substitute in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L89() else L90();
  L134():
    p24 = prom<V +>{
      r116 = ld r;
      r117 = force? r116;
      checkMissing(r117);
      return r117;
    };
    p25 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    r120 = dyn vapply1[, , , which](p24, p25, 0, "members");
    check L135() else D49();
  L137():
    r122 = dyn attr__(l4, NULL, "members", r115);
    check L138() else D52();
  D23():
    deopt 94 [r55];
  D31():
    deopt 126 [adjust5];
  D49():
    deopt 199 [r120];
  D52():
    deopt 206 [r115, r122];
  L18(r59):
    st xpr = r59;
    sapply = ldf sapply;
    check L91() else D25();
  L86():
    st `is.d` = r55;
    all = ldf all in base;
    r56 = dyn all(r55);
    check L87() else D24();
  L89():
    substitute = ldf substitute in base;
    r60 = dyn substitute(<lang c(...)>);
    goto L18(r60);
  L90():
    r58 = dyn base10(<lang c(...)>);
    goto L18(r58);
  L98():
    adjust6 = force? adjust5;
    checkMissing(adjust6);
    r80 = `==`(adjust6, "add.max");
    c17 = `as.logical`(r80);
    if c17 then L99() else L20();
  L135():
    sum = ldf sum in base;
    r121 = dyn sum(r120);
    check L136() else D50();
  L138():
    st r = r122;
    sym17 = ldf max;
    base17 = ldf max in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L139() else L140();
  D24():
    deopt 97 [r56];
  D25():
    deopt 104 [];
  D50():
    deopt 201 [r121];
  L20():
    goto L29();
  L29():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L126() else L127();
  L33(r124):
    st `h.max` = r124;
    sym18 = ldf missing;
    base18 = ldf missing in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L144() else L145();
  L87():
    goto L16(r56);
  L91():
    p12 = prom<V +>{
      xpr = ld xpr;
      xpr1 = force? xpr;
      checkMissing(xpr1);
      c15 = `is.object`(xpr1);
      if c15 then L2() else L3(xpr1);
    L0(dx1):
      c16 = `is.object`(dx1);
      if c16 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("[", xpr1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(xpr3):
      __ = ldf `[` in base;
      r61 = dyn __(xpr3, -1.0);
      goto L0(r61);
    L1(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      is_d = ld `is.d`;
      is_d1 = force? is_d;
      checkMissing(is_d1);
      r62 = `!`(is_d1);
      __1 = ldf `[` in base;
      r63 = dyn __1(dx3, r62);
      goto L1(r63);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx4);
    };
    p13 = prom<V +>{
      deparse = ld deparse;
      deparse1 = force? deparse;
      checkMissing(deparse1);
      return deparse1;
    };
    r66 = dyn sapply[, , nlines](p12, p13, 1);
    check L92() else D26();
  L99():
    sym12 = ldf max;
    base12 = ldf max in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L100() else L101();
  L136():
    goto L32(r121);
  L139():
    vapply2 = ldf vapply;
    check L141() else D53();
  L140():
    r123 = dyn base17(<lang vapply(r, attr, 0.0, which="height")>);
    goto L33(r123);
  D26():
    deopt 109 [r66];
  D53():
    deopt 211 [];
  L21(r82):
    st add = r82;
    sym13 = ldf seq_along;
    base13 = ldf seq_along in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L106() else L107();
  L30(r109):
    st r = r109;
    goto L31();
  L34(r132):
    c24 = `as.logical`(r132);
    if c24 then L35(c24) else L146();
  L92():
    st nms = r66;
    ngettext = ldf ngettext;
    check L93() else D27();
  L100():
    add2 = ld add;
    check L102() else D32();
  L101():
    r81 = dyn base12(<sym add>, <lang unlist(y)>);
    goto L21(r81);
  L126():
    r110 = ld r;
    check L128() else D45();
  L127():
    r108 = dyn base15(<sym r>, <sym xtr>);
    goto L30(r108);
  L141():
    p26 = prom<V +>{
      r125 = ld r;
      r126 = force? r125;
      checkMissing(r126);
      return r126;
    };
    p27 = prom<V +>{
      attr2 = ld attr;
      attr3 = force? attr2;
      checkMissing(attr3);
      return attr3;
    };
    r129 = dyn vapply2[, , , which](p26, p27, 0.0, "height");
    check L142() else D54();
  L144():
    missing = ldf missing in base;
    r133 = dyn missing(<sym height>);
    goto L34(r133);
  L145():
    r131 = dyn base18(<sym height>);
    goto L34(r131);
  D27():
    deopt 112 [];
  D32():
    deopt 132 [add2];
  D45():
    deopt 181 [r110];
  D54():
    deopt 217 [r129];
  L22(r87):
    s = toForSeq(r87);
    l = length(s);
    i = 0;
    goto L23(i);
  L35(c25):
    c34 = `as.logical`(c25);
    if c34 then L151() else L37();
  L93():
    p14 = prom<V +>{
      sym11 = ldf length;
      base11 = ldf length in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r68):
      return r68;
    L1():
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      length1 = ldf length in base;
      r69 = dyn length1(nms1);
      goto L0(r69);
    L2():
      r67 = dyn base11(<sym nms>);
      goto L0(r67);
    };
    r71 = dyn ngettext(p14, "extra argument %s is not of class \"%s\"", "extra arguments %s are not of class \"%s\"");
    check L94() else D28();
  L102():
    add3 = force? add2;
    checkMissing(add3);
    unlist3 = ldf unlist;
    check L103() else D33();
  L106():
    xtr2 = ld xtr;
    check L108() else D36();
  L107():
    r86 = dyn base13(<sym xtr>);
    goto L22(r86);
  L128():
    r111 = force? r110;
    checkMissing(r111);
    xtr12 = ld xtr;
    check L129() else D46();
  L142():
    max3 = ldf max in base;
    r130 = dyn max3(r129);
    check L143() else D55();
  L146():
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L147() else L148();
  D28():
    deopt 116 [r71];
  D33():
    deopt 135 [];
  D36():
    deopt 142 [xtr2];
  D46():
    deopt 183 [xtr12];
  D55():
    deopt 219 [r130];
  L23(i1):
    i2 = `+`.1(i1, 1);
    c18 = `<`.1(l, i2);
    if c18 then L109() else L28();
  L36(c29, r135):
    c31 = `as.logical`(r135);
    c32 = `||`(c29, c31);
    goto L35(c32);
  L37():
    height3 = ld height;
    check L154() else D58();
  L38():
    height5 = ld height;
    check L162() else D64();
  L94():
    st msg = r71;
    stop = ldf stop;
    check L95() else D29();
  L103():
    p19 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    r84 = dyn unlist3(p19);
    check L104() else D34();
  L108():
    xtr3 = force? xtr2;
    checkMissing(xtr3);
    r88 = seq_along(xtr3);
    goto L22(r88);
  L129():
    xtr13 = force? xtr12;
    checkMissing(xtr13);
    c23 = ldf c in base;
    r112 = dyn c23(r111, xtr13);
    check L130() else D47();
  L143():
    goto L33(r130);
  L147():
    height1 = ld height;
    check L149() else D56();
  L148():
    r134 = dyn base19(<sym height>);
    goto L36(c24, r134);
  L151():
    h_max = ld `h.max`;
    check L152() else D57();
  D29():
    deopt 119 [];
  D34():
    deopt 137 [r84];
  D47():
    deopt 186 [r112];
  D56():
    deopt 225 [c24, height1];
  D57():
    deopt 230 [1.1, h_max];
  D58():
    deopt 234 [height3];
  D64():
    deopt 252 [height5];
  L28():
    x9 = `[[`(s, i2, NULL, TRUE);
    st i = x9;
    i5 = ld i;
    check L110() else D37();
  L95():
    p18 = prom<V +>{
      sprintf = ldf sprintf;
      p15 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      p17 = prom<V +>{
        paste = ldf paste;
        p16 = prom<V +>{
          nms2 = ld nms;
          nms3 = force? nms2;
          checkMissing(nms3);
          return nms3;
        };
        r74 = dyn paste[, collapse](p16, ", ");
        return r74;
      };
      r76 = dyn sprintf(p15, p17, "dendrogram");
      return r76;
    };
    r78 = dyn stop[, domain](p18, NA_LGL);
    check L96() else D30();
  L104():
    max1 = ldf max in base;
    r85 = dyn max1(add3, r84);
    check L105() else D35();
  L109():
    goto L29();
  L130():
    goto L30(r112);
  L149():
    height2 = force? height1;
    checkMissing(height2);
    c30 = `==`(height2, NULL);
    goto L36(c24, c30);
  L152():
    h_max1 = force? h_max;
    checkMissing(h_max1);
    r136 = `*`(1.1, h_max1);
    st height = r136;
    goto L38();
  L154():
    height4 = force? height3;
    checkMissing(height4);
    h_max2 = ld `h.max`;
    check L155() else D59();
  L162():
    height6 = force? height5;
    checkMissing(height6);
    l5 = ld r;
    attr__1 = ldf `attr<-`;
    check L163() else D65();
  D30():
    deopt 123 [r78];
  D35():
    deopt 139 [r85];
  D37():
    deopt 145 [i2, i5];
  D59():
    deopt 235 [height4, h_max2];
  D65():
    deopt 255 [height6, l5, height6];
  L96():
    goto L19();
  L105():
    goto L21(r85);
  L110():
    i6 = force? i5;
    checkMissing(i6);
    r89 = `>`(i6, 1);
    c19 = `as.logical`(r89);
    if c19 then L111() else L24();
  L155():
    h_max3 = force? h_max2;
    checkMissing(h_max3);
    r138 = `<`(height4, h_max3);
    c35 = `as.logical`(r138);
    if c35 then L156() else L39();
  L163():
    r143 = dyn attr__1(l5, NULL, "height", height6);
    check L164() else D66();
  D66():
    deopt 258 [height6, r143];
  L24():
    goto L26(i2);
  L26(i14):
    dendrapply1 = ldf dendrapply;
    check L119() else D42();
  L39():
    goto L38();
  L111():
    sym14 = ldf max;
    base14 = ldf max in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L112() else L113();
  L156():
    gettextf = ldf gettextf;
    check L157() else D60();
  L164():
    st r = r143;
    l6 = ld r;
    class__ = ldf `class<-`;
    check L165() else D67();
  D42():
    deopt 163 [i14];
  D60():
    deopt 239 [];
  D67():
    deopt 263 ["dendrogram", l6, "dendrogram"];
  L25(i11, r91):
    st add = r91;
    goto L26(i11);
  L112():
    add4 = ld add;
    check L114() else D38();
  L113():
    r90 = dyn base14(<sym add>, <lang unlist(`[`(xtr, `-`(i, 1)))>);
    goto L25(i2, r90);
  L119():
    p21 = prom<V +>{
      xtr8 = ld xtr;
      xtr9 = force? xtr8;
      checkMissing(xtr9);
      c21 = `is.object`(xtr9);
      if c21 then L1() else L2(xtr9);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", xtr9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(xtr11):
      i15 = ld i;
      i16 = force? i15;
      __3 = ldf `[[` in base;
      r98 = dyn __3(xtr11, i16);
      goto L0(r98);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    p22 = prom<V +>{
      add_ifleaf2 = ld `add.ifleaf`;
      add_ifleaf3 = force? add_ifleaf2;
      checkMissing(add_ifleaf3);
      return add_ifleaf3;
    };
    p23 = prom<V +>{
      add6 = ld add;
      add7 = force? add6;
      checkMissing(add7);
      return add7;
    };
    r102 = dyn dendrapply1[, , add](p21, p22, p23);
    check L120() else D43();
  L157():
    p28 = prom<V +>{
      h_max4 = ld `h.max`;
      h_max5 = force? h_max4;
      checkMissing(h_max5);
      return h_max5;
    };
    r140 = dyn gettextf("'height' must be at least %g, the maximal height of its components", p28);
    check L158() else D61();
  L165():
    r144 = dyn class__(l6, NULL, "dendrogram");
    check L166() else D68();
  D38():
    deopt 151 [i2, add4];
  D43():
    deopt 168 [i14, r102];
  D61():
    deopt 242 [r140];
  D68():
    deopt 265 ["dendrogram", r144];
  L114():
    add5 = force? add4;
    checkMissing(add5);
    unlist4 = ldf unlist;
    check L115() else D39();
  L120():
    l1 = ld xtr;
    c22 = `is.object`(l1);
    if c22 then L121() else L122(i14, r102, l1);
  L158():
    st msg = r140;
    stop1 = ldf stop;
    check L159() else D62();
  L166():
    st r = r144;
    midcache_dendrogram = ldf `midcache.dendrogram`;
    check L167() else D69();
  D39():
    deopt 154 [i2];
  D62():
    deopt 245 [];
  D69():
    deopt 268 [];
  L27(i20, dx11):
    st xtr = dx11;
    goto L23(i20);
  L115():
    p20 = prom<V +>{
      xtr4 = ld xtr;
      xtr5 = force? xtr4;
      checkMissing(xtr5);
      c20 = `is.object`(xtr5);
      if c20 then L1() else L2(xtr5);
    L0(dx7):
      return dx7;
    L1():
      dr4 = tryDispatchBuiltin.1("[", xtr5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(xtr7):
      i12 = ld i;
      i13 = force? i12;
      checkMissing(i13);
      r92 = `-`(i13, 1);
      __2 = ldf `[` in base;
      r93 = dyn __2(xtr7, r92);
      goto L0(r93);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    };
    r95 = dyn unlist4(p20);
    check L116() else D40();
  L121():
    dr8 = tryDispatchBuiltin.0("[[<-", l1, r102);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L123() else L122(i14, r102, dr8);
  L122(i18, r104, l3):
    i21 = ld i;
    check L124() else D44();
  L159():
    p29 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r142 = dyn stop1[, domain](p29, NA_LGL);
    check L160() else D63();
  L167():
    p30 = prom<V +>{
      r145 = ld r;
      r146 = force? r145;
      checkMissing(r146);
      return r146;
    };
    r148 = dyn midcache_dendrogram[, quiet](p30, TRUE);
    check L168() else D70();
  D40():
    deopt 156 [i2, r95];
  D44():
    deopt 170 [i18, r104, l3, r102, i21];
  D63():
    deopt 249 [r142];
  D70():
    deopt 272 [r148];
  L116():
    max2 = ldf max in base;
    r96 = dyn max2(add5, r95);
    check L117() else D41();
  L123():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L27(i14, dx10);
  L124():
    i22 = force? i21;
    ____ = ldf `[[<-` in base;
    r107 = dyn ____(l3, r102, i22);
    goto L27(i18, r107);
  L160():
    goto L38();
  L168():
    popenv;
    return r148;
  D41():
    deopt 158 [i2, r96];
  L117():
    goto L25(i2, r96);
  }
}
fun inner2870366340(i, add) {
  (reg i:*, reg add:*) -+> V { var i:*, var add:*, reg is_leaf:cls, reg i1:*, reg i2:V, reg p:p(V +), reg r1:V, reg c:L, reg i3:*, reg i4:V, reg add1:*, reg add2:V, reg r2:V, reg i5:*, reg i6:V |
    mkenv;
    st i = i;
    st add = add;
    is_leaf = ldf `is.leaf`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      i1 = ld i;
      i2 = force? i1;
      checkMissing(i2);
      return i2;
    };
    r1 = dyn is_leaf(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0();
  L0():
    i5 = ld i;
    check L7() else D4();
  L3():
    i3 = ld i;
    check L4() else D2();
  D2():
    deopt 4 [i3];
  D4():
    deopt 8 [i5];
  L4():
    i4 = force? i3;
    checkMissing(i4);
    add1 = ld add;
    check L5() else D3();
  L7():
    i6 = force? i5;
    checkMissing(i6);
    popenv;
    return i6;
  D3():
    deopt 5 [i4, add1];
  L5():
    add2 = force? add1;
    checkMissing(add2);
    r2 = `+`(i4, add2);
    popenv;
    return r2;
  }
}