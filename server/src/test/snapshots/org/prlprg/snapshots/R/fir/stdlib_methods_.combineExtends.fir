fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner627634294;
    st `.combineExtends` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner627634294(byExt, toExt, by, to, strictBy) {
  (reg byExt:*, reg toExt:*, reg by:*, reg to:*, reg strictBy:*) -+> V { var byExt:*, var toExt:*, var by:*, var to:*, var strictBy:*, reg __:cls, reg r:V, reg body:cls, reg f:*, reg f1:V, reg p:p(V +), reg r2:V, reg __1:cls, reg r3:V, reg body1:cls, reg fBy:*, reg fBy1:V, reg p1:p(V +), reg r5:V, reg __2:cls, reg r6:V, reg c:L, reg c2:V, reg __3:cls, reg r7:V, reg c3:L, reg c4:V, reg c6:L, reg __4:cls, reg r8:V, reg c7:L, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg substitute:cls, reg r11:V, reg r12:V, reg __5:cls, reg r13:V, reg c8:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg substitute1:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg byExpr:*, reg byExpr1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg quote:cls, reg r21:V, reg identical:cls, reg r22:V, reg c9:L, reg c11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg c14:L, reg r24:V, reg toExpr:*, reg toExpr1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg c17:L, reg r26:V, reg quote1:cls, reg r27:V, reg identical1:cls, reg r28:V, reg c18:L, reg c19:V, reg c21:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg quote2:cls, reg r31:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg substitute2:cls, reg r33:V, reg expr:*, reg expr1:V, reg l:*, reg body__:cls, reg environment:cls, reg f2:*, reg f3:V, reg p2:p(V +), reg r35:V, reg p3:p(V +), reg r37:V, reg l1:*, reg ___:cls, reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg byExpr2:*, reg byExpr3:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r41:V, reg r42:V, reg quote3:cls, reg r43:V, reg identical2:cls, reg r44:V, reg r45:V, reg c22:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r46:V, reg r47:V, reg substitute3:cls, reg r48:V, reg l2:*, reg body__1:cls, reg environment1:cls, reg f4:*, reg f5:V, reg p4:p(V +), reg r50:V, reg p5:p(V +), reg r52:V, reg f6:*, reg f7:V, reg l3:*, reg ___1:cls, reg r53:V, reg __6:cls, reg r54:V, reg body2:cls, reg f8:*, reg f9:V, reg p6:p(V +), reg r56:V, reg body3:cls, reg __7:cls, reg r57:V, reg p7:p(V +), reg r59:V, reg isTRUE:cls, reg byExpr4:*, reg byExpr5:V, reg p8:p(V +), reg r61:V, reg r62:V, reg c23:L, reg isTRUE1:cls, reg toExpr2:*, reg toExpr3:V, reg p9:p(V +), reg r64:V, reg r65:V, reg c24:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg r67:V, reg substitute4:cls, reg r68:V, reg l4:*, reg body__2:cls, reg environment2:cls, reg f10:*, reg f11:V, reg p10:p(V +), reg r70:V, reg p11:p(V +), reg r72:V, reg r73:V, reg byExpr6:*, reg byExpr7:V, reg l5:*, reg body__3:cls, reg environment3:cls, reg f12:*, reg f13:V, reg p12:p(V +), reg r75:V, reg p13:p(V +), reg r77:V, reg f14:*, reg f15:V, reg l6:*, reg ___2:cls, reg r79:V, reg __8:cls, reg r80:V, reg body4:cls, reg f16:*, reg f17:V, reg p14:p(V +), reg r82:V, reg strictBy1:*, reg strictBy2:V, reg r83:V, reg c25:L, reg getClassDef:cls, reg to1:*, reg to2:V, reg p15:p(V +), reg packageSlot:cls, reg toExt1:*, reg toExt2:V, reg p16:p(V +), reg r86:V, reg p17:p(V +), reg r88:V, reg getClassDef1:cls, reg by1:*, reg by2:V, reg p18:p(V +), reg packageSlot1:cls, reg byExt1:*, reg byExt2:V, reg p19:p(V +), reg r91:V, reg p20:p(V +), reg r93:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r94:V, reg r95:V, reg toDef:*, reg toDef1:V, reg c26:V, reg c27:L, reg c28:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r96:V, reg c32:L, reg r97:V, reg byDef:*, reg byDef1:V, reg c33:V, reg c34:L, reg c35:V, reg c37:L, reg c38:V, reg __9:cls, reg r98:V, reg c40:L, reg c41:V, reg c43:L, reg c44:V, reg __10:cls, reg r99:V, reg c46:L, reg c47:V, reg isVirtualClass:cls, reg by3:*, reg by4:V, reg p21:p(V +), reg _requirePackage:cls, reg packageSlot2:cls, reg byExt3:*, reg byExt4:V, reg p22:p(V +), reg r102:V, reg p23:p(V +), reg r104:V, reg p24:p(V +), reg r106:V, reg c50:L, reg getClassDef2:cls, reg by5:*, reg by6:V, reg p25:p(V +), reg packageSlot3:cls, reg byExt5:*, reg byExt6:V, reg p26:p(V +), reg r109:V, reg p27:p(V +), reg r111:V, reg __11:cls, reg r112:V, reg c51:L, reg r114:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg to3:*, reg to4:V, reg __12:cls, reg r115:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r116:V, reg r117:V, reg skipExt:*, reg skipExt1:V, reg c52:V, reg r118:V, reg c53:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r119:V, reg r120:V, reg substitute5:cls, reg r121:V, reg l7:*, reg body__4:cls, reg environment4:cls, reg f18:*, reg f19:V, reg p28:p(V +), reg r123:V, reg p29:p(V +), reg r125:V, reg r126:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r128:V, reg r129:V, reg substitute6:cls, reg r130:V, reg expr3:*, reg expr4:V, reg l8:*, reg body__5:cls, reg environment5:cls, reg f20:*, reg f21:V, reg p30:p(V +), reg r132:V, reg p31:p(V +), reg r134:V, reg f22:*, reg f23:V, reg l9:*, reg ___3:cls, reg r135:V, reg __13:cls, reg r136:V, reg l10:*, reg ___4:cls, reg r137:V, reg __14:cls, reg r138:V, reg l11:*, reg ___5:cls, reg r139:V, reg __15:cls, reg r140:V, reg __16:cls, reg r141:V, reg r142:V, reg l12:*, reg ___6:cls, reg r143:V, reg is:cls, reg byExt7:*, reg byExt8:V, reg p32:p(V +), reg r145:V, reg c54:L, reg c56:V, reg is1:cls, reg toExt3:*, reg toExt4:V, reg p33:p(V +), reg r147:V, reg r148:V, reg c57:L, reg c58:V, reg c60:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r149:V, reg r150:V, reg byExt9:*, reg byExt10:V, reg class:cls, reg r151:V, reg l13:*, reg class__:cls, reg r152:V, reg __17:cls, reg r154:V, reg l14:*, reg ___7:cls, reg r155:V, reg toExt5:*, reg toExt6:V |
    mkenv;
    st byExt = byExt;
    st toExt = toExt;
    st by = by;
    st to = to;
    st strictBy = strictBy;
    __ = ldf `@` in base;
    r = dyn __(<sym toExt>, <sym coerce>);
    st f = r;
    body = ldf body;
    check L43() else D0();
  D0():
    deopt 4 [];
  L43():
    p = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r2 = dyn body(p);
    check L44() else D1();
  D1():
    deopt 6 [r2];
  L44():
    st toExpr = r2;
    __1 = ldf `@` in base;
    r3 = dyn __1(<sym byExt>, <sym coerce>);
    st fBy = r3;
    body1 = ldf body;
    check L45() else D2();
  D2():
    deopt 12 [];
  L45():
    p1 = prom<V +>{
      fBy = ld fBy;
      fBy1 = force? fBy;
      checkMissing(fBy1);
      return fBy1;
    };
    r5 = dyn body1(p1);
    check L46() else D3();
  D3():
    deopt 14 [r5];
  L46():
    st byExpr = r5;
    __2 = ldf `@` in base;
    r6 = dyn __2(<sym byExt>, <sym simple>);
    c = `as.logical`(r6);
    if c then L47() else L0(c);
  L0(c2):
    c6 = `as.logical`(c2);
    if c6 then L49() else L1();
  L47():
    __3 = ldf `@` in base;
    r7 = dyn __3(<sym toExt>, <sym simple>);
    c3 = `as.logical`(r7);
    c4 = `&&`(c, c3);
    goto L0(c4);
  L1():
    l1 = ld toExt;
    ___ = ldf `@<-`;
    check L82() else D11();
  L14():
    f6 = ld f;
    check L96() else D17();
  L49():
    __4 = ldf `@` in base;
    r8 = dyn __4(<sym byExt>, <sym dataPart>);
    c7 = `as.logical`(r8);
    if c7 then L50() else L2();
  D11():
    deopt 83 [FALSE, l1, FALSE];
  D17():
    deopt 117 [f6];
  L2():
    __5 = ldf `@` in base;
    r13 = dyn __5(<sym toExt>, <sym dataPart>);
    c8 = `as.logical`(r13);
    if c8 then L54() else L5();
  L4(r12):
    st expr = r12;
    expr = ld expr;
    check L78() else D8();
  L50():
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L51() else L52();
  L82():
    r38 = dyn ___(l1, NULL, "simple", FALSE);
    check L83() else D12();
  L96():
    f7 = force? f6;
    checkMissing(f7);
    l3 = ld toExt;
    ___1 = ldf `@<-`;
    check L97() else D18();
  D8():
    deopt 71 [expr];
  D12():
    deopt 86 [FALSE, r38];
  D18():
    deopt 120 [f7, l3, f7];
  L3(r10):
    goto L4(r10);
  L5():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L58() else L59();
  L51():
    substitute = ldf substitute in base;
    r11 = dyn substitute(<lang {
      if(strict, `<-`(from, `@`(from, .Data)));
      EXPR
    }>, <lang list(EXPR=toExpr)>);
    goto L3(r11);
  L52():
    r9 = dyn base(<lang {
      if(strict, `<-`(from, `@`(from, .Data)));
      EXPR
    }>, <lang list(EXPR=toExpr)>);
    goto L3(r9);
  L54():
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L55() else L56();
  L78():
    expr1 = force? expr;
    checkMissing(expr1);
    l = ld f;
    body__ = ldf `body<-`;
    check L79() else D9();
  L83():
    st toExt = r38;
    sym8 = ldf identical;
    base8 = ldf identical in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  L97():
    r53 = dyn ___1(l3, NULL, "coerce", f7);
    check L98() else D19();
  D9():
    deopt 74 [expr1, l, expr1];
  D19():
    deopt 123 [f7, r53];
  L6(r15):
    goto L4(r15);
  L7(r18):
    c9 = `as.logical`(r18);
    if c9 then L64() else L9(c9);
  L15(r40):
    r45 = `!`(r40);
    c22 = `as.logical`(r45);
    if c22 then L90() else L17();
  L55():
    substitute1 = ldf substitute in base;
    r16 = dyn substitute1(<lang {
      `<-`(from, EXPR);
      if(strict, `@`(from, .Data))
    }>, <lang list(EXPR=byExpr)>);
    goto L6(r16);
  L56():
    r14 = dyn base1(<lang {
      `<-`(from, EXPR);
      if(strict, `@`(from, .Data))
    }>, <lang list(EXPR=byExpr)>);
    goto L6(r14);
  L58():
    byExpr = ld byExpr;
    check L60() else D4();
  L59():
    r17 = dyn base2(<sym byExpr>, <lang quote(from)>);
    goto L7(r17);
  L79():
    p3 = prom<V +>{
      environment = ldf environment;
      p2 = prom<V +>{
        f2 = ld f;
        f3 = force? f2;
        checkMissing(f3);
        return f3;
      };
      r35 = dyn environment(p2);
      return r35;
    };
    r37 = dyn body__[, , envir, ](l, NULL, p3, expr1);
    check L80() else D10();
  L84():
    byExpr2 = ld byExpr;
    check L86() else D13();
  L85():
    r39 = dyn base8(<sym byExpr>, <lang quote(from)>);
    goto L15(r39);
  L98():
    st toExt = r53;
    __6 = ldf `@` in base;
    r54 = dyn __6(<sym toExt>, <sym test>);
    st f = r54;
    body2 = ldf body;
    check L99() else D20();
  D4():
    deopt 33 [byExpr];
  D10():
    deopt 78 [expr1, r37];
  D13():
    deopt 90 [byExpr2];
  D20():
    deopt 129 [];
  L9(c11):
    c21 = `as.logical`(c11);
    if c21 then L72() else L12();
  L17():
    goto L14();
  L60():
    byExpr1 = force? byExpr;
    checkMissing(byExpr1);
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L64():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  L80():
    st f = r37;
    goto L14();
  L86():
    byExpr3 = force? byExpr2;
    checkMissing(byExpr3);
    sym9 = ldf quote;
    base9 = ldf quote in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L87() else L88();
  L90():
    sym10 = ldf substitute;
    base10 = ldf substitute in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L91() else L92();
  L99():
    p6 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    r56 = dyn body2(p6);
    check L100() else D21();
  D21():
    deopt 131 [r56];
  L8(r20):
    identical = ldf identical in base;
    r22 = dyn identical(byExpr1, r20, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L63() else D5();
  L10(c14, r24):
    c18 = `as.logical`(r24);
    c19 = `&&`(c14, c18);
    goto L9(c19);
  L12():
    sym7 = ldf substitute;
    base7 = ldf substitute in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L16(r42):
    identical2 = ldf identical in base;
    r44 = dyn identical2(byExpr3, r42, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L89() else D14();
  L18(r47):
    l2 = ld f;
    body__1 = ldf `body<-`;
    check L93() else D15();
  L61():
    quote = ldf quote in base;
    r21 = dyn quote(<sym from>);
    goto L8(r21);
  L62():
    r19 = dyn base3(<sym from>);
    goto L8(r19);
  L65():
    toExpr = ld toExpr;
    check L67() else D6();
  L66():
    r23 = dyn base4(<sym toExpr>, <lang quote(from)>);
    goto L10(c9, r23);
  L72():
    sym6 = ldf quote;
    base6 = ldf quote in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L73() else L74();
  L87():
    quote3 = ldf quote in base;
    r43 = dyn quote3(<sym from>);
    goto L16(r43);
  L88():
    r41 = dyn base9(<sym from>);
    goto L16(r41);
  L91():
    substitute3 = ldf substitute in base;
    r48 = dyn substitute3(<lang {
      `<-`(from, as(from, BY, strict=strict));
      TO
    }>, <lang list(BY=by, TO=toExpr)>);
    goto L18(r48);
  L92():
    r46 = dyn base10(<lang {
      `<-`(from, as(from, BY, strict=strict));
      TO
    }>, <lang list(BY=by, TO=toExpr)>);
    goto L18(r46);
  L100():
    st toExpr = r56;
    body3 = ldf body;
    check L101() else D22();
  D5():
    deopt 46 [r22];
  D6():
    deopt 49 [c9, toExpr];
  D14():
    deopt 103 [r44];
  D15():
    deopt 109 [r47, l2, r47];
  D22():
    deopt 134 [];
  L13(r30):
    goto L4(r30);
  L63():
    goto L7(r22);
  L67():
    toExpr1 = force? toExpr;
    checkMissing(toExpr1);
    sym5 = ldf quote;
    base5 = ldf quote in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L68() else L69();
  L73():
    quote2 = ldf quote in base;
    r31 = dyn quote2(<sym from>);
    goto L13(r31);
  L74():
    r29 = dyn base6(<sym from>);
    goto L13(r29);
  L76():
    substitute2 = ldf substitute in base;
    r33 = dyn substitute2(<lang {
      `<-`(from, E1);
      E2
    }>, <lang list(E1=byExpr, E2=toExpr)>);
    goto L4(r33);
  L77():
    r32 = dyn base7(<lang {
      `<-`(from, E1);
      E2
    }>, <lang list(E1=byExpr, E2=toExpr)>);
    goto L4(r32);
  L89():
    goto L15(r44);
  L93():
    p5 = prom<V +>{
      environment1 = ldf environment;
      p4 = prom<V +>{
        f4 = ld f;
        f5 = force? f4;
        checkMissing(f5);
        return f5;
      };
      r50 = dyn environment1(p4);
      return r50;
    };
    r52 = dyn body__1[, , envir, ](l2, NULL, p5, r47);
    check L94() else D16();
  L101():
    p7 = prom<V +>{
      __7 = ldf `@` in base;
      r57 = dyn __7(<sym byExt>, <sym test>);
      return r57;
    };
    r59 = dyn body3(p7);
    check L102() else D23();
  D16():
    deopt 113 [r47, r52];
  D23():
    deopt 136 [r59];
  L11(c17, r26):
    identical1 = ldf identical in base;
    r28 = dyn identical1(toExpr1, r26, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L70() else D7();
  L68():
    quote1 = ldf quote in base;
    r27 = dyn quote1(<sym from>);
    goto L11(c9, r27);
  L69():
    r25 = dyn base5(<sym from>);
    goto L11(c9, r25);
  L94():
    st f = r52;
    goto L14();
  L102():
    st byExpr = r59;
    isTRUE = ldf isTRUE;
    check L103() else D24();
  D7():
    deopt 62 [c17, r28];
  D24():
    deopt 139 [];
  L70():
    goto L10(c17, r28);
  L103():
    p8 = prom<V +>{
      byExpr4 = ld byExpr;
      byExpr5 = force? byExpr4;
      checkMissing(byExpr5);
      return byExpr5;
    };
    r61 = dyn isTRUE(p8);
    check L104() else D25();
  D25():
    deopt 141 [r61];
  L104():
    r62 = `!`(r61);
    c23 = `as.logical`(r62);
    if c23 then L105() else L19();
  L19():
    goto L23();
  L23():
    f14 = ld f;
    check L118() else D33();
  L105():
    isTRUE1 = ldf isTRUE;
    check L106() else D26();
  D26():
    deopt 144 [];
  D33():
    deopt 169 [f14];
  L106():
    p9 = prom<V +>{
      toExpr2 = ld toExpr;
      toExpr3 = force? toExpr2;
      checkMissing(toExpr3);
      return toExpr3;
    };
    r64 = dyn isTRUE1(p9);
    check L107() else D27();
  L118():
    f15 = force? f14;
    checkMissing(f15);
    l6 = ld toExt;
    ___2 = ldf `@<-`;
    check L119() else D34();
  D27():
    deopt 146 [r64];
  D34():
    deopt 172 [f15, l6, f15];
  L107():
    r65 = `!`(r64);
    c24 = `as.logical`(r65);
    if c24 then L108() else L20();
  L119():
    r79 = dyn ___2(l6, NULL, "test", f15);
    check L120() else D35();
  D35():
    deopt 175 [f15, r79];
  L20():
    byExpr6 = ld byExpr;
    check L114() else D30();
  L22(r73):
    goto L23();
  L108():
    sym11 = ldf substitute;
    base11 = ldf substitute in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L109() else L110();
  L120():
    st toExt = r79;
    __8 = ldf `@` in base;
    r80 = dyn __8(<sym byExt>, <sym replace>);
    st f = r80;
    body4 = ldf body;
    check L121() else D36();
  D30():
    deopt 158 [byExpr6];
  D36():
    deopt 181 [];
  L21(r67):
    l4 = ld f;
    body__2 = ldf `body<-`;
    check L111() else D28();
  L109():
    substitute4 = ldf substitute in base;
    r68 = dyn substitute4(<lang `&&`(`(`(BY), `(`(TO))>, <lang list(BY=byExpr, TO=toExpr)>);
    goto L21(r68);
  L110():
    r66 = dyn base11(<lang `&&`(`(`(BY), `(`(TO))>, <lang list(BY=byExpr, TO=toExpr)>);
    goto L21(r66);
  L114():
    byExpr7 = force? byExpr6;
    checkMissing(byExpr7);
    l5 = ld f;
    body__3 = ldf `body<-`;
    check L115() else D31();
  L121():
    p14 = prom<V +>{
      f16 = ld f;
      f17 = force? f16;
      checkMissing(f17);
      return f17;
    };
    r82 = dyn body4(p14);
    check L122() else D37();
  D28():
    deopt 152 [r67, l4, r67];
  D31():
    deopt 161 [byExpr7, l5, byExpr7];
  D37():
    deopt 183 [r82];
  L111():
    p11 = prom<V +>{
      environment2 = ldf environment;
      p10 = prom<V +>{
        f10 = ld f;
        f11 = force? f10;
        checkMissing(f11);
        return f11;
      };
      r70 = dyn environment2(p10);
      return r70;
    };
    r72 = dyn body__2[, , envir, ](l4, NULL, p11, r67);
    check L112() else D29();
  L115():
    p13 = prom<V +>{
      environment3 = ldf environment;
      p12 = prom<V +>{
        f12 = ld f;
        f13 = force? f12;
        checkMissing(f13);
        return f13;
      };
      r75 = dyn environment3(p12);
      return r75;
    };
    r77 = dyn body__3[, , envir, ](l5, NULL, p13, byExpr7);
    check L116() else D32();
  L122():
    st byExpr = r82;
    strictBy1 = ld strictBy;
    check L123() else D38();
  D29():
    deopt 156 [r67, r72];
  D32():
    deopt 165 [byExpr7, r77];
  D38():
    deopt 185 [strictBy1];
  L112():
    st f = r72;
    goto L22(r67);
  L116():
    st f = r77;
    goto L22(byExpr7);
  L123():
    strictBy2 = force? strictBy1;
    checkMissing(strictBy2);
    r83 = `!`(strictBy2);
    c25 = `as.logical`(r83);
    if c25 then L124() else L24();
  L24():
    goto L30();
  L30():
    isVirtualClass = ldf isVirtualClass;
    check L142() else D45();
  L124():
    getClassDef = ldf getClassDef;
    check L125() else D39();
  D39():
    deopt 189 [];
  D45():
    deopt 221 [];
  L125():
    p15 = prom<V +>{
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      return to2;
    };
    p17 = prom<V +>{
      packageSlot = ldf packageSlot;
      p16 = prom<V +>{
        toExt1 = ld toExt;
        toExt2 = force? toExt1;
        checkMissing(toExt2);
        return toExt2;
      };
      r86 = dyn packageSlot(p16);
      return r86;
    };
    r88 = dyn getClassDef[, package](p15, p17);
    check L126() else D40();
  L142():
    p21 = prom<V +>{
      by3 = ld by;
      by4 = force? by3;
      checkMissing(by4);
      return by4;
    };
    p24 = prom<V +>{
      _requirePackage = ldf `.requirePackage`;
      p23 = prom<V +>{
        packageSlot2 = ldf packageSlot;
        p22 = prom<V +>{
          byExt3 = ld byExt;
          byExt4 = force? byExt3;
          checkMissing(byExt4);
          return byExt4;
        };
        r102 = dyn packageSlot2(p22);
        return r102;
      };
      r104 = dyn _requirePackage(p23);
      return r104;
    };
    r106 = dyn isVirtualClass(p21, p24);
    check L143() else D46();
  D40():
    deopt 193 [r88];
  D46():
    deopt 224 [r106];
  L126():
    st toDef = r88;
    getClassDef1 = ldf getClassDef;
    check L127() else D41();
  L143():
    c50 = `as.logical`(r106);
    if c50 then L144() else L31();
  D41():
    deopt 196 [];
  L31():
    sym16 = ldf substitute;
    base16 = ldf substitute in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L161() else L162();
  L37():
    f22 = ld f;
    check L166() else D56();
  L127():
    p18 = prom<V +>{
      by1 = ld by;
      by2 = force? by1;
      checkMissing(by2);
      return by2;
    };
    p20 = prom<V +>{
      packageSlot1 = ldf packageSlot;
      p19 = prom<V +>{
        byExt1 = ld byExt;
        byExt2 = force? byExt1;
        checkMissing(byExt2);
        return byExt2;
      };
      r91 = dyn packageSlot1(p19);
      return r91;
    };
    r93 = dyn getClassDef1[, package](p18, p20);
    check L128() else D42();
  L144():
    getClassDef2 = ldf getClassDef;
    check L145() else D47();
  D42():
    deopt 200 [r93];
  D47():
    deopt 226 [];
  D56():
    deopt 268 [f22];
  L38(r129):
    st expr = r129;
    expr3 = ld expr;
    check L163() else D53();
  L128():
    st byDef = r93;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L129() else L130();
  L145():
    p25 = prom<V +>{
      by5 = ld by;
      by6 = force? by5;
      checkMissing(by6);
      return by6;
    };
    p27 = prom<V +>{
      packageSlot3 = ldf packageSlot;
      p26 = prom<V +>{
        byExt5 = ld byExt;
        byExt6 = force? byExt5;
        checkMissing(byExt6);
        return byExt6;
      };
      r109 = dyn packageSlot3(p26);
      return r109;
    };
    r111 = dyn getClassDef2[, package](p25, p27);
    check L146() else D48();
  L161():
    substitute6 = ldf substitute in base;
    r130 = dyn substitute6(<lang {
      `<-`(.value, `::`(methods, as)(from, BY, STRICT));
      `<-`(`::`(methods, as)(.value, TO), value);
      `<-`(value, .value);
      BYEXPR
    }>, <lang list(BY=by, TO=to, BYEXPR=byExpr, STRICT=strictBy)>);
    goto L38(r130);
  L162():
    r128 = dyn base16(<lang {
      `<-`(.value, `::`(methods, as)(from, BY, STRICT));
      `<-`(`::`(methods, as)(.value, TO), value);
      `<-`(value, .value);
      BYEXPR
    }>, <lang list(BY=by, TO=to, BYEXPR=byExpr, STRICT=strictBy)>);
    goto L38(r128);
  L166():
    f23 = force? f22;
    checkMissing(f23);
    l9 = ld toExt;
    ___3 = ldf `@<-`;
    check L167() else D57();
  D48():
    deopt 230 [r111];
  D53():
    deopt 259 [expr3];
  D57():
    deopt 271 [f23, l9, f23];
  L25(r95):
    c27 = `as.logical`(r95);
    if c27 then L26(c27) else L132();
  L129():
    toDef = ld toDef;
    check L131() else D43();
  L130():
    r94 = dyn base12(<sym toDef>);
    goto L25(r94);
  L146():
    st skipDef = r111;
    __11 = ldf `@` in base;
    r112 = dyn __11(<sym skipDef>, <sym contains>);
    c51 = `is.object`(r112);
    if c51 then L147() else L148(r112);
  L163():
    expr4 = force? expr3;
    checkMissing(expr4);
    l8 = ld f;
    body__5 = ldf `body<-`;
    check L164() else D54();
  L167():
    r135 = dyn ___3(l9, NULL, "replace", f23);
    check L168() else D58();
  D43():
    deopt 203 [toDef];
  D54():
    deopt 262 [expr4, l8, expr4];
  D58():
    deopt 274 [f23, r135];
  L26(c28):
    c37 = `as.logical`(c28);
    if c37 then L28(c37) else L137();
  L32(dx1):
    st skipExt = dx1;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L151() else L152();
  L131():
    toDef1 = force? toDef;
    checkMissing(toDef1);
    c26 = `==`(toDef1, NULL);
    goto L25(c26);
  L132():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L133() else L134();
  L147():
    dr = tryDispatchBuiltin.1("[[", r112);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L149() else L148(dr);
  L148(r114):
    to3 = ld to;
    check L150() else D49();
  L164():
    p31 = prom<V +>{
      environment5 = ldf environment;
      p30 = prom<V +>{
        f20 = ld f;
        f21 = force? f20;
        checkMissing(f21);
        return f21;
      };
      r132 = dyn environment5(p30);
      return r132;
    };
    r134 = dyn body__5[, , envir, ](l8, NULL, p31, expr4);
    check L165() else D55();
  L168():
    st toExt = r135;
    __13 = ldf `@` in base;
    r136 = dyn __13(<sym toExt>, <sym subClass>);
    l10 = ld toExt;
    ___4 = ldf `@<-`;
    check L169() else D59();
  D49():
    deopt 234 [r114, to3];
  D55():
    deopt 266 [expr4, r134];
  D59():
    deopt 279 [r136, l10, r136];
  L27(c32, r97):
    c34 = `as.logical`(r97);
    c35 = `||`(c32, c34);
    goto L26(c35);
  L28(c38):
    c43 = `as.logical`(c38);
    if c43 then L29(c43) else L139();
  L33(r117):
    r118 = `!`(r117);
    c53 = `as.logical`(r118);
    if c53 then L154() else L34();
  L133():
    byDef = ld byDef;
    check L135() else D44();
  L134():
    r96 = dyn base13(<sym byDef>);
    goto L27(c27, r96);
  L137():
    __9 = ldf `@` in base;
    r98 = dyn __9(<sym toDef>, <sym virtual>);
    c40 = `as.logical`(r98);
    c41 = `||`(c37, c40);
    goto L28(c41);
  L149():
    dx = getTryDispatchBuiltinValue(dr);
    goto L32(dx);
  L150():
    to4 = force? to3;
    __12 = ldf `[[` in base;
    r115 = dyn __12(r114, to4);
    goto L32(r115);
  L151():
    skipExt = ld skipExt;
    check L153() else D50();
  L152():
    r116 = dyn base14(<sym skipExt>);
    goto L33(r116);
  L165():
    st f = r134;
    goto L37();
  L169():
    r137 = dyn ___4(l10, NULL, "by", r136);
    check L170() else D60();
  D44():
    deopt 207 [c27, byDef];
  D50():
    deopt 239 [skipExt];
  D60():
    deopt 282 [r136, r137];
  L29(c44):
    st strictBy = c44;
    goto L30();
  L34():
    goto L36(NULL);
  L36(r126):
    goto L37();
  L135():
    byDef1 = force? byDef;
    checkMissing(byDef1);
    c33 = `==`(byDef1, NULL);
    goto L27(c27, c33);
  L139():
    __10 = ldf `@` in base;
    r99 = dyn __10(<sym byDef>, <sym virtual>);
    c46 = `as.logical`(r99);
    c47 = `||`(c43, c46);
    goto L29(c47);
  L153():
    skipExt1 = force? skipExt;
    checkMissing(skipExt1);
    c52 = `==`(skipExt1, NULL);
    goto L33(c52);
  L154():
    sym15 = ldf substitute;
    base15 = ldf substitute in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L155() else L156();
  L170():
    st toExt = r137;
    __14 = ldf `@` in base;
    r138 = dyn __14(<sym byExt>, <sym subClass>);
    l11 = ld toExt;
    ___5 = ldf `@<-`;
    check L171() else D61();
  D61():
    deopt 287 [r138, l11, r138];
  L35(r120):
    l7 = ld f;
    body__4 = ldf `body<-`;
    check L157() else D51();
  L155():
    substitute5 = ldf substitute in base;
    r121 = dyn substitute5(<lang `::`(methods, as)(BODY, TO)>, <lang list(BODY=body(`@`(skipExt, replace)), TO=`@`(byExt, subClass))>);
    goto L35(r121);
  L156():
    r119 = dyn base15(<lang `::`(methods, as)(BODY, TO)>, <lang list(BODY=body(`@`(skipExt, replace)), TO=`@`(byExt, subClass))>);
    goto L35(r119);
  L171():
    r139 = dyn ___5(l11, NULL, "subClass", r138);
    check L172() else D62();
  D51():
    deopt 247 [r120, l7, r120];
  D62():
    deopt 290 [r138, r139];
  L157():
    p29 = prom<V +>{
      environment4 = ldf environment;
      p28 = prom<V +>{
        f18 = ld f;
        f19 = force? f18;
        checkMissing(f19);
        return f19;
      };
      r123 = dyn environment4(p28);
      return r123;
    };
    r125 = dyn body__4[, , envir, ](l7, NULL, p29, r120);
    check L158() else D52();
  L172():
    st toExt = r139;
    __15 = ldf `@` in base;
    r140 = dyn __15(<sym toExt>, <sym distance>);
    __16 = ldf `@` in base;
    r141 = dyn __16(<sym byExt>, <sym distance>);
    r142 = `+`(r140, r141);
    l12 = ld toExt;
    ___6 = ldf `@<-`;
    check L173() else D63();
  D52():
    deopt 251 [r120, r125];
  D63():
    deopt 297 [r142, l12, r142];
  L158():
    st f = r125;
    goto L36(r120);
  L173():
    r143 = dyn ___6(l12, NULL, "distance", r142);
    check L174() else D64();
  D64():
    deopt 300 [r142, r143];
  L174():
    st toExt = r143;
    is = ldf is;
    check L175() else D65();
  D65():
    deopt 303 [];
  L175():
    p32 = prom<V +>{
      byExt7 = ld byExt;
      byExt8 = force? byExt7;
      checkMissing(byExt8);
      return byExt8;
    };
    r145 = dyn is(p32, "conditionalExtension");
    check L176() else D66();
  D66():
    deopt 306 [r145];
  L176():
    c54 = `as.logical`(r145);
    if c54 then L177() else L39(c54);
  L39(c56):
    c60 = `as.logical`(c56);
    if c60 then L181() else L40();
  L177():
    is1 = ldf is;
    check L178() else D67();
  D67():
    deopt 308 [c54];
  L40():
    goto L42();
  L42():
    __17 = ldf `@` in base;
    r154 = dyn __17(<sym byExt>, <sym package>);
    l14 = ld toExt;
    ___7 = ldf `@<-`;
    check L189() else D73();
  L178():
    p33 = prom<V +>{
      toExt3 = ld toExt;
      toExt4 = force? toExt3;
      checkMissing(toExt4);
      return toExt4;
    };
    r147 = dyn is1(p33, "conditionalExtension");
    check L179() else D68();
  L181():
    sym17 = ldf class;
    base17 = ldf class in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L182() else L183();
  D68():
    deopt 311 [c54, r147];
  D73():
    deopt 330 [r154, l14, r154];
  L41(r150):
    l13 = ld toExt;
    class__ = ldf `class<-`;
    check L186() else D71();
  L179():
    r148 = `!`(r147);
    c57 = `as.logical`(r148);
    c58 = `&&`(c54, c57);
    goto L39(c58);
  L182():
    byExt9 = ld byExt;
    check L184() else D69();
  L183():
    r149 = dyn base17(<sym byExt>);
    goto L41(r149);
  L189():
    r155 = dyn ___7(l14, NULL, "package", r154);
    check L190() else D74();
  D69():
    deopt 316 [byExt9];
  D71():
    deopt 321 [r150, l13, r150];
  D74():
    deopt 333 [r154, r155];
  L184():
    byExt10 = force? byExt9;
    checkMissing(byExt10);
    class = ldf class in base;
    r151 = dyn class(byExt10);
    check L185() else D70();
  L186():
    r152 = dyn class__(l13, NULL, r150);
    check L187() else D72();
  L190():
    st toExt = r155;
    toExt5 = ld toExt;
    check L191() else D75();
  D70():
    deopt 319 [r151];
  D72():
    deopt 323 [r150, r152];
  D75():
    deopt 335 [toExt5];
  L185():
    goto L41(r151);
  L187():
    st toExt = r152;
    goto L42();
  L191():
    toExt6 = force? toExt5;
    checkMissing(toExt6);
    popenv;
    return toExt6;
  }
}