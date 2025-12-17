fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2829631034;
    st `format.person` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2829631034(x, include, braces, collapse, `...`, style) {
  (reg x:*, reg include:*, reg braces:*, reg collapse:*, reg ddd:dots, reg style:*) -+> V { var x:*, var include:*, reg include_isMissing:L, reg include_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var braces:*, reg braces_isMissing:L, reg braces_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg c2:cls, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg c3:cls, reg r14:V, reg list:cls, reg r15:V, reg p1:p(V +), var collapse:*, reg collapse_isMissing:L, reg collapse_orDefault:*, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg list1:cls, reg r19:V, reg p2:p(V +), var `...`:dots?, var style:*, reg style_isMissing:L, reg style_orDefault:*, reg sym6:cls, reg base6:cls, reg guard6:L, reg r21:V, reg r22:V, reg c4:cls, reg r23:V, reg p3:p(V +), reg match_arg:cls, reg style1:*, reg style2:V, reg p4:p(V +), reg r26:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg x1:*, reg x2:V, reg length:cls, reg r29:V, reg r30:V, reg c5:L, reg style3:*, reg style4:V, reg r31:V, reg c6:L, reg r32:V, reg character:cls, reg r33:V, reg style5:*, reg style6:V, reg r36:V, reg c7:L, reg _format_person_as_R_code:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg c8:cls, reg r43:V, reg vapply:cls, reg include1:*, reg include2:V, reg p6:p(V +), reg match_arg1:*, reg match_arg2:V, reg p7:p(V +), reg args:*, reg args1:V, reg p8:p(V +), reg r47:V, reg braces1:*, reg braces2:V, reg c9:L, reg braces4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg args2:*, reg args3:V, reg __:cls, reg r48:V, reg collapse1:*, reg collapse2:V, reg c10:L, reg collapse4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg args4:*, reg args5:V, reg __1:cls, reg r49:V, reg args6:*, reg args7:V, reg l:*, reg names__:cls, reg r50:V, reg l1:*, reg names__1:cls, reg r51:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg braces5:*, reg braces6:V, reg c11:L, reg braces8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r54:V, reg c12:V, reg c13:L, reg l2:*, reg c14:L, reg r56:S, reg l4:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r58:S, reg dx7:V, reg r59:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg r62:V, reg braces9:*, reg braces10:V, reg c15:L, reg braces12:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r63:V, reg c16:V, reg c17:L, reg l5:*, reg c18:L, reg r65:S, reg l7:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r67:S, reg dx11:V, reg r68:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r70:V, reg r71:V, reg braces13:*, reg braces14:V, reg c19:L, reg braces16:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r72:V, reg c20:V, reg c21:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r73:V, reg r74:V, reg c22:cls, reg r75:V, reg l8:*, reg c23:L, reg r77:V, reg l10:*, reg dr14:V, reg dc7:L, reg dx14:V, reg r79:V, reg dx15:V, reg r80:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r82:V, reg r83:V, reg braces17:*, reg braces18:V, reg c24:L, reg braces20:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r84:V, reg c25:V, reg c26:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r85:V, reg r86:V, reg c27:cls, reg r87:V, reg l11:*, reg c28:L, reg r89:V, reg l13:*, reg dr18:V, reg dc9:L, reg dx18:V, reg r91:V, reg dx19:V, reg r92:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r94:V, reg r95:V, reg braces21:*, reg braces22:V, reg c29:L, reg braces24:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r96:V, reg c30:V, reg c31:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r97:V, reg r98:V, reg c32:cls, reg r99:V, reg l14:*, reg c33:L, reg r101:V, reg l16:*, reg dr22:V, reg dc11:L, reg dx22:V, reg r103:V, reg dx23:V, reg r104:V, reg lapply:cls, reg braces25:*, reg braces26:V, reg p9:p(V +), reg rep_len:*, reg rep_len1:V, reg p10:p(V +), reg r108:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r109:V, reg r110:V, reg collapse5:*, reg collapse6:V, reg c34:L, reg collapse8:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r111:V, reg c35:V, reg c36:L, reg l17:*, reg c37:L, reg r113:S, reg l19:*, reg dr26:V, reg dc13:L, reg dx26:V, reg r115:S, reg dx27:V, reg r116:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r118:V, reg r119:V, reg collapse9:*, reg collapse10:V, reg c38:L, reg collapse12:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r120:V, reg c39:V, reg c40:L, reg l20:*, reg c41:L, reg r122:S, reg l22:*, reg dr30:V, reg dc15:L, reg dx30:V, reg r124:S, reg dx31:V, reg r125:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r127:V, reg r128:V, reg collapse13:*, reg collapse14:V, reg c42:L, reg collapse16:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg r129:V, reg c43:V, reg c44:L, reg l23:*, reg c45:L, reg r131:S, reg l25:*, reg dr34:V, reg dc17:L, reg dx34:V, reg r133:S, reg dx35:V, reg r134:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r136:V, reg r137:V, reg collapse17:*, reg collapse18:V, reg c46:L, reg collapse20:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg r138:V, reg c47:V, reg c48:L, reg l26:*, reg c49:L, reg r140:S, reg l28:*, reg dr38:V, reg dc19:L, reg dx38:V, reg r142:S, reg dx39:V, reg r143:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r145:V, reg r146:V, reg collapse21:*, reg collapse22:V, reg c50:L, reg collapse24:V, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg r147:V, reg c51:V, reg c52:L, reg l29:*, reg c53:L, reg r149:S, reg l31:*, reg dr42:V, reg dc21:L, reg dx42:V, reg r151:S, reg dx43:V, reg r152:V, reg lapply1:cls, reg collapse25:*, reg collapse26:V, reg p11:p(V +), reg rep_len2:*, reg rep_len3:V, reg p12:p(V +), reg r156:V, reg lapply2:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r157:V, reg r158:V, reg x5:*, reg x6:V, reg unclass:cls, reg r159:V, reg p13:p(V +), reg __2:*, reg __3:V, reg p14:p(V +), reg include3:*, reg include4:V, reg p15:p(V +), reg r163:V, reg braces27:*, reg braces28:V, reg c54:L, reg braces30:V, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg include5:*, reg include6:V, reg __4:cls, reg r164:V, reg collapse27:*, reg collapse28:V, reg c55:L, reg collapse30:V, reg dr46:V, reg dc23:L, reg dx46:V, reg dx47:V, reg include7:*, reg include8:V, reg __5:cls, reg r165:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r166:V, reg r167:V, reg include9:*, reg include10:V, reg r168:V, reg any:cls, reg r169:V, reg c56:L, reg lapply3:cls, reg x7:*, reg x8:V, reg p16:p(V +), reg r171:cls, reg p17:p(V +), reg r173:V, reg r175:cls, reg r176:cls, reg vapply1:cls, reg x9:*, reg x10:V, reg p18:p(V +), reg format_person1:*, reg format_person2:V, reg p19:p(V +), reg r179:V |
    mkenv;
    st x = x;
    include_isMissing = missing.0(include);
    if include_isMissing then L0() else L1(include);
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
      r2 = dyn c("given", "family", "email", "role", "comment");
      goto L0(r2);
    L2():
      r = dyn base("given", "family", "email", "role", "comment");
      goto L0(r);
    };
    goto L1(p);
  L1(include_orDefault):
    st include = include_orDefault;
    braces_isMissing = missing.0(braces);
    if braces_isMissing then L2() else L3(braces);
  L2():
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L0(r5):
      return r5;
    L4():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L6() else L7();
    L5():
      r4 = dyn base1[given, family, email, role, comment]("", "", <lang c("<", ">")>, <lang c("[", "]")>, <lang c("(", ")")>);
      goto L0(r4);
    L1(r7):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L8() else L9();
    L6():
      c1 = ldf c in base;
      r8 = dyn c1("<", ">");
      goto L1(r8);
    L7():
      r6 = dyn base2("<", ">");
      goto L1(r6);
    L2(r10):
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L10() else L11();
    L8():
      c2 = ldf c in base;
      r11 = dyn c2("[", "]");
      goto L2(r11);
    L9():
      r9 = dyn base3("[", "]");
      goto L2(r9);
    L3(r13):
      list = ldf list in base;
      r15 = dyn list("", "", r7, r10, r13);
      goto L0(r15);
    L10():
      c3 = ldf c in base;
      r14 = dyn c3("(", ")");
      goto L3(r14);
    L11():
      r12 = dyn base4("(", ")");
      goto L3(r12);
    };
    goto L3(p1);
  L3(braces_orDefault):
    st braces = braces_orDefault;
    collapse_isMissing = missing.0(collapse);
    if collapse_isMissing then L4() else L5(collapse);
  L4():
    p2 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      list1 = ldf list in base;
      r19 = dyn list1(" ", " ", ", ", ", ", ", ");
      goto L0(r19);
    L2():
      r17 = dyn base5[given, family, email, role, comment](" ", " ", ", ", ", ", ", ");
      goto L0(r17);
    };
    goto L5(p2);
  L5(collapse_orDefault):
    st collapse = collapse_orDefault;
    st `...` = ddd;
    style_isMissing = missing.0(style);
    if style_isMissing then L6() else L7(style);
  L6():
    p3 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c4 = ldf c in base;
      r23 = dyn c4("text", "R", "md");
      goto L0(r23);
    L2():
      r21 = dyn base6("text", "R", "md");
      goto L0(r21);
    };
    goto L7(p3);
  L7(style_orDefault):
    st style = style_orDefault;
    match_arg = ldf `match.arg`;
    check L56() else D0();
  D0():
    deopt 1 [];
  L56():
    p4 = prom<V +>{
      style1 = ld style;
      style2 = force? style1;
      checkMissing(style2);
      return style2;
    };
    r26 = dyn match_arg(p4);
    check L57() else D1();
  D1():
    deopt 3 [r26];
  L57():
    st style = r26;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L58() else L59();
  L8(r28):
    r30 = `!`(r28);
    c5 = `as.logical`(r30);
    if c5 then L62() else L9();
  L58():
    x1 = ld x;
    check L60() else D2();
  L59():
    r27 = dyn base7(<sym x>);
    goto L8(r27);
  D2():
    deopt 7 [x1];
  L9():
    style5 = ld style;
    check L70() else D7();
  L60():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r29 = dyn length(x2);
    check L61() else D3();
  L62():
    style3 = ld style;
    check L63() else D4();
  D3():
    deopt 10 [r29];
  D4():
    deopt 12 [style3];
  D7():
    deopt 24 [style5];
  L61():
    goto L8(r29);
  L63():
    style4 = force? style3;
    checkMissing(style4);
    r31 = `==`(style4, "R");
    c6 = `as.logical`(r31);
    if c6 then L64() else L10();
  L70():
    style6 = force? style5;
    checkMissing(style6);
    r36 = `==`(style6, "R");
    c7 = `as.logical`(r36);
    if c7 then L71() else L13();
  L10():
    character = ldf character;
    check L66() else D5();
  L11(r32):
    popenv;
    return r32;
  L13():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L76() else L77();
  L64():
    goto L11("person()");
  L71():
    _format_person_as_R_code = ldf `.format_person_as_R_code`;
    check L72() else D8();
  D5():
    deopt 19 [];
  D8():
    deopt 29 [];
  L15(r42):
    st args = r42;
    vapply = ldf vapply;
    check L79() else D11();
  L66():
    r33 = dyn character();
    check L67() else D6();
  L72():
    p5 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r38 = dyn _format_person_as_R_code(p5);
    check L73() else D9();
  L76():
    c8 = ldf c in base;
    r43 = dyn c8("given", "family", "email", "role", "comment");
    check L78() else D10();
  L77():
    r41 = dyn base8("given", "family", "email", "role", "comment");
    goto L15(r41);
  D6():
    deopt 20 [r33];
  D9():
    deopt 31 [r38];
  D10():
    deopt 43 [r43];
  D11():
    deopt 46 [];
  L67():
    goto L11(r33);
  L73():
    popenv;
    return r38;
  L78():
    goto L15(r43);
  L79():
    p6 = prom<V +>{
      include1 = ld include;
      include2 = force? include1;
      checkMissing(include2);
      return include2;
    };
    p7 = prom<V +>{
      match_arg1 = ld `match.arg`;
      match_arg2 = force? match_arg1;
      checkMissing(match_arg2);
      return match_arg2;
    };
    p8 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    r47 = dyn vapply(p6, p7, "", p8);
    check L80() else D12();
  D12():
    deopt 51 [r47];
  L80():
    st include = r47;
    braces1 = ld braces;
    check L81() else D13();
  D13():
    deopt 53 [braces1];
  L81():
    braces2 = force? braces1;
    checkMissing(braces2);
    c9 = `is.object`(braces2);
    if c9 then L82() else L83(braces2);
  L16(dx1):
    st braces = dx1;
    collapse1 = ld collapse;
    check L86() else D15();
  L82():
    dr = tryDispatchBuiltin.1("[", braces2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L84() else L83(dr);
  L83(braces4):
    args2 = ld args;
    check L85() else D14();
  D14():
    deopt 55 [braces4, args2];
  D15():
    deopt 59 [collapse1];
  L84():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(dx);
  L85():
    args3 = force? args2;
    __ = ldf `[` in base;
    r48 = dyn __(braces4, args3);
    goto L16(r48);
  L86():
    collapse2 = force? collapse1;
    checkMissing(collapse2);
    c10 = `is.object`(collapse2);
    if c10 then L87() else L88(collapse2);
  L17(dx3):
    st collapse = dx3;
    args6 = ld args;
    check L91() else D17();
  L87():
    dr2 = tryDispatchBuiltin.1("[", collapse2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L89() else L88(dr2);
  L88(collapse4):
    args4 = ld args;
    check L90() else D16();
  D16():
    deopt 61 [collapse4, args4];
  D17():
    deopt 65 [args6];
  L89():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L90():
    args5 = force? args4;
    __1 = ldf `[` in base;
    r49 = dyn __1(collapse4, args5);
    goto L17(r49);
  L91():
    args7 = force? args6;
    checkMissing(args7);
    l = ld collapse;
    names__ = ldf `names<-`;
    check L92() else D18();
  D18():
    deopt 68 [args7, l, args7];
  L92():
    r50 = dyn names__(l, NULL, args7);
    check L93() else D19();
  D19():
    deopt 70 [args7, r50];
  L93():
    st collapse = r50;
    l1 = ld braces;
    names__1 = ldf `names<-`;
    check L94() else D20();
  D20():
    deopt 73 [args7, l1, args7];
  L94():
    r51 = dyn names__1(l1, NULL, args7);
    check L95() else D21();
  D21():
    deopt 75 [args7, r51];
  L95():
    st braces = r51;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L96() else L97();
  L18(r53):
    c13 = `as.logical`(r53);
    if c13 then L103() else L19();
  L96():
    braces5 = ld braces;
    check L98() else D22();
  L97():
    r52 = dyn base9(<lang `$`(braces, given)>);
    goto L18(r52);
  D22():
    deopt 78 [braces5];
  L19():
    goto L20();
  L20():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L109() else L110();
  L98():
    braces6 = force? braces5;
    checkMissing(braces6);
    c11 = `is.object`(braces6);
    if c11 then L100() else L101(braces6);
  L103():
    l2 = ld braces;
    c14 = `is.object`(l2);
    if c14 then L105() else L106("", l2);
  L21(r62):
    c17 = `as.logical`(r62);
    if c17 then L116() else L22();
  L99(dx5):
    c12 = `==`(dx5, NULL);
    goto L18(c12);
  L100():
    dr4 = tryDispatchBuiltin.1("$", braces6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L102() else L101(dr4);
  L101(braces8):
    r54 = `$`(braces8, <sym given>);
    goto L99(r54);
  L104(r58, dx7):
    st braces = dx7;
    goto L20();
  L105():
    dr6 = tryDispatchBuiltin.0("$<-", l2, "");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L107() else L106("", dr6);
  L106(r56, l4):
    r59 = `$<-`(l4, <sym given>, "");
    goto L104(r56, r59);
  L109():
    braces9 = ld braces;
    check L111() else D23();
  L110():
    r61 = dyn base10(<lang `$`(braces, family)>);
    goto L21(r61);
  D23():
    deopt 90 [braces9];
  L22():
    goto L23();
  L23():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L122() else L123();
  L102():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L99(dx4);
  L107():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L104("", dx6);
  L111():
    braces10 = force? braces9;
    checkMissing(braces10);
    c15 = `is.object`(braces10);
    if c15 then L113() else L114(braces10);
  L116():
    l5 = ld braces;
    c18 = `is.object`(l5);
    if c18 then L118() else L119("", l5);
  L24(r71):
    c21 = `as.logical`(r71);
    if c21 then L129() else L25();
  L112(dx9):
    c16 = `==`(dx9, NULL);
    goto L21(c16);
  L113():
    dr8 = tryDispatchBuiltin.1("$", braces10);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L115() else L114(dr8);
  L114(braces12):
    r63 = `$`(braces12, <sym family>);
    goto L112(r63);
  L117(r67, dx11):
    st braces = dx11;
    goto L23();
  L118():
    dr10 = tryDispatchBuiltin.0("$<-", l5, "");
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L120() else L119("", dr10);
  L119(r65, l7):
    r68 = `$<-`(l7, <sym family>, "");
    goto L117(r65, r68);
  L122():
    braces13 = ld braces;
    check L124() else D24();
  L123():
    r70 = dyn base11(<lang `$`(braces, email)>);
    goto L24(r70);
  D24():
    deopt 102 [braces13];
  L25():
    goto L27();
  L27():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L138() else L139();
  L115():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L112(dx8);
  L120():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L117("", dx10);
  L124():
    braces14 = force? braces13;
    checkMissing(braces14);
    c19 = `is.object`(braces14);
    if c19 then L126() else L127(braces14);
  L129():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L130() else L131();
  L26(r74):
    l8 = ld braces;
    c23 = `is.object`(l8);
    if c23 then L134() else L135(r74, l8);
  L28(r83):
    c26 = `as.logical`(r83);
    if c26 then L145() else L29();
  L125(dx13):
    c20 = `==`(dx13, NULL);
    goto L24(c20);
  L126():
    dr12 = tryDispatchBuiltin.1("$", braces14);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L128() else L127(dr12);
  L127(braces16):
    r72 = `$`(braces16, <sym email>);
    goto L125(r72);
  L130():
    c22 = ldf c in base;
    r75 = dyn c22("<", ">");
    check L132() else D25();
  L131():
    r73 = dyn base12("<", ">");
    goto L26(r73);
  L138():
    braces17 = ld braces;
    check L140() else D26();
  L139():
    r82 = dyn base13(<lang `$`(braces, role)>);
    goto L28(r82);
  D25():
    deopt 111 [r75];
  D26():
    deopt 118 [braces17];
  L29():
    goto L31();
  L31():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L154() else L155();
  L128():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L125(dx12);
  L132():
    goto L26(r75);
  L133(r79, dx15):
    st braces = dx15;
    goto L27();
  L134():
    dr14 = tryDispatchBuiltin.0("$<-", l8, r74);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L136() else L135(r74, dr14);
  L135(r77, l10):
    r80 = `$<-`(l10, <sym email>, r74);
    goto L133(r77, r80);
  L140():
    braces18 = force? braces17;
    checkMissing(braces18);
    c24 = `is.object`(braces18);
    if c24 then L142() else L143(braces18);
  L145():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L146() else L147();
  L30(r86):
    l11 = ld braces;
    c28 = `is.object`(l11);
    if c28 then L150() else L151(r86, l11);
  L32(r95):
    c31 = `as.logical`(r95);
    if c31 then L161() else L33();
  L136():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L133(r74, dx14);
  L141(dx17):
    c25 = `==`(dx17, NULL);
    goto L28(c25);
  L142():
    dr16 = tryDispatchBuiltin.1("$", braces18);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L144() else L143(dr16);
  L143(braces20):
    r84 = `$`(braces20, <sym role>);
    goto L141(r84);
  L146():
    c27 = ldf c in base;
    r87 = dyn c27("[", "]");
    check L148() else D27();
  L147():
    r85 = dyn base14("[", "]");
    goto L30(r85);
  L154():
    braces21 = ld braces;
    check L156() else D28();
  L155():
    r94 = dyn base15(<lang `$`(braces, comment)>);
    goto L32(r94);
  D27():
    deopt 127 [r87];
  D28():
    deopt 134 [braces21];
  L33():
    goto L35();
  L35():
    lapply = ldf lapply;
    check L170() else D30();
  L144():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L141(dx16);
  L148():
    goto L30(r87);
  L149(r91, dx19):
    st braces = dx19;
    goto L31();
  L150():
    dr18 = tryDispatchBuiltin.0("$<-", l11, r86);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L152() else L151(r86, dr18);
  L151(r89, l13):
    r92 = `$<-`(l13, <sym role>, r86);
    goto L149(r89, r92);
  L156():
    braces22 = force? braces21;
    checkMissing(braces22);
    c29 = `is.object`(braces22);
    if c29 then L158() else L159(braces22);
  L161():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L162() else L163();
  D30():
    deopt 150 [];
  L34(r98):
    l14 = ld braces;
    c33 = `is.object`(l14);
    if c33 then L166() else L167(r98, l14);
  L152():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L149(r86, dx18);
  L157(dx21):
    c30 = `==`(dx21, NULL);
    goto L32(c30);
  L158():
    dr20 = tryDispatchBuiltin.1("$", braces22);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L160() else L159(dr20);
  L159(braces24):
    r96 = `$`(braces24, <sym comment>);
    goto L157(r96);
  L162():
    c32 = ldf c in base;
    r99 = dyn c32("(", ")");
    check L164() else D29();
  L163():
    r97 = dyn base16("(", ")");
    goto L34(r97);
  L170():
    p9 = prom<V +>{
      braces25 = ld braces;
      braces26 = force? braces25;
      checkMissing(braces26);
      return braces26;
    };
    p10 = prom<V +>{
      rep_len = ld rep_len;
      rep_len1 = force? rep_len;
      checkMissing(rep_len1);
      return rep_len1;
    };
    r108 = dyn lapply(p9, p10, 2);
    check L171() else D31();
  D29():
    deopt 143 [r99];
  D31():
    deopt 154 [r108];
  L160():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L157(dx20);
  L164():
    goto L34(r99);
  L165(r103, dx23):
    st braces = dx23;
    goto L35();
  L166():
    dr22 = tryDispatchBuiltin.0("$<-", l14, r98);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L168() else L167(r98, dr22);
  L167(r101, l16):
    r104 = `$<-`(l16, <sym comment>, r98);
    goto L165(r101, r104);
  L171():
    st braces = r108;
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L172() else L173();
  L36(r110):
    c36 = `as.logical`(r110);
    if c36 then L179() else L37();
  L168():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L165(r98, dx22);
  L172():
    collapse5 = ld collapse;
    check L174() else D32();
  L173():
    r109 = dyn base17(<lang `$`(collapse, given)>);
    goto L36(r109);
  D32():
    deopt 157 [collapse5];
  L37():
    goto L38();
  L38():
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L185() else L186();
  L174():
    collapse6 = force? collapse5;
    checkMissing(collapse6);
    c34 = `is.object`(collapse6);
    if c34 then L176() else L177(collapse6);
  L179():
    l17 = ld collapse;
    c37 = `is.object`(l17);
    if c37 then L181() else L182(" ", l17);
  L39(r119):
    c40 = `as.logical`(r119);
    if c40 then L192() else L40();
  L175(dx25):
    c35 = `==`(dx25, NULL);
    goto L36(c35);
  L176():
    dr24 = tryDispatchBuiltin.1("$", collapse6);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L178() else L177(dr24);
  L177(collapse8):
    r111 = `$`(collapse8, <sym given>);
    goto L175(r111);
  L180(r115, dx27):
    st collapse = dx27;
    goto L38();
  L181():
    dr26 = tryDispatchBuiltin.0("$<-", l17, " ");
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L183() else L182(" ", dr26);
  L182(r113, l19):
    r116 = `$<-`(l19, <sym given>, " ");
    goto L180(r113, r116);
  L185():
    collapse9 = ld collapse;
    check L187() else D33();
  L186():
    r118 = dyn base18(<lang `$`(collapse, family)>);
    goto L39(r118);
  D33():
    deopt 169 [collapse9];
  L40():
    goto L41();
  L41():
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L198() else L199();
  L178():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L175(dx24);
  L183():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L180(" ", dx26);
  L187():
    collapse10 = force? collapse9;
    checkMissing(collapse10);
    c38 = `is.object`(collapse10);
    if c38 then L189() else L190(collapse10);
  L192():
    l20 = ld collapse;
    c41 = `is.object`(l20);
    if c41 then L194() else L195(" ", l20);
  L42(r128):
    c44 = `as.logical`(r128);
    if c44 then L205() else L43();
  L188(dx29):
    c39 = `==`(dx29, NULL);
    goto L39(c39);
  L189():
    dr28 = tryDispatchBuiltin.1("$", collapse10);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L191() else L190(dr28);
  L190(collapse12):
    r120 = `$`(collapse12, <sym family>);
    goto L188(r120);
  L193(r124, dx31):
    st collapse = dx31;
    goto L41();
  L194():
    dr30 = tryDispatchBuiltin.0("$<-", l20, " ");
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L196() else L195(" ", dr30);
  L195(r122, l22):
    r125 = `$<-`(l22, <sym family>, " ");
    goto L193(r122, r125);
  L198():
    collapse13 = ld collapse;
    check L200() else D34();
  L199():
    r127 = dyn base19(<lang `$`(collapse, email)>);
    goto L42(r127);
  D34():
    deopt 181 [collapse13];
  L43():
    goto L44();
  L44():
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L211() else L212();
  L191():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L188(dx28);
  L196():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L193(" ", dx30);
  L200():
    collapse14 = force? collapse13;
    checkMissing(collapse14);
    c42 = `is.object`(collapse14);
    if c42 then L202() else L203(collapse14);
  L205():
    l23 = ld collapse;
    c45 = `is.object`(l23);
    if c45 then L207() else L208(", ", l23);
  L45(r137):
    c48 = `as.logical`(r137);
    if c48 then L218() else L46();
  L201(dx33):
    c43 = `==`(dx33, NULL);
    goto L42(c43);
  L202():
    dr32 = tryDispatchBuiltin.1("$", collapse14);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L204() else L203(dr32);
  L203(collapse16):
    r129 = `$`(collapse16, <sym email>);
    goto L201(r129);
  L206(r133, dx35):
    st collapse = dx35;
    goto L44();
  L207():
    dr34 = tryDispatchBuiltin.0("$<-", l23, ", ");
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L209() else L208(", ", dr34);
  L208(r131, l25):
    r134 = `$<-`(l25, <sym email>, ", ");
    goto L206(r131, r134);
  L211():
    collapse17 = ld collapse;
    check L213() else D35();
  L212():
    r136 = dyn base20(<lang `$`(collapse, role)>);
    goto L45(r136);
  D35():
    deopt 193 [collapse17];
  L46():
    goto L47();
  L47():
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L224() else L225();
  L204():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L201(dx32);
  L209():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L206(", ", dx34);
  L213():
    collapse18 = force? collapse17;
    checkMissing(collapse18);
    c46 = `is.object`(collapse18);
    if c46 then L215() else L216(collapse18);
  L218():
    l26 = ld collapse;
    c49 = `is.object`(l26);
    if c49 then L220() else L221(", ", l26);
  L48(r146):
    c52 = `as.logical`(r146);
    if c52 then L231() else L49();
  L214(dx37):
    c47 = `==`(dx37, NULL);
    goto L45(c47);
  L215():
    dr36 = tryDispatchBuiltin.1("$", collapse18);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L217() else L216(dr36);
  L216(collapse20):
    r138 = `$`(collapse20, <sym role>);
    goto L214(r138);
  L219(r142, dx39):
    st collapse = dx39;
    goto L47();
  L220():
    dr38 = tryDispatchBuiltin.0("$<-", l26, ", ");
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L222() else L221(", ", dr38);
  L221(r140, l28):
    r143 = `$<-`(l28, <sym role>, ", ");
    goto L219(r140, r143);
  L224():
    collapse21 = ld collapse;
    check L226() else D36();
  L225():
    r145 = dyn base21(<lang `$`(collapse, comment)>);
    goto L48(r145);
  D36():
    deopt 205 [collapse21];
  L49():
    goto L50();
  L50():
    lapply1 = ldf lapply;
    check L237() else D37();
  L217():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L214(dx36);
  L222():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L219(", ", dx38);
  L226():
    collapse22 = force? collapse21;
    checkMissing(collapse22);
    c50 = `is.object`(collapse22);
    if c50 then L228() else L229(collapse22);
  L231():
    l29 = ld collapse;
    c53 = `is.object`(l29);
    if c53 then L233() else L234(", ", l29);
  D37():
    deopt 217 [];
  L227(dx41):
    c51 = `==`(dx41, NULL);
    goto L48(c51);
  L228():
    dr40 = tryDispatchBuiltin.1("$", collapse22);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L230() else L229(dr40);
  L229(collapse24):
    r147 = `$`(collapse24, <sym comment>);
    goto L227(r147);
  L232(r151, dx43):
    st collapse = dx43;
    goto L50();
  L233():
    dr42 = tryDispatchBuiltin.0("$<-", l29, ", ");
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L235() else L234(", ", dr42);
  L234(r149, l31):
    r152 = `$<-`(l31, <sym comment>, ", ");
    goto L232(r149, r152);
  L237():
    p11 = prom<V +>{
      collapse25 = ld collapse;
      collapse26 = force? collapse25;
      checkMissing(collapse26);
      return collapse26;
    };
    p12 = prom<V +>{
      rep_len2 = ld rep_len;
      rep_len3 = force? rep_len2;
      checkMissing(rep_len3);
      return rep_len3;
    };
    r156 = dyn lapply1(p11, p12, 1);
    check L238() else D38();
  D38():
    deopt 221 [r156];
  L230():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L227(dx40);
  L235():
    dx42 = getTryDispatchBuiltinValue(dr42);
    goto L232(", ", dx42);
  L238():
    st collapse = r156;
    lapply2 = ldf lapply;
    check L239() else D39();
  D39():
    deopt 224 [];
  L239():
    p13 = prom<V +>{
      sym22 = ldf unclass;
      base22 = ldf unclass in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r158):
      return r158;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      unclass = ldf unclass in base;
      r159 = dyn unclass(x6);
      goto L0(r159);
    L2():
      r157 = dyn base22(<sym x>);
      goto L0(r157);
    };
    p14 = prom<V +>{
      __2 = ld `[`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    p15 = prom<V +>{
      include3 = ld include;
      include4 = force? include3;
      checkMissing(include4);
      return include4;
    };
    r163 = dyn lapply2(p13, p14, p15);
    check L240() else D40();
  D40():
    deopt 228 [r163];
  L240():
    st x = r163;
    braces27 = ld braces;
    check L241() else D41();
  D41():
    deopt 230 [braces27];
  L241():
    braces28 = force? braces27;
    checkMissing(braces28);
    c54 = `is.object`(braces28);
    if c54 then L242() else L243(braces28);
  L51(dx45):
    st braces = dx45;
    collapse27 = ld collapse;
    check L246() else D43();
  L242():
    dr44 = tryDispatchBuiltin.1("[", braces28);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L244() else L243(dr44);
  L243(braces30):
    include5 = ld include;
    check L245() else D42();
  D42():
    deopt 232 [braces30, include5];
  D43():
    deopt 236 [collapse27];
  L244():
    dx44 = getTryDispatchBuiltinValue(dr44);
    goto L51(dx44);
  L245():
    include6 = force? include5;
    __4 = ldf `[` in base;
    r164 = dyn __4(braces30, include6);
    goto L51(r164);
  L246():
    collapse28 = force? collapse27;
    checkMissing(collapse28);
    c55 = `is.object`(collapse28);
    if c55 then L247() else L248(collapse28);
  L52(dx47):
    st collapse = dx47;
    sym23 = ldf any;
    base23 = ldf any in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L251() else L252();
  L247():
    dr46 = tryDispatchBuiltin.1("[", collapse28);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L249() else L248(dr46);
  L248(collapse30):
    include7 = ld include;
    check L250() else D44();
  D44():
    deopt 238 [collapse30, include7];
  L53(r167):
    c56 = `as.logical`(r167);
    if c56 then L255() else L54();
  L249():
    dx46 = getTryDispatchBuiltinValue(dr46);
    goto L52(dx46);
  L250():
    include8 = force? include7;
    __5 = ldf `[` in base;
    r165 = dyn __5(collapse30, include8);
    goto L52(r165);
  L251():
    include9 = ld include;
    check L253() else D45();
  L252():
    r166 = dyn base23(<lang `==`(include, "comment")>);
    goto L53(r166);
  D45():
    deopt 244 [include9];
  L54():
    goto L55();
  L55():
    r175 = clos inner254300885;
    st paste_collapse = r175;
    r176 = clos inner3913899244;
    st format_person1 = r176;
    vapply1 = ldf vapply;
    check L259() else D49();
  L253():
    include10 = force? include9;
    checkMissing(include10);
    r168 = `==`(include10, "comment");
    any = ldf any in base;
    r169 = dyn any(r168);
    check L254() else D46();
  L255():
    lapply3 = ldf lapply;
    check L256() else D47();
  D46():
    deopt 249 [r169];
  D47():
    deopt 251 [];
  D49():
    deopt 265 [];
  L254():
    goto L53(r169);
  L256():
    p16 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p17 = prom<V +>{
      r171 = clos inner3708401697;
      return r171;
    };
    r173 = dyn lapply3(p16, p17);
    check L257() else D48();
  L259():
    p18 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p19 = prom<V +>{
      format_person1 = ld format_person1;
      format_person2 = force? format_person1;
      checkMissing(format_person2);
      return format_person2;
    };
    r179 = dyn vapply1(p18, p19, "");
    check L260() else D50();
  D48():
    deopt 254 [r173];
  D50():
    deopt 269 [r179];
  L257():
    st x = r173;
    goto L55();
  L260():
    popenv;
    return r179;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg _expand_ORCID_identifier:cls, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg style:*, reg style1:V, reg p1:p(V +), reg r3:V, reg l:*, reg c1:L, reg r5:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg e5:*, reg e6:V |
    mkenv;
    st e = e;
    _expand_ORCID_identifier = ldf `.expand_ORCID_identifier`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      c = `is.object`(e2);
      if c then L1() else L2(e2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", e2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e4):
      r = `$`(e4, <sym comment>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      style = ld style;
      style1 = force? style;
      checkMissing(style1);
      return style1;
    };
    r3 = dyn _expand_ORCID_identifier(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    l = ld e;
    c1 = `is.object`(l);
    if c1 then L3() else L4(r3, l);
  L2(dx3):
    st e = dx3;
    e5 = ld e;
    check L6() else D2();
  L3():
    dr2 = tryDispatchBuiltin.0("$<-", l, r3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L5() else L4(r3, dr2);
  L4(r5, l2):
    r8 = `$<-`(l2, <sym comment>, r3);
    goto L2(r8);
  D2():
    deopt 8 [e5];
  L5():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L6():
    e6 = force? e5;
    checkMissing(e6);
    popenv;
    return e6;
  }
}
fun inner254300885(x, collapse) {
  (reg x:*, reg collapse:*) -+> V { var x:*, var collapse:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg collapse1:*, reg collapse2:V, reg is_na:cls, reg r2:V, reg c:L, reg c1:V, reg isFALSE:cls, reg collapse3:*, reg collapse4:V, reg p:p(V +), reg r4:V, reg c3:L, reg c4:V, reg c6:L, reg x1:*, reg x2:V, reg c7:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg paste:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg collapse5:*, reg collapse6:V, reg p2:p(V +), reg r8:V |
    mkenv;
    st x = x;
    st collapse = collapse;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L8();
  L4():
    collapse1 = ld collapse;
    check L6() else D0();
  L5():
    r = dyn base(<sym collapse>);
    goto L0(r);
  D0():
    deopt 2 [collapse1];
  L1(c1):
    c6 = `as.logical`(c1);
    if c6 then L12() else L2();
  L6():
    collapse2 = force? collapse1;
    checkMissing(collapse2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(collapse2);
    check L7() else D1();
  L8():
    isFALSE = ldf isFALSE;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [c];
  L2():
    paste = ldf paste;
    check L18() else D5();
  L7():
    goto L0(r2);
  L9():
    p = prom<V +>{
      collapse3 = ld collapse;
      collapse4 = force? collapse3;
      checkMissing(collapse4);
      return collapse4;
    };
    r4 = dyn isFALSE(p);
    check L10() else D3();
  L12():
    x1 = ld x;
    check L13() else D4();
  D3():
    deopt 9 [c, r4];
  D4():
    deopt 11 [x1];
  D5():
    deopt 17 [];
  L10():
    c3 = `as.logical`(r4);
    c4 = `||`(c, c3);
    goto L1(c4);
  L13():
    x2 = force? x1;
    checkMissing(x2);
    c7 = `is.object`(x2);
    if c7 then L14() else L15(x2);
  L18():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p2 = prom<V +>{
      collapse5 = ld collapse;
      collapse6 = force? collapse5;
      checkMissing(collapse6);
      return collapse6;
    };
    r8 = dyn paste[, collapse](p1, p2);
    check L19() else D6();
  D6():
    deopt 21 [r8];
  L3(dx1):
    popenv;
    return dx1;
  L14():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(x4):
    __ = ldf `[` in base;
    r5 = dyn __(x4, 1);
    goto L3(r5);
  L19():
    popenv;
    return r8;
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg p1:*, reg p2:V, reg r2:I, reg p3:p(V +), reg r4:cls, reg p4:p(V +), reg r6:V, reg paste:cls, reg do_call:cls, reg c:*, reg c1:V, reg p5:p(V +), reg rval:*, reg rval1:V, reg p6:p(V +), reg r9:V, reg p7:p(V +), reg r11:V |
    mkenv;
    st p = p;
    lapply = ldf lapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      r2 = seq_along(p2);
      goto L0(r2);
    L2():
      r = dyn base(<sym p>);
      goto L0(r);
    };
    p4 = prom<V +>{
      r4 = clos inner3002224933;
      return r4;
    };
    r6 = dyn lapply(p3, p4);
    check L1() else D1();
  D1():
    deopt 4 [r6];
  L1():
    st rval = r6;
    paste = ldf paste;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p7 = prom<V +>{
      do_call = ldf `do.call`;
      p5 = prom<V +>{
        c = ld c;
        c1 = force? c;
        checkMissing(c1);
        return c1;
      };
      p6 = prom<V +>{
        rval = ld rval;
        rval1 = force? rval;
        checkMissing(rval1);
        return rval1;
      };
      r9 = dyn do_call(p5, p6);
      return r9;
    };
    r11 = dyn paste[, collapse](p7, " ");
    check L3() else D3();
  D3():
    deopt 11 [r11];
  L3():
    popenv;
    return r11;
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg p:*, reg p1:V, reg c:L, reg p3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r2:V, reg c1:V, reg c2:L, reg paste0:cls, reg braces:*, reg braces1:V, reg c3:L, reg braces3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r3:V, reg c4:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r4:V, reg p4:p(V +), reg paste_collapse:cls, reg p5:*, reg p6:V, reg c5:L, reg p8:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg i5:*, reg i6:V, reg __3:cls, reg r6:V, reg p9:p(V +), reg collapse:*, reg collapse1:V, reg c6:L, reg collapse3:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg i7:*, reg i8:V, reg __4:cls, reg r8:V, reg p10:p(V +), reg r10:V, reg p11:p(V +), reg braces4:*, reg braces5:V, reg c7:L, reg braces7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg i9:*, reg i10:V, reg __5:cls, reg r12:V, reg c8:L, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg __6:cls, reg r13:V, reg p12:p(V +), reg r15:V |
    mkenv;
    st i = i;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c2 = `as.logical`(r1);
    if c2 then L10() else L2();
  L3():
    p = ld p;
    check L5() else D0();
  L4():
    r = dyn base(<lang `[[`(p, i)>);
    goto L0(r);
  D0():
    deopt 1 [p];
  L2():
    paste0 = ldf paste0;
    check L12() else D2();
  L5():
    p1 = force? p;
    checkMissing(p1);
    c = `is.object`(p1);
    if c then L6() else L7(p1);
  L10():
    popenv;
    return NULL;
  D2():
    deopt 10 [];
  L1(dx1):
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L6():
    dr = tryDispatchBuiltin.1("[[", p1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(p3):
    i1 = ld i;
    check L9() else D1();
  L12():
    p4 = prom<V +>{
      braces = ld braces;
      braces1 = force? braces;
      checkMissing(braces1);
      c3 = `is.object`(braces1);
      if c3 then L2() else L3(braces1);
    L0(dx3):
      c4 = `is.object`(dx3);
      if c4 then L5() else L6(dx3);
    L2():
      dr2 = tryDispatchBuiltin.1("[[", braces1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(braces3):
      i3 = ld i;
      i4 = force? i3;
      __1 = ldf `[[` in base;
      r3 = dyn __1(braces3, i4);
      goto L0(r3);
    L1(dx7):
      return dx7;
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      dr4 = tryDispatchBuiltin.1("[", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dx5):
      __2 = ldf `[` in base;
      r4 = dyn __2(dx5, 1);
      goto L1(r4);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx6);
    };
    p11 = prom<V +>{
      paste_collapse = ldf paste_collapse;
      p9 = prom<V +>{
        p5 = ld p;
        p6 = force? p5;
        checkMissing(p6);
        c5 = `is.object`(p6);
        if c5 then L1() else L2(p6);
      L0(dx9):
        return dx9;
      L1():
        dr6 = tryDispatchBuiltin.1("[[", p6);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(p8):
        i5 = ld i;
        i6 = force? i5;
        __3 = ldf `[[` in base;
        r6 = dyn __3(p8, i6);
        goto L0(r6);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx8);
      };
      p10 = prom<V +>{
        collapse = ld collapse;
        collapse1 = force? collapse;
        checkMissing(collapse1);
        c6 = `is.object`(collapse1);
        if c6 then L1() else L2(collapse1);
      L0(dx11):
        return dx11;
      L1():
        dr8 = tryDispatchBuiltin.1("[[", collapse1);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(collapse3):
        i7 = ld i;
        i8 = force? i7;
        __4 = ldf `[[` in base;
        r8 = dyn __4(collapse3, i8);
        goto L0(r8);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx10);
      };
      r10 = dyn paste_collapse(p9, p10);
      return r10;
    };
    p12 = prom<V +>{
      braces4 = ld braces;
      braces5 = force? braces4;
      checkMissing(braces5);
      c7 = `is.object`(braces5);
      if c7 then L2() else L3(braces5);
    L0(dx13):
      c8 = `is.object`(dx13);
      if c8 then L5() else L6(dx13);
    L2():
      dr10 = tryDispatchBuiltin.1("[[", braces5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(braces7):
      i9 = ld i;
      i10 = force? i9;
      __5 = ldf `[[` in base;
      r12 = dyn __5(braces7, i10);
      goto L0(r12);
    L1(dx17):
      return dx17;
    L4():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx13);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx15):
      __6 = ldf `[` in base;
      r13 = dyn __6(dx15, 2);
      goto L1(r13);
    L7():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx16);
    };
    r15 = dyn paste0(p4, p11, p12);
    check L13() else D3();
  D1():
    deopt 3 [p3, i1];
  D3():
    deopt 14 [r15];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L9():
    i2 = force? i1;
    __ = ldf `[[` in base;
    r2 = dyn __(p3, i2);
    goto L1(r2);
  L13():
    popenv;
    return r15;
  }
}