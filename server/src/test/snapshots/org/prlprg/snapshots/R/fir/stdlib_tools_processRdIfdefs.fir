fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner640418522;
    st processRdIfdefs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner640418522(blocks, defines) {
  (reg blocks:*, reg defines:*) -+> V { var blocks:*, var defines:*, reg r:cls, reg recurse:cls, reg blocks1:*, reg blocks2:V, reg p:p(V +), reg r2:V |
    mkenv;
    st blocks = blocks;
    st defines = defines;
    r = clos inner1468096329;
    st recurse = r;
    recurse = ldf recurse;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      blocks1 = ld blocks;
      blocks2 = force? blocks1;
      checkMissing(blocks2);
      return blocks2;
    };
    r2 = dyn recurse(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner1468096329(block) {
  (reg block:*) -+> V { var block:*, reg getDynamicFlags:cls, reg block1:*, reg block2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg r5:V, reg c1:L, reg block3:*, reg block4:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg block5:*, reg block6:V, reg attr:cls, reg r12:V, reg c2:V, reg r13:V, reg c3:L, reg _in_:cls, reg tag:*, reg tag1:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg c4:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg c5:L, reg block7:*, reg block8:V, reg c6:L, reg block10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r20:V, reg c7:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r21:V, reg psub:cls, reg target:*, reg target1:V, reg p3:p(V +), reg r23:V, reg _in_1:cls, reg target2:*, reg target3:V, reg p4:p(V +), reg defines:*, reg defines1:V, reg p5:p(V +), reg r26:V, reg tag2:*, reg tag3:V, reg r27:V, reg r28:V, reg c8:L, reg getDynamicFlags1:cls, reg block11:*, reg block12:V, reg c9:L, reg block14:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r29:V, reg p6:p(V +), reg r31:V, reg tagged:cls, reg block15:*, reg block16:V, reg c10:L, reg block18:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r32:V, reg p7:p(V +), reg r34:V, reg setDynamicFlags:cls, reg block19:*, reg block20:V, reg p8:p(V +), reg flag:*, reg flag1:V, reg p9:p(V +), reg r37:V, reg r38:V, reg tagged1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg tagged2:cls, reg paste:cls, reg tag4:*, reg tag5:V, reg p10:p(V +), reg target4:*, reg target5:V, reg p11:p(V +), reg r43:V, reg p12:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg block21:*, reg block22:V, reg attr1:cls, reg r47:V, reg p13:p(V +), reg r49:V, reg tagged3:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg block23:*, reg block24:V, reg attr2:cls, reg r52:V, reg p14:p(V +), reg r54:V, reg list:cls, reg r55:V, reg p15:p(V +), reg r57:V, reg r58:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r60:V, reg r61:V, reg block25:*, reg block26:V, reg is_list:cls, reg r62:V, reg c11:L, reg getDynamicFlags2:cls, reg block27:*, reg block28:V, reg p16:p(V +), reg r64:V, reg l:*, reg c12:L, reg r66:L, reg l2:*, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg ___:cls, reg r69:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r70:V, reg r71:V, reg block29:*, reg block30:V, reg attr3:cls, reg r72:V, reg i:*, reg i1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r73:V, reg i4:V, reg r74:V, reg block31:*, reg block32:V, reg length:cls, reg r75:V, reg r76:V, reg c13:L, reg recurse:cls, reg block33:*, reg block34:V, reg c14:L, reg block36:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg i5:*, reg i6:V, reg __5:cls, reg r77:V, reg p17:p(V +), reg r79:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r80:V, reg r81:V, reg newval:*, reg newval1:V, reg attr4:cls, reg r82:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r83:V, reg r84:V, reg newtag:*, reg newtag1:V, reg c15:V, reg r85:V, reg c16:L, reg c18:V, reg newtag2:*, reg newtag3:V, reg r86:V, reg c19:L, reg c20:V, reg c22:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r87:V, reg r88:V, reg block37:*, reg block38:V, reg r89:I, reg all:*, reg all1:V, reg c23:L, reg all3:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg all4:*, reg all5:V, reg i7:*, reg i8:V, reg r90:V, reg __6:cls, reg r91:V, reg all6:*, reg all7:V, reg c24:L, reg all9:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg all10:*, reg all11:V, reg i9:*, reg i10:V, reg r92:V, reg __7:cls, reg r93:V, reg tagged4:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r94:V, reg r95:V, reg block39:*, reg block40:V, reg c25:L, reg block42:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg before:*, reg before1:V, reg __8:cls, reg r96:V, reg newval2:*, reg newval3:V, reg block43:*, reg block44:V, reg c26:L, reg block46:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg after:*, reg after1:V, reg __9:cls, reg r97:V, reg c27:cls, reg r98:V, reg p18:p(V +), reg tag6:*, reg tag7:V, reg p19:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r101:V, reg r102:V, reg block47:*, reg block48:V, reg attr5:cls, reg r103:V, reg p20:p(V +), reg r105:V, reg flags:*, reg flags1:V, reg getDynamicFlags3:cls, reg newval4:*, reg newval5:V, reg p21:p(V +), reg r108:V, reg r109:V, reg newval6:*, reg newval7:V, reg l3:*, reg c28:L, reg newval9:V, reg l5:*, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg i11:*, reg i12:V, reg ____:cls, reg r110:V, reg i13:*, reg i14:V, reg r111:V, reg opts:*, reg opts1:V, reg l6:*, reg attr__:cls, reg r112:V, reg setDynamicFlags1:cls, reg block49:*, reg block50:V, reg p22:p(V +), reg flags2:*, reg flags3:V, reg p23:p(V +), reg r115:V, reg block51:*, reg block52:V |
    mkenv;
    st block = block;
    getDynamicFlags = ldf getDynamicFlags;
    check L29() else D0();
  D0():
    deopt 1 [];
  L29():
    p = prom<V +>{
      block1 = ld block;
      block2 = force? block1;
      checkMissing(block2);
      return block2;
    };
    r1 = dyn getDynamicFlags(p);
    check L30() else D1();
  D1():
    deopt 3 [r1];
  L30():
    c = `is.object`(r1);
    if c then L31() else L32(r1);
  L0(dx1):
    r5 = `!`(dx1);
    c1 = `as.logical`(r5);
    if c1 then L34() else L1();
  L31():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(r3):
    __ = ldf `[` in base;
    r4 = dyn __(r3, "#ifdef");
    goto L0(r4);
  L1():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L34():
    block3 = ld block;
    check L35() else D2();
  D2():
    deopt 8 [block3];
  L3(r9):
    r13 = `!`(r9);
    c3 = `as.logical`(r13);
    if c3 then L44() else L5();
  L35():
    block4 = force? block3;
    checkMissing(block4);
    popenv;
    return block4;
  L38():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L39():
    r8 = dyn base(<lang `<-`(tag, attr(block, "Rd_tag"))>);
    goto L3(r8);
  L4(r11):
    st tag = r11;
    c2 = `==`(r11, NULL);
    goto L3(c2);
  L5():
    goto L12();
  L12():
    sym6 = ldf `is.list`;
    base6 = ldf `is.list` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L40():
    block5 = ld block;
    check L42() else D3();
  L41():
    r10 = dyn base1(<sym block>, "Rd_tag");
    goto L4(r10);
  L44():
    _in_ = ldf `%in%`;
    check L45() else D5();
  D3():
    deopt 16 [block5];
  D5():
    deopt 25 [];
  L13(r61):
    c11 = `as.logical`(r61);
    if c11 then L76() else L14();
  L42():
    block6 = force? block5;
    checkMissing(block6);
    attr = ldf attr in base;
    r12 = dyn attr(block6, "Rd_tag");
    check L43() else D4();
  L45():
    p1 = prom<V +>{
      tag = ld tag;
      tag1 = force? tag;
      checkMissing(tag1);
      return tag1;
    };
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      c4 = ldf c in base;
      r17 = dyn c4("#ifdef", "#ifndef");
      goto L0(r17);
    L2():
      r15 = dyn base2("#ifdef", "#ifndef");
      goto L0(r15);
    };
    r19 = dyn _in_(p1, p2);
    check L46() else D6();
  L72():
    block25 = ld block;
    check L74() else D21();
  L73():
    r60 = dyn base6(<sym block>);
    goto L13(r60);
  D4():
    deopt 20 [r12];
  D6():
    deopt 28 [r19];
  D21():
    deopt 82 [block25];
  L14():
    block51 = ld block;
    check L139() else D56();
  L43():
    goto L4(r12);
  L46():
    c5 = `as.logical`(r19);
    if c5 then L47() else L6();
  L74():
    block26 = force? block25;
    checkMissing(block26);
    is_list = ldf `is.list` in base;
    r62 = dyn is_list(block26);
    check L75() else D22();
  L76():
    st i = 1;
    getDynamicFlags2 = ldf getDynamicFlags;
    check L77() else D23();
  D22():
    deopt 85 [r62];
  D23():
    deopt 90 [];
  D56():
    deopt 203 [block51];
  L6():
    goto L11(NULL);
  L11(r58):
    goto L12();
  L47():
    block7 = ld block;
    check L48() else D7();
  L75():
    goto L13(r62);
  L77():
    p16 = prom<V +>{
      block27 = ld block;
      block28 = force? block27;
      checkMissing(block28);
      return block28;
    };
    r64 = dyn getDynamicFlags2(p16);
    check L78() else D24();
  L139():
    block52 = force? block51;
    checkMissing(block52);
    popenv;
    return block52;
  D7():
    deopt 29 [block7];
  D24():
    deopt 92 [r64];
  L48():
    block8 = force? block7;
    checkMissing(block8);
    c6 = `is.object`(block8);
    if c6 then L49() else L50(block8);
  L78():
    st flags = r64;
    l = ld flags;
    c12 = `is.object`(l);
    if c12 then L79() else L80(FALSE, l);
  L7(dx3):
    c7 = `is.object`(dx3);
    if c7 then L52() else L53(dx3);
  L15(dx13):
    st flags = dx13;
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L82() else L83();
  L49():
    dr2 = tryDispatchBuiltin.1("[[", block8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(dr2);
  L50(block10):
    __1 = ldf `[[` in base;
    r20 = dyn __1(block10, 1);
    goto L7(r20);
  L79():
    dr10 = tryDispatchBuiltin.0("[<-", l, FALSE);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L81() else L80(FALSE, dr10);
  L80(r66, l2):
    ___ = ldf `[<-` in base;
    r69 = dyn ___(l2, FALSE, "#ifdef");
    goto L15(r69);
  L8(dx7):
    st target = dx7;
    psub = ldf psub;
    check L55() else D8();
  L16(r71):
    st opts = r71;
    goto L28();
  L51():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L52():
    dr4 = tryDispatchBuiltin.1("[[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L54() else L53(dr4);
  L53(dx5):
    __2 = ldf `[[` in base;
    r21 = dyn __2(dx5, 1);
    goto L8(r21);
  L81():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L15(dx12);
  L82():
    block29 = ld block;
    check L84() else D25();
  L83():
    r70 = dyn base7(<sym block>, "Rd_option");
    goto L16(r70);
  D8():
    deopt 39 [];
  D25():
    deopt 103 [block29];
  L28():
    i = ld i;
    check L86() else D27();
  L54():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx6);
  L55():
    p3 = prom<V +>{
      target = ld target;
      target1 = force? target;
      checkMissing(target1);
      return target1;
    };
    r23 = dyn psub("[[:blank:][:cntrl:]]*", "", p3);
    check L56() else D9();
  L84():
    block30 = force? block29;
    checkMissing(block30);
    attr3 = ldf attr in base;
    r72 = dyn attr3(block30, "Rd_option");
    check L85() else D26();
  D9():
    deopt 43 [r23];
  D26():
    deopt 107 [r72];
  D27():
    deopt 109 [i];
  L56():
    st target = r23;
    _in_1 = ldf `%in%`;
    check L57() else D10();
  L85():
    goto L16(r72);
  L86():
    i1 = force? i;
    checkMissing(i1);
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L87() else L88();
  D10():
    deopt 46 [];
  L17(i4, r74):
    r76 = `<=`(i4, r74);
    c13 = `as.logical`(r76);
    if c13 then L91() else L18();
  L57():
    p4 = prom<V +>{
      target2 = ld target;
      target3 = force? target2;
      checkMissing(target3);
      return target3;
    };
    p5 = prom<V +>{
      defines = ld defines;
      defines1 = force? defines;
      checkMissing(defines1);
      return defines1;
    };
    r26 = dyn _in_1(p4, p5);
    check L58() else D11();
  L87():
    block31 = ld block;
    check L89() else D28();
  L88():
    r73 = dyn base8(<sym block>);
    goto L17(i1, r73);
  D11():
    deopt 49 [r26];
  D28():
    deopt 112 [i1, block31];
  L18():
    opts = ld opts;
    check L133() else D51();
  L58():
    tag2 = ld tag;
    check L59() else D12();
  L89():
    block32 = force? block31;
    checkMissing(block32);
    length = ldf length in base;
    r75 = dyn length(block32);
    check L90() else D29();
  L91():
    recurse = ldf recurse;
    check L92() else D30();
  D12():
    deopt 49 [r26, tag2];
  D29():
    deopt 115 [i1, r75];
  D30():
    deopt 118 [];
  D51():
    deopt 190 [opts];
  L59():
    tag3 = force? tag2;
    checkMissing(tag3);
    r27 = `==`(tag3, "#ifdef");
    r28 = `==`(r26, r27);
    c8 = `as.logical`(r28);
    if c8 then L60() else L9();
  L90():
    goto L17(i1, r75);
  L92():
    p17 = prom<V +>{
      block33 = ld block;
      block34 = force? block33;
      checkMissing(block34);
      c14 = `is.object`(block34);
      if c14 then L1() else L2(block34);
    L0(dx15):
      return dx15;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", block34);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(block36):
      i5 = ld i;
      i6 = force? i5;
      __5 = ldf `[[` in base;
      r77 = dyn __5(block36, i6);
      goto L0(r77);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    r79 = dyn recurse(p17);
    check L93() else D31();
  L133():
    opts1 = force? opts;
    checkMissing(opts1);
    l6 = ld block;
    attr__ = ldf `attr<-`;
    check L134() else D52();
  D31():
    deopt 120 [r79];
  D52():
    deopt 193 [opts1, l6, opts1];
  L9():
    tagged1 = ldf tagged;
    check L68() else D19();
  L10(r38):
    st block = r38;
    goto L11(r38);
  L60():
    getDynamicFlags1 = ldf getDynamicFlags;
    check L61() else D13();
  L93():
    st newval = r79;
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L94() else L95();
  L134():
    r112 = dyn attr__(l6, NULL, "Rd_option", opts1);
    check L135() else D53();
  D13():
    deopt 55 [];
  D19():
    deopt 71 [];
  D53():
    deopt 196 [opts1, r112];
  L19(r81):
    st newtag = r81;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L98() else L99();
  L61():
    p6 = prom<V +>{
      block11 = ld block;
      block12 = force? block11;
      checkMissing(block12);
      c9 = `is.object`(block12);
      if c9 then L1() else L2(block12);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", block12);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(block14):
      __3 = ldf `[[` in base;
      r29 = dyn __3(block14, 2);
      goto L0(r29);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    r31 = dyn getDynamicFlags1(p6);
    check L62() else D14();
  L68():
    p15 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      tagged2 = ldf tagged;
      p12 = prom<V +>{
        paste = ldf paste;
        p10 = prom<V +>{
          tag4 = ld tag;
          tag5 = force? tag4;
          checkMissing(tag5);
          return tag5;
        };
        p11 = prom<V +>{
          target4 = ld target;
          target5 = force? target4;
          checkMissing(target5);
          return target5;
        };
        r43 = dyn paste(p10, p11, "not active");
        return r43;
      };
      p13 = prom<V +>{
        sym4 = ldf attr;
        base4 = ldf attr in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r46):
        return r46;
      L1():
        block21 = ld block;
        block22 = force? block21;
        checkMissing(block22);
        attr1 = ldf attr in base;
        r47 = dyn attr1(block22, "srcref");
        goto L0(r47);
      L2():
        r45 = dyn base4(<sym block>, "srcref");
        goto L0(r45);
      };
      r49 = dyn tagged2(p12, "COMMENT", p13);
      tagged3 = ldf tagged;
      p14 = prom<V +>{
        sym5 = ldf attr;
        base5 = ldf attr in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r51):
        return r51;
      L1():
        block23 = ld block;
        block24 = force? block23;
        checkMissing(block24);
        attr2 = ldf attr in base;
        r52 = dyn attr2(block24, "srcref");
        goto L0(r52);
      L2():
        r50 = dyn base5(<sym block>, "srcref");
        goto L0(r50);
      };
      r54 = dyn tagged3("\n", "TEXT", p14);
      list = ldf list in base;
      r55 = dyn list(r49, r54);
      goto L0(r55);
    L2():
      r39 = dyn base3(<lang tagged(paste(tag, target, "not active"), "COMMENT", attr(block, "srcref"))>, <lang tagged("\n", "TEXT", attr(block, "srcref"))>);
      goto L0(r39);
    };
    r57 = dyn tagged1(p15, "#expanded");
    check L69() else D20();
  L94():
    newval = ld newval;
    check L96() else D32();
  L95():
    r80 = dyn base9(<sym newval>, "Rd_tag");
    goto L19(r80);
  L135():
    st block = r112;
    setDynamicFlags1 = ldf setDynamicFlags;
    check L136() else D54();
  D14():
    deopt 57 [r31];
  D20():
    deopt 74 [r57];
  D32():
    deopt 124 [newval];
  D54():
    deopt 199 [];
  L20(r84):
    r85 = `!`(r84);
    c16 = `as.logical`(r85);
    if c16 then L101() else L21(c16);
  L62():
    st flag = r31;
    tagged = ldf tagged;
    check L63() else D15();
  L69():
    goto L10(r57);
  L96():
    newval1 = force? newval;
    checkMissing(newval1);
    attr4 = ldf attr in base;
    r82 = dyn attr4(newval1, "Rd_tag");
    check L97() else D33();
  L98():
    newtag = ld newtag;
    check L100() else D34();
  L99():
    r83 = dyn base10(<sym newtag>);
    goto L20(r83);
  L136():
    p22 = prom<V +>{
      block49 = ld block;
      block50 = force? block49;
      checkMissing(block50);
      return block50;
    };
    p23 = prom<V +>{
      flags2 = ld flags;
      flags3 = force? flags2;
      checkMissing(flags3);
      return flags3;
    };
    r115 = dyn setDynamicFlags1(p22, p23);
    check L137() else D55();
  D15():
    deopt 60 [];
  D33():
    deopt 128 [r82];
  D34():
    deopt 131 [newtag];
  D55():
    deopt 202 [r115];
  L21(c18):
    c22 = `as.logical`(c18);
    if c22 then L104() else L22();
  L63():
    p7 = prom<V +>{
      block15 = ld block;
      block16 = force? block15;
      checkMissing(block16);
      c10 = `is.object`(block16);
      if c10 then L1() else L2(block16);
    L0(dx11):
      return dx11;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", block16);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(block18):
      __4 = ldf `[[` in base;
      r32 = dyn __4(block18, 2);
      goto L0(r32);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx10);
    };
    r34 = dyn tagged(p7, "#expanded");
    check L64() else D16();
  L97():
    goto L19(r82);
  L100():
    newtag1 = force? newtag;
    checkMissing(newtag1);
    c15 = `==`(newtag1, NULL);
    goto L20(c15);
  L101():
    newtag2 = ld newtag;
    check L102() else D35();
  L137():
    popenv;
    return r115;
  D16():
    deopt 63 [r34];
  D35():
    deopt 135 [c16, newtag2];
  L22():
    flags = ld flags;
    check L123() else D45();
  L26():
    goto L28();
  L64():
    st block = r34;
    setDynamicFlags = ldf setDynamicFlags;
    check L65() else D17();
  L102():
    newtag3 = force? newtag2;
    checkMissing(newtag3);
    r86 = `==`(newtag3, "#expanded");
    c19 = `as.logical`(r86);
    c20 = `&&`(c16, c19);
    goto L21(c20);
  L104():
    sym11 = ldf seq_along;
    base11 = ldf seq_along in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L105() else L106();
  D17():
    deopt 66 [];
  D45():
    deopt 168 [flags];
  L23(r88):
    st all = r88;
    all = ld all;
    check L108() else D37();
  L65():
    p8 = prom<V +>{
      block19 = ld block;
      block20 = force? block19;
      checkMissing(block20);
      return block20;
    };
    p9 = prom<V +>{
      flag = ld flag;
      flag1 = force? flag;
      checkMissing(flag1);
      return flag1;
    };
    r37 = dyn setDynamicFlags(p8, p9);
    check L66() else D18();
  L105():
    block37 = ld block;
    check L107() else D36();
  L106():
    r87 = dyn base11(<sym block>);
    goto L23(r87);
  L123():
    flags1 = force? flags;
    checkMissing(flags1);
    getDynamicFlags3 = ldf getDynamicFlags;
    check L124() else D46();
  D18():
    deopt 69 [r37];
  D36():
    deopt 141 [block37];
  D37():
    deopt 145 [all];
  D46():
    deopt 170 [flags1];
  L66():
    goto L10(r37);
  L107():
    block38 = force? block37;
    checkMissing(block38);
    r89 = seq_along(block38);
    goto L23(r89);
  L108():
    all1 = force? all;
    checkMissing(all1);
    c23 = `is.object`(all1);
    if c23 then L109() else L110(all1);
  L124():
    p21 = prom<V +>{
      newval4 = ld newval;
      newval5 = force? newval4;
      checkMissing(newval5);
      return newval5;
    };
    r108 = dyn getDynamicFlags3(p21);
    check L125() else D47();
  D47():
    deopt 172 [flags1, r108];
  L24(dx17):
    st before = dx17;
    all6 = ld all;
    check L114() else D40();
  L109():
    dr14 = tryDispatchBuiltin.1("[", all1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L111() else L110(dr14);
  L110(all3):
    all4 = ld all;
    check L112() else D38();
  L125():
    r109 = `||`(flags1, r108);
    st flags = r109;
    newval6 = ld newval;
    check L126() else D48();
  D38():
    deopt 147 [all3, all4];
  D40():
    deopt 153 [all6];
  D48():
    deopt 175 [newval6];
  L111():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L24(dx16);
  L112():
    all5 = force? all4;
    checkMissing(all5);
    i7 = ld i;
    check L113() else D39();
  L114():
    all7 = force? all6;
    checkMissing(all7);
    c24 = `is.object`(all7);
    if c24 then L115() else L116(all7);
  L126():
    newval7 = force? newval6;
    checkMissing(newval7);
    l3 = ld block;
    c28 = `is.object`(l3);
    if c28 then L127() else L128(newval7, l3);
  D39():
    deopt 148 [all3, all5, i7];
  L25(dx19):
    st after = dx19;
    tagged4 = ldf tagged;
    check L120() else D43();
  L27(dx25):
    st block = dx25;
    i13 = ld i;
    check L131() else D50();
  L113():
    i8 = force? i7;
    checkMissing(i8);
    r90 = `<`(all5, i8);
    __6 = ldf `[` in base;
    r91 = dyn __6(all3, r90);
    goto L24(r91);
  L115():
    dr16 = tryDispatchBuiltin.1("[", all7);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L117() else L116(dr16);
  L116(all9):
    all10 = ld all;
    check L118() else D41();
  L127():
    dr22 = tryDispatchBuiltin.0("[[<-", l3, newval7);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L129() else L128(newval7, dr22);
  L128(newval9, l5):
    i11 = ld i;
    check L130() else D49();
  D41():
    deopt 155 [all9, all10];
  D43():
    deopt 162 [];
  D49():
    deopt 178 [newval9, l5, newval7, i11];
  D50():
    deopt 182 [i13];
  L117():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L25(dx18);
  L118():
    all11 = force? all10;
    checkMissing(all11);
    i9 = ld i;
    check L119() else D42();
  L120():
    p18 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L3() else L4();
    L0(r95):
      return r95;
    L3():
      block39 = ld block;
      block40 = force? block39;
      checkMissing(block40);
      c25 = `is.object`(block40);
      if c25 then L5() else L6(block40);
    L4():
      r94 = dyn base12(<lang `[`(block, before)>, <sym newval>, <lang `[`(block, after)>);
      goto L0(r94);
    L1(dx21):
      newval2 = ld newval;
      newval3 = force? newval2;
      checkMissing(newval3);
      block43 = ld block;
      block44 = force? block43;
      checkMissing(block44);
      c26 = `is.object`(block44);
      if c26 then L8() else L9(block44);
    L5():
      dr18 = tryDispatchBuiltin.1("[", block40);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(dr18);
    L6(block42):
      before = ld before;
      before1 = force? before;
      __8 = ldf `[` in base;
      r96 = dyn __8(block42, before1);
      goto L1(r96);
    L2(dx23):
      c27 = ldf c in base;
      r98 = dyn c27(dx21, newval3, dx23);
      goto L0(r98);
    L7():
      dx20 = getTryDispatchBuiltinValue(dr18);
      goto L1(dx20);
    L8():
      dr20 = tryDispatchBuiltin.1("[", block44);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L10() else L9(dr20);
    L9(block46):
      after = ld after;
      after1 = force? after;
      __9 = ldf `[` in base;
      r97 = dyn __9(block46, after1);
      goto L2(r97);
    L10():
      dx22 = getTryDispatchBuiltinValue(dr20);
      goto L2(dx22);
    };
    p19 = prom<V +>{
      tag6 = ld tag;
      tag7 = force? tag6;
      checkMissing(tag7);
      return tag7;
    };
    p20 = prom<V +>{
      sym13 = ldf attr;
      base13 = ldf attr in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r102):
      return r102;
    L1():
      block47 = ld block;
      block48 = force? block47;
      checkMissing(block48);
      attr5 = ldf attr in base;
      r103 = dyn attr5(block48, "srcref");
      goto L0(r103);
    L2():
      r101 = dyn base13(<sym block>, "srcref");
      goto L0(r101);
    };
    r105 = dyn tagged4(p18, p19, p20);
    check L121() else D44();
  L129():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L27(dx24);
  L130():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r110 = dyn ____(l5, newval7, i12);
    goto L27(r110);
  L131():
    i14 = force? i13;
    checkMissing(i14);
    r111 = `+`(i14, 1);
    st i = r111;
    goto L26();
  D42():
    deopt 156 [all9, all11, i9];
  D44():
    deopt 166 [r105];
  L119():
    i10 = force? i9;
    checkMissing(i10);
    r92 = `>`(all11, i10);
    __7 = ldf `[` in base;
    r93 = dyn __7(all9, r92);
    goto L25(r93);
  L121():
    st block = r105;
    goto L26();
  }
}