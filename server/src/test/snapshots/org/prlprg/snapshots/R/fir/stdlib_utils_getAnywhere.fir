fun main() {
  () -+> V { reg r:cls, reg getAnywhere:cls, reg r1:V, reg getAnywhere1:cls, reg r2:V, reg argsAnywhere:cls, reg format_dist:*, reg format_dist1:V, reg p:p(V +), reg r4:V |
    mkenv;
    r = clos inner2501545716;
    st getAnywhere = r;
    getAnywhere = ldf getAnywhere;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn getAnywhere("format.dist");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    getAnywhere1 = ldf getAnywhere;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    r2 = dyn getAnywhere1("simpleLoess");
    check L3() else D3();
  D3():
    deopt 10 [r2];
  L3():
    argsAnywhere = ldf argsAnywhere;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    p = prom<V +>{
      format_dist = ld `format.dist`;
      format_dist1 = force? format_dist;
      checkMissing(format_dist1);
      return format_dist1;
    };
    r4 = dyn argsAnywhere(p);
    check L5() else D5();
  D5():
    deopt 14 [r4];
  L5():
    popenv;
    return r4;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg tryCatch:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg r2:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg substitute:cls, reg r11:V, reg as_character:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg list:cls, reg r16:V, reg character:cls, reg r17:V, reg logical:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg find:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r22:V, reg length:cls, reg r23:V, reg c2:L, reg lapply:cls, reg pos:*, reg pos1:V, reg p3:p(V +), reg r25:cls, reg p4:p(V +), reg x5:*, reg x6:V, reg p5:p(V +), reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg pos2:*, reg pos3:V, reg names:cls, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg pos4:*, reg pos5:V, reg length1:cls, reg r36:V, reg rep_int:cls, reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg grep:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r42:V, reg length2:cls, reg r43:V, reg c3:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg strsplit:cls, reg x9:*, reg x10:V, reg p7:p(V +), reg r47:V, reg c4:L, reg r49:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r50:V, reg length3:cls, reg r51:V, reg np:*, reg np1:V, reg r52:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x11:V, reg paste:cls, reg parts:*, reg parts1:V, reg c6:L, reg parts3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i5:*, reg i6:V, reg r53:V, reg r54:V, reg __1:cls, reg r55:V, reg p8:p(V +), reg r57:V, reg paste1:cls, reg parts4:*, reg parts5:V, reg c7:L, reg parts7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i7:*, reg i8:V, reg np2:*, reg np3:V, reg r58:V, reg __2:cls, reg r59:V, reg p9:p(V +), reg r61:V, reg gen:*, reg gen1:V, reg r62:V, reg c8:L, reg i9:I, reg c9:V, reg cl:*, reg cl1:V, reg r63:V, reg c11:L, reg c12:V, reg c14:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r65:V, reg i18:I, reg r66:V, reg substitute1:cls, reg r67:V, reg eval_parent:cls, reg Call:*, reg Call1:V, reg p10:p(V +), reg r69:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r70:V, reg i21:I, reg r71:V, reg f:*, reg f1:V, reg c15:V, reg r72:V, reg c16:L, reg i23:I, reg c18:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r73:V, reg i26:I, reg c21:L, reg r74:V, reg environment:cls, reg f2:*, reg f3:V, reg p11:p(V +), reg r76:V, reg c22:V, reg r77:V, reg c23:L, reg c24:V, reg c26:L, reg topenv:cls, reg environment1:cls, reg f4:*, reg f5:V, reg p12:p(V +), reg r79:V, reg p13:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r81:V, reg r82:V, reg baseenv:cls, reg r83:V, reg p14:p(V +), reg r85:V, reg isNamespace:cls, reg ev:*, reg ev1:V, reg p15:p(V +), reg r87:V, reg c27:L, reg getNamespaceName:cls, reg ev2:*, reg ev3:V, reg p16:p(V +), reg r89:V, reg i32:I, reg r90:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r91:V, reg i35:I, reg r92:V, reg objs:*, reg objs1:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r93:V, reg i38:I, reg r94:V, reg f6:*, reg f7:V, reg list1:cls, reg r95:V, reg c28:cls, reg r96:V, reg paste2:cls, reg gen2:*, reg gen3:V, reg p17:p(V +), reg r98:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r99:V, reg i41:I, reg r100:V, reg nmev:*, reg nmev1:V, reg c29:V, reg r101:V, reg c30:L, reg paste3:cls, reg msg:*, reg msg1:V, reg p18:p(V +), reg nmev2:*, reg nmev3:V, reg p19:p(V +), reg r104:V, reg i44:I, reg sym17:cls, reg base17:cls, reg guard17:L, reg r106:V, reg i47:I, reg r107:V, reg where:*, reg where1:V, reg msg2:*, reg msg3:V, reg c31:cls, reg r108:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r109:V, reg i50:I, reg r110:V, reg visible:*, reg visible1:V, reg c32:cls, reg r111:V, reg i51:I, reg loadedNamespaces:cls, reg r113:V, reg s1:V, reg l1:I, reg i53:I, reg i54:I, reg i55:I, reg c33:L, reg x12:V, reg asNamespace:cls, reg i58:*, reg i59:V, reg p20:p(V +), reg r115:V, reg exists:cls, reg x13:*, reg x14:V, reg p21:p(V +), reg ns:*, reg ns1:V, reg p22:p(V +), reg r118:V, reg c34:L, reg get:cls, reg x15:*, reg x16:V, reg p23:p(V +), reg ns2:*, reg ns3:V, reg p24:p(V +), reg r121:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r122:V, reg i64:I, reg r123:V, reg objs2:*, reg objs3:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r124:V, reg i67:I, reg r125:V, reg f8:*, reg f9:V, reg list2:cls, reg r126:V, reg c35:cls, reg r127:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r128:V, reg i70:I, reg r129:V, reg where2:*, reg where3:V, reg paste4:cls, reg i71:*, reg i72:V, reg p25:p(V +), reg r131:V, reg c36:cls, reg r132:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r133:V, reg i75:I, reg r134:V, reg visible2:*, reg visible3:V, reg c37:cls, reg r135:V, reg i76:I, reg sym23:cls, reg base23:cls, reg guard23:L, reg r137:V, reg r138:V, reg objs4:*, reg objs5:V, reg length4:cls, reg r139:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r140:V, reg r141:V, reg ln:*, reg ln1:V, reg rep_int1:cls, reg r142:V, reg ln2:*, reg ln3:V, reg r143:V, reg c38:L, reg ln4:*, reg ln5:V, reg r144:V, reg s2:V, reg l2:I, reg i77:I, reg i78:I, reg i79:I, reg c39:L, reg x17:V, reg i82:*, reg i83:V, reg r145:V, reg r146:V, reg s3:V, reg l3:I, reg i84:I, reg i85:I, reg i86:I, reg i87:I, reg c40:L, reg x18:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r147:V, reg i96:I, reg i97:I, reg r148:V, reg objs6:*, reg objs7:V, reg c41:L, reg i100:I, reg i101:I, reg objs9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i104:I, reg i105:I, reg dx7:V, reg i106:*, reg i107:V, reg __3:cls, reg r149:V, reg objs10:*, reg objs11:V, reg c42:L, reg i110:I, reg i111:I, reg objs13:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i114:I, reg i115:I, reg dx9:V, reg j:*, reg j1:V, reg __4:cls, reg r150:V, reg identical:cls, reg r151:V, reg c43:L, reg l4:*, reg c44:L, reg i122:I, reg i123:I, reg r153:L, reg l6:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i126:I, reg i127:I, reg dx11:V, reg i128:*, reg i129:V, reg ___:cls, reg r156:V, reg i130:I, reg structure:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r158:V, reg r159:V, reg x19:*, reg x20:V, reg objs14:*, reg objs15:V, reg where4:*, reg where5:V, reg visible4:*, reg visible5:V, reg dups:*, reg dups1:V, reg list3:cls, reg r160:V, reg p26:p(V +), reg r162:V |
    mkenv;
    st x = x;
    tryCatch = ldf tryCatch;
    check L59() else D0();
  D0():
    deopt 1 [];
  L59():
    p = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r2 = `!`(r1);
      return r2;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.character`(x2);
      goto L0(c);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    p1 = prom<V +>{
      r4 = clos inner3708401697;
      return r4;
    };
    r6 = dyn tryCatch[, error](p, p1);
    check L60() else D1();
  D1():
    deopt 5 [r6];
  L60():
    c1 = `as.logical`(r6);
    if c1 then L61() else L0();
  L0():
    goto L3();
  L3():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L68() else L69();
  L61():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L62() else L63();
  L1(r8):
    st x = r8;
    goto L3();
  L4(r15):
    st objs = r15;
    character = ldf character;
    check L71() else D4();
  L62():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L64() else L65();
  L63():
    r7 = dyn base1(<lang substitute(x)>);
    goto L1(r7);
  L68():
    list = ldf list in base;
    r16 = dyn list();
    check L70() else D3();
  L69():
    r14 = dyn base3();
    goto L4(r14);
  D3():
    deopt 19 [r16];
  D4():
    deopt 22 [];
  L2(r10):
    as_character = ldf `as.character` in base;
    r12 = dyn as_character(r10);
    check L66() else D2();
  L64():
    substitute = ldf substitute in base;
    r11 = dyn substitute(<sym x>);
    goto L2(r11);
  L65():
    r9 = dyn base2(<sym x>);
    goto L2(r9);
  L70():
    goto L4(r16);
  L71():
    r17 = dyn character();
    check L72() else D5();
  D2():
    deopt 12 [r12];
  D5():
    deopt 23 [r17];
  L66():
    goto L1(r12);
  L72():
    st where = r17;
    logical = ldf logical;
    check L73() else D6();
  D6():
    deopt 26 [];
  L73():
    r18 = dyn logical();
    check L74() else D7();
  D7():
    deopt 27 [r18];
  L74():
    st visible = r18;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L75() else L76();
  L5(r20):
    c2 = `as.logical`(r20);
    if c2 then L80() else L6();
  L75():
    find = ldf find;
    check L77() else D8();
  L76():
    r19 = dyn base4(<lang `<-`(pos, find(x, numeric=TRUE))>);
    goto L5(r19);
  D8():
    deopt 32 [];
  L6():
    goto L10();
  L10():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L95() else L96();
  L77():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r22 = dyn find[, numeric](p2, TRUE);
    check L78() else D9();
  L80():
    lapply = ldf lapply;
    check L81() else D11();
  D9():
    deopt 36 [r22];
  D11():
    deopt 41 [];
  L11(r40):
    c3 = `as.logical`(r40);
    if c3 then L100() else L12();
  L78():
    st pos = r22;
    length = ldf length in base;
    r23 = dyn length(r22);
    check L79() else D10();
  L81():
    p3 = prom<V +>{
      pos = ld pos;
      pos1 = force? pos;
      checkMissing(pos1);
      return pos1;
    };
    p4 = prom<V +>{
      r25 = clos inner3752282704;
      return r25;
    };
    p5 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r28 = dyn lapply[, , x](p3, p4, p5);
    check L82() else D12();
  L95():
    grep = ldf grep;
    check L97() else D18();
  L96():
    r39 = dyn base8(<lang grep(".", x, fixed=TRUE)>);
    goto L11(r39);
  D10():
    deopt 39 [r23];
  D12():
    deopt 46 [r28];
  D18():
    deopt 72 [];
  L12():
    goto L35();
  L35():
    loadedNamespaces = ldf loadedNamespaces;
    check L172() else D56();
  L79():
    goto L5(r23);
  L82():
    st objs = r28;
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L83() else L84();
  L97():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r42 = dyn grep[, , fixed](".", p6, TRUE);
    check L98() else D19();
  L100():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L101() else L102();
  D19():
    deopt 77 [r42];
  D56():
    deopt 224 [];
  L7(r30):
    st where = r30;
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L87() else L88();
  L13(r45):
    st np = r45;
    np = ld np;
    check L109() else D24();
  L83():
    pos2 = ld pos;
    check L85() else D13();
  L84():
    r29 = dyn base5(<sym pos>);
    goto L7(r29);
  L98():
    length2 = ldf length in base;
    r43 = dyn length2(r42);
    check L99() else D20();
  L101():
    strsplit = ldf strsplit;
    check L103() else D21();
  L102():
    r44 = dyn base9(<lang `<-`(parts, `[[`(strsplit(x, ".", fixed=TRUE), 1))>);
    goto L13(r44);
  L172():
    r113 = dyn loadedNamespaces();
    check L173() else D57();
  D13():
    deopt 50 [pos2];
  D20():
    deopt 79 [r43];
  D21():
    deopt 83 [];
  D24():
    deopt 97 [2.0, np];
  D57():
    deopt 225 [r113];
  L8(r33):
    st visible = r33;
    goto L10();
  L85():
    pos3 = force? pos2;
    checkMissing(pos3);
    names = ldf names in base;
    r31 = dyn names(pos3);
    check L86() else D14();
  L87():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  L88():
    r32 = dyn base6(TRUE, <lang length(pos)>);
    goto L8(r32);
  L99():
    goto L11(r43);
  L103():
    p7 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r47 = dyn strsplit[, , fixed](p7, ".", TRUE);
    check L104() else D22();
  L109():
    np1 = force? np;
    checkMissing(np1);
    r52 = `:`(2.0, np1);
    s = toForSeq(r52);
    l = length(s);
    i = 0;
    goto L15(i);
  L173():
    s1 = toForSeq(r113);
    l1 = length(s1);
    i53 = 0;
    goto L36(i53);
  D14():
    deopt 53 [r31];
  D22():
    deopt 88 [r47];
  L9(r35):
    rep_int = ldf `rep.int` in base;
    r37 = dyn rep_int(TRUE, r35);
    check L93() else D17();
  L15(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L110() else L34();
  L36(i54):
    i55 = `+`.1(i54, 1);
    c33 = `<`.1(l1, i55);
    if c33 then L174() else L43();
  L86():
    goto L7(r31);
  L89():
    pos4 = ld pos;
    check L91() else D15();
  L90():
    r34 = dyn base7(<sym pos>);
    goto L9(r34);
  L104():
    c4 = `is.object`(r47);
    if c4 then L105() else L106(r47);
  D15():
    deopt 60 [pos4];
  D17():
    deopt 65 [r37];
  L14(dx1):
    st parts = dx1;
    length3 = ldf length in base;
    r51 = dyn length3(dx1);
    check L108() else D23();
  L34():
    x11 = `[[`(s, i2, NULL, TRUE);
    st i = x11;
    paste = ldf paste;
    check L111() else D25();
  L43():
    x12 = `[[`(s1, i55, NULL, TRUE);
    st i = x12;
    asNamespace = ldf asNamespace;
    check L175() else D58();
  L91():
    pos5 = force? pos4;
    checkMissing(pos5);
    length1 = ldf length in base;
    r36 = dyn length1(pos5);
    check L92() else D16();
  L93():
    goto L8(r37);
  L105():
    dr = tryDispatchBuiltin.1("[[", r47);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L107() else L106(dr);
  L106(r49):
    __ = ldf `[[` in base;
    r50 = dyn __(r49, 1);
    goto L14(r50);
  L110():
    goto L35();
  L174():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L201() else L202();
  D16():
    deopt 63 [r36];
  D23():
    deopt 94 [r51];
  D25():
    deopt 101 [i2];
  D58():
    deopt 227 [i55];
  L44(r138):
    st ln = r138;
    sym24 = ldf `rep.int`;
    base24 = ldf `rep.int` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L205() else L206();
  L92():
    goto L9(r36);
  L107():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L108():
    goto L13(r51);
  L111():
    p8 = prom<V +>{
      parts = ld parts;
      parts1 = force? parts;
      checkMissing(parts1);
      c6 = `is.object`(parts1);
      if c6 then L1() else L2(parts1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", parts1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(parts3):
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      r53 = `-`(i6, 1.0);
      r54 = `:`(1, r53);
      __1 = ldf `[` in base;
      r55 = dyn __1(parts3, r54);
      goto L0(r55);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r57 = dyn paste[, collapse](p8, ".");
    check L112() else D26();
  L175():
    p20 = prom<V +>{
      i58 = ld i;
      i59 = force? i58;
      checkMissing(i59);
      return i59;
    };
    r115 = dyn asNamespace(p20);
    check L176() else D59();
  L201():
    objs4 = ld objs;
    check L203() else D74();
  L202():
    r137 = dyn base23(<sym objs>);
    goto L44(r137);
  D26():
    deopt 105 [i2, r57];
  D59():
    deopt 229 [i55, r115];
  D74():
    deopt 288 [objs4];
  L45(r141):
    st dups = r141;
    ln2 = ld ln;
    check L209() else D78();
  L112():
    st gen = r57;
    paste1 = ldf paste;
    check L113() else D27();
  L176():
    st ns = r115;
    exists = ldf exists;
    check L177() else D60();
  L203():
    objs5 = force? objs4;
    checkMissing(objs5);
    length4 = ldf length in base;
    r139 = dyn length4(objs5);
    check L204() else D75();
  L205():
    ln = ld ln;
    check L207() else D76();
  L206():
    r140 = dyn base24(FALSE, <sym ln>);
    goto L45(r140);
  D27():
    deopt 108 [i2];
  D60():
    deopt 232 [i55];
  D75():
    deopt 291 [r139];
  D76():
    deopt 296 [ln];
  D78():
    deopt 301 [ln2];
  L113():
    p9 = prom<V +>{
      parts4 = ld parts;
      parts5 = force? parts4;
      checkMissing(parts5);
      c7 = `is.object`(parts5);
      if c7 then L1() else L2(parts5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", parts5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(parts7):
      i7 = ld i;
      i8 = force? i7;
      checkMissing(i8);
      np2 = ld np;
      np3 = force? np2;
      checkMissing(np3);
      r58 = `:`(i8, np3);
      __2 = ldf `[` in base;
      r59 = dyn __2(parts7, r58);
      goto L0(r59);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r61 = dyn paste1[, collapse](p9, ".");
    check L114() else D28();
  L177():
    p21 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p22 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    r118 = dyn exists[, envir, inherits](p21, p22, FALSE);
    check L178() else D61();
  L204():
    goto L44(r139);
  L207():
    ln1 = force? ln;
    checkMissing(ln1);
    rep_int1 = ldf `rep.int` in base;
    r142 = dyn rep_int1(FALSE, ln1);
    check L208() else D77();
  L209():
    ln3 = force? ln2;
    checkMissing(ln3);
    r143 = `>`(ln3, 1);
    c38 = `as.logical`(r143);
    if c38 then L210() else L46();
  D28():
    deopt 112 [i2, r61];
  D61():
    deopt 238 [i55, r118];
  D77():
    deopt 299 [r142];
  L46():
    goto L58();
  L58():
    structure = ldf structure;
    check L236() else D87();
  L114():
    st cl = r61;
    gen = ld gen;
    check L115() else D29();
  L178():
    c34 = `as.logical`(r118);
    if c34 then L179() else L37();
  L208():
    goto L45(r142);
  L210():
    ln4 = ld ln;
    check L211() else D79();
  D29():
    deopt 114 [i2, gen];
  D79():
    deopt 306 [2, ln4];
  D87():
    deopt 356 [];
  L37():
    goto L42(i55);
  L42(i76):
    goto L36(i76);
  L115():
    gen1 = force? gen;
    checkMissing(gen1);
    r62 = `==`(gen1, "");
    c8 = `as.logical`(r62);
    if c8 then L16(i2, c8) else L116();
  L179():
    get = ldf get;
    check L180() else D62();
  L211():
    ln5 = force? ln4;
    checkMissing(ln5);
    r144 = `:`(2, ln5);
    s2 = toForSeq(r144);
    l2 = length(s2);
    i77 = 0;
    goto L47(i77);
  L236():
    p26 = prom<V +>{
      sym26 = ldf list;
      base26 = ldf list in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r159):
      return r159;
    L1():
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      objs14 = ld objs;
      objs15 = force? objs14;
      checkMissing(objs15);
      where4 = ld where;
      where5 = force? where4;
      checkMissing(where5);
      visible4 = ld visible;
      visible5 = force? visible4;
      checkMissing(visible5);
      dups = ld dups;
      dups1 = force? dups;
      checkMissing(dups1);
      list3 = ldf list in base;
      r160 = dyn list3(x20, objs15, where5, visible5, dups1);
      goto L0(r160);
    L2():
      r158 = dyn base26[name, objs, where, visible, dups](<sym x>, <sym objs>, <sym where>, <sym visible>, <sym dups>);
      goto L0(r158);
    };
    r162 = dyn structure[, class](p26, "getAnywhere");
    check L237() else D88();
  D62():
    deopt 240 [i55];
  D88():
    deopt 360 [r162];
  L16(i9, c9):
    c14 = `as.logical`(c9);
    if c14 then L119() else L17();
  L47(i78):
    i79 = `+`.1(i78, 1);
    c39 = `<`.1(l2, i79);
    if c39 then L212() else L57();
  L116():
    cl = ld cl;
    check L117() else D30();
  L180():
    p23 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p24 = prom<V +>{
      ns2 = ld ns;
      ns3 = force? ns2;
      checkMissing(ns3);
      return ns3;
    };
    r121 = dyn get[, envir, inherits](p23, p24, FALSE);
    check L181() else D63();
  L237():
    popenv;
    return r162;
  D30():
    deopt 118 [i2, c8, cl];
  D63():
    deopt 246 [i55, r121];
  L17():
    sym10 = ldf substitute;
    base10 = ldf substitute in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L122() else L123();
  L57():
    x17 = `[[`(s2, i79, NULL, TRUE);
    st i = x17;
    i82 = ld i;
    check L213() else D80();
  L117():
    cl1 = force? cl;
    checkMissing(cl1);
    r63 = `==`(cl1, "");
    c11 = `as.logical`(r63);
    c12 = `||`(c8, c11);
    goto L16(i2, c12);
  L119():
    goto L15(i9);
  L181():
    st f = r121;
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L182() else L183();
  L212():
    goto L58();
  D80():
    deopt 310 [i79, 1, i82];
  L19(i18, r66):
    st Call = r66;
    eval_parent = ldf `eval.parent`;
    check L124() else D31();
  L38(i64, r123):
    st objs = r123;
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L190() else L191();
  L122():
    substitute1 = ldf substitute in base;
    r67 = dyn substitute1(<lang getS3method(gen, cl, TRUE)>, <lang list(gen=gen, cl=cl)>);
    goto L19(i9, r67);
  L123():
    r65 = dyn base10(<lang getS3method(gen, cl, TRUE)>, <lang list(gen=gen, cl=cl)>);
    goto L19(i9, r65);
  L182():
    objs2 = ld objs;
    check L184() else D64();
  L183():
    r122 = dyn base19(<sym objs>, <lang list(f)>);
    goto L38(i55, r122);
  L213():
    i83 = force? i82;
    checkMissing(i83);
    r145 = `-`(i83, 1);
    r146 = `:`(1, r145);
    s3 = toForSeq(r146);
    l3 = length(s3);
    i84 = 0;
    goto L48(i79, i84);
  D31():
    deopt 132 [i18];
  D64():
    deopt 250 [i55, objs2];
  L40(i70, r129):
    st where = r129;
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L196() else L197();
  L48(i85, i86):
    i87 = `+`.1(i86, 1);
    c40 = `<`.1(l3, i87);
    if c40 then L214() else L56();
  L124():
    p10 = prom<V +>{
      Call = ld Call;
      Call1 = force? Call;
      checkMissing(Call1);
      return Call1;
    };
    r69 = dyn eval_parent(p10);
    check L125() else D32();
  L184():
    objs3 = force? objs2;
    checkMissing(objs3);
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L185() else L186();
  L190():
    where2 = ld where;
    check L192() else D68();
  L191():
    r128 = dyn base21(<sym where>, <lang paste0("namespace:", i)>);
    goto L40(i64, r128);
  D32():
    deopt 134 [i18, r69];
  D68():
    deopt 263 [i64, where2];
  L39(i67, r125):
    c35 = ldf c in base;
    r127 = dyn c35(objs3, r125);
    check L189() else D67();
  L41(i75, r134):
    st visible = r134;
    goto L42(i75);
  L54(i130):
    goto L47(i130);
  L56():
    x18 = `[[`(s3, i87, NULL, TRUE);
    st j = x18;
    sym25 = ldf identical;
    base25 = ldf identical in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L215() else L216();
  L125():
    st f = r69;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L126() else L127();
  L185():
    f8 = ld f;
    check L187() else D65();
  L186():
    r124 = dyn base20(<sym f>);
    goto L39(i55, r124);
  L192():
    where3 = force? where2;
    checkMissing(where3);
    paste4 = ldf paste0;
    check L193() else D69();
  L196():
    visible2 = ld visible;
    check L198() else D72();
  L197():
    r133 = dyn base22(<sym visible>, FALSE);
    goto L41(i70, r133);
  L214():
    goto L54(i85);
  D65():
    deopt 254 [i55, f8];
  D67():
    deopt 259 [i67, r127];
  D69():
    deopt 266 [i64];
  D72():
    deopt 275 [i70, visible2];
  L20(i21, r71):
    r72 = `!`(r71);
    c16 = `as.logical`(r72);
    if c16 then L129() else L21(i21, c16);
  L49(i96, i97, r148):
    c43 = `as.logical`(r148);
    if c43 then L228() else L52();
  L126():
    f = ld f;
    check L128() else D33();
  L127():
    r70 = dyn base11(<sym f>);
    goto L20(i18, r70);
  L187():
    f9 = force? f8;
    checkMissing(f9);
    list2 = ldf list in base;
    r126 = dyn list2(f9);
    check L188() else D66();
  L189():
    goto L38(i67, r127);
  L193():
    p25 = prom<V +>{
      i71 = ld i;
      i72 = force? i71;
      checkMissing(i72);
      return i72;
    };
    r131 = dyn paste4("namespace:", p25);
    check L194() else D70();
  L198():
    visible3 = force? visible2;
    checkMissing(visible3);
    c37 = ldf c in base;
    r135 = dyn c37(visible3, FALSE);
    check L199() else D73();
  L215():
    objs6 = ld objs;
    check L217() else D81();
  L216():
    r147 = dyn base25[, , `ignore.environment`](<lang `[[`(objs, i)>, <lang `[[`(objs, j)>, TRUE);
    goto L49(i85, i87, r147);
  D33():
    deopt 137 [i18, f];
  D66():
    deopt 257 [i55, r126];
  D70():
    deopt 269 [i64, r131];
  D73():
    deopt 279 [i70, r135];
  D81():
    deopt 317 [i85, i87, objs6];
  L21(i23, c18):
    c26 = `as.logical`(c18);
    if c26 then L135() else L23();
  L52():
    goto L48(i96, i97);
  L128():
    f1 = force? f;
    checkMissing(f1);
    c15 = `==`(f1, NULL);
    goto L20(i18, c15);
  L129():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L130() else L131();
  L188():
    goto L39(i55, r126);
  L194():
    c36 = ldf c in base;
    r132 = dyn c36(where3, r131);
    check L195() else D71();
  L199():
    goto L41(i70, r135);
  L217():
    objs7 = force? objs6;
    checkMissing(objs7);
    c41 = `is.object`(objs7);
    if c41 then L218() else L219(i85, i87, objs7);
  L228():
    l4 = ld dups;
    c44 = `is.object`(l4);
    if c44 then L229() else L230(i96, i97, TRUE, l4);
  D71():
    deopt 271 [i64, r132];
  L22(i26, c21, r74):
    r77 = `!`(r74);
    c23 = `as.logical`(r77);
    c24 = `&&`(c21, c23);
    goto L21(i26, c24);
  L23():
    goto L33(i23);
  L33(i51):
    goto L15(i51);
  L50(i104, i105, dx7):
    objs10 = ld objs;
    check L222() else D83();
  L53(i126, i127, dx11):
    st dups = dx11;
    goto L54(i126);
  L130():
    environment = ldf environment;
    check L132() else D34();
  L131():
    r73 = dyn base12(<lang environment(f)>);
    goto L22(i21, c16, r73);
  L135():
    topenv = ldf topenv;
    check L136() else D36();
  L195():
    goto L40(i64, r132);
  L218():
    dr6 = tryDispatchBuiltin.1("[[", objs7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L220() else L219(i85, i87, dr6);
  L219(i100, i101, objs9):
    i106 = ld i;
    check L221() else D82();
  L229():
    dr10 = tryDispatchBuiltin.0("[<-", l4, TRUE);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L231() else L230(i96, i97, TRUE, dr10);
  L230(i122, i123, r153, l6):
    i128 = ld i;
    check L232() else D86();
  D34():
    deopt 143 [i21, c16];
  D36():
    deopt 150 [i23];
  D82():
    deopt 319 [i100, i101, objs9, i106];
  D83():
    deopt 322 [i104, i105, objs10];
  D86():
    deopt 339 [i122, i123, r153, l6, TRUE, i128];
  L132():
    p11 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r76 = dyn environment(p11);
    check L133() else D35();
  L136():
    p13 = prom<V +>{
      environment1 = ldf environment;
      p12 = prom<V +>{
        f4 = ld f;
        f5 = force? f4;
        checkMissing(f5);
        return f5;
      };
      r79 = dyn environment1(p12);
      return r79;
    };
    p14 = prom<V +>{
      sym13 = ldf baseenv;
      base13 = ldf baseenv in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r82):
      return r82;
    L1():
      baseenv = ldf baseenv in base;
      r83 = dyn baseenv();
      goto L0(r83);
    L2():
      r81 = dyn base13();
      goto L0(r81);
    };
    r85 = dyn topenv(p13, p14);
    check L137() else D37();
  L220():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L50(i85, i87, dx6);
  L221():
    i107 = force? i106;
    __3 = ldf `[[` in base;
    r149 = dyn __3(objs9, i107);
    goto L50(i100, i101, r149);
  L222():
    objs11 = force? objs10;
    checkMissing(objs11);
    c42 = `is.object`(objs11);
    if c42 then L223() else L224(i104, i105, objs11);
  L231():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L53(i96, i97, dx10);
  L232():
    i129 = force? i128;
    ___ = ldf `[<-` in base;
    r156 = dyn ___(l6, TRUE, i129);
    goto L53(i122, i123, r156);
  D35():
    deopt 145 [i21, c16, r76];
  D37():
    deopt 153 [i23, r85];
  L51(i114, i115, dx9):
    identical = ldf identical in base;
    r151 = dyn identical(dx7, dx9, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE);
    check L227() else D85();
  L133():
    c22 = `==`(r76, NULL);
    goto L22(i21, c16, c22);
  L137():
    st ev = r85;
    isNamespace = ldf isNamespace;
    check L138() else D38();
  L223():
    dr8 = tryDispatchBuiltin.1("[[", objs11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L225() else L224(i104, i105, dr8);
  L224(i110, i111, objs13):
    j = ld j;
    check L226() else D84();
  D38():
    deopt 156 [i23];
  D84():
    deopt 324 [i110, i111, objs13, j];
  D85():
    deopt 335 [i114, i115, r151];
  L138():
    p15 = prom<V +>{
      ev = ld ev;
      ev1 = force? ev;
      checkMissing(ev1);
      return ev1;
    };
    r87 = dyn isNamespace(p15);
    check L139() else D39();
  L225():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L51(i104, i105, dx8);
  L226():
    j1 = force? j;
    __4 = ldf `[[` in base;
    r150 = dyn __4(objs13, j1);
    goto L51(i110, i111, r150);
  L227():
    goto L49(i114, i115, r151);
  D39():
    deopt 158 [i23, r87];
  L139():
    c27 = `as.logical`(r87);
    if c27 then L140() else L24();
  L24():
    goto L25(i23, NULL);
  L25(i32, r90):
    st nmev = r90;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L144() else L145();
  L140():
    getNamespaceName = ldf getNamespaceName;
    check L141() else D40();
  D40():
    deopt 160 [i23];
  L26(i35, r92):
    st objs = r92;
    paste2 = ldf paste;
    check L152() else D46();
  L141():
    p16 = prom<V +>{
      ev2 = ld ev;
      ev3 = force? ev2;
      checkMissing(ev3);
      return ev3;
    };
    r89 = dyn getNamespaceName(p16);
    check L142() else D41();
  L144():
    objs = ld objs;
    check L146() else D42();
  L145():
    r91 = dyn base14(<sym objs>, <lang list(f)>);
    goto L26(i32, r91);
  D41():
    deopt 162 [i23, r89];
  D42():
    deopt 168 [i32, objs];
  D46():
    deopt 180 [i35];
  L142():
    goto L25(i23, r89);
  L146():
    objs1 = force? objs;
    checkMissing(objs1);
    sym15 = ldf list;
    base15 = ldf list in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L147() else L148();
  L152():
    p17 = prom<V +>{
      gen2 = ld gen;
      gen3 = force? gen2;
      checkMissing(gen3);
      return gen3;
    };
    r98 = dyn paste2("registered S3 method for", p17);
    check L153() else D47();
  D47():
    deopt 183 [i35, r98];
  L27(i38, r94):
    c28 = ldf c in base;
    r96 = dyn c28(objs1, r94);
    check L151() else D45();
  L147():
    f6 = ld f;
    check L149() else D43();
  L148():
    r93 = dyn base15(<sym f>);
    goto L27(i32, r93);
  L153():
    st msg = r98;
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L154() else L155();
  D43():
    deopt 172 [i32, f6];
  D45():
    deopt 177 [i38, r96];
  L28(i41, r100):
    r101 = `!`(r100);
    c30 = `as.logical`(r101);
    if c30 then L157() else L29();
  L149():
    f7 = force? f6;
    checkMissing(f7);
    list1 = ldf list in base;
    r95 = dyn list1(f7);
    check L150() else D44();
  L151():
    goto L26(i38, r96);
  L154():
    nmev = ld nmev;
    check L156() else D48();
  L155():
    r99 = dyn base16(<sym nmev>);
    goto L28(i35, r99);
  D44():
    deopt 175 [i32, r95];
  D48():
    deopt 186 [i35, nmev];
  L29():
    goto L30(i41);
  L30(i44):
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L161() else L162();
  L150():
    goto L27(i32, r95);
  L156():
    nmev1 = force? nmev;
    checkMissing(nmev1);
    c29 = `==`(nmev1, NULL);
    goto L28(i35, c29);
  L157():
    paste3 = ldf paste;
    check L158() else D49();
  D49():
    deopt 191 [i41];
  L31(i47, r107):
    st where = r107;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L166() else L167();
  L158():
    p18 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    p19 = prom<V +>{
      nmev2 = ld nmev;
      nmev3 = force? nmev2;
      checkMissing(nmev3);
      return nmev3;
    };
    r104 = dyn paste3(p18, "from namespace", p19);
    check L159() else D50();
  L161():
    where = ld where;
    check L163() else D51();
  L162():
    r106 = dyn base17(<sym where>, <sym msg>);
    goto L31(i44, r106);
  D50():
    deopt 195 [i41, r104];
  D51():
    deopt 201 [i44, where];
  L32(i50, r110):
    st visible = r110;
    goto L33(i50);
  L159():
    st msg = r104;
    goto L30(i41);
  L163():
    where1 = force? where;
    checkMissing(where1);
    msg2 = ld msg;
    check L164() else D52();
  L166():
    visible = ld visible;
    check L168() else D54();
  L167():
    r109 = dyn base18(<sym visible>, FALSE);
    goto L32(i47, r109);
  D52():
    deopt 203 [i44, msg2];
  D54():
    deopt 210 [i47, visible];
  L164():
    msg3 = force? msg2;
    checkMissing(msg3);
    c31 = ldf c in base;
    r108 = dyn c31(where1, msg3);
    check L165() else D53();
  L168():
    visible1 = force? visible;
    checkMissing(visible1);
    c32 = ldf c in base;
    r111 = dyn c32(visible1, FALSE);
    check L169() else D55();
  D53():
    deopt 206 [i44, r108];
  D55():
    deopt 214 [i47, r111];
  L165():
    goto L31(i44, r108);
  L169():
    goto L32(i47, r111);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return TRUE;
  }
}
fun inner3752282704(pos, x) {
  (reg pos:*, reg x:*) -+> V { var pos:*, var x:*, reg get:cls, reg x1:*, reg x2:V, reg p:p(V +), reg pos1:*, reg pos2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st pos = pos;
    st x = x;
    get = ldf get;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      return pos2;
    };
    r2 = dyn get[, pos](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}