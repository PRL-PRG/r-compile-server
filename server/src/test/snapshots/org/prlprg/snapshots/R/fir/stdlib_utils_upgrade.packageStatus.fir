fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3269654001;
    st `upgrade.packageStatus` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3269654001(object, ask, `...`) {
  (reg object:*, reg ask:*, reg ddd:dots) -+> V { var object:*, var ask:*, reg ask_isMissing:L, reg ask_orDefault:*, var `...`:dots?, reg which:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r1:V, reg r2:V, reg p:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg old:*, reg old1:V, reg length:cls, reg r7:V, reg r8:V, reg c2:L, reg cat:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg invisible:cls, reg r12:V, reg r15:cls, reg character:cls, reg r16:V, reg ask1:*, reg ask2:V, reg c3:L, reg old2:*, reg old3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg object5:*, reg object6:V, reg c5:L, reg i6:I, reg object8:V, reg dr4:V, reg dc2:L, reg dx6:V, reg i8:I, reg dx7:V, reg r17:V, reg c6:L, reg i10:I, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg i12:I, reg dx11:V, reg k:*, reg k1:V, reg __:cls, reg r18:V, reg paste:cls, reg pkg:*, reg pkg1:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg object9:*, reg object10:V, reg c7:L, reg object12:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r22:V, reg c8:L, reg dx15:V, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg k2:*, reg k3:V, reg __1:cls, reg r23:V, reg as_character:cls, reg r24:V, reg p2:p(V +), reg r26:V, reg _in_:cls, reg tmpstring:*, reg tmpstring1:V, reg p3:p(V +), reg haveasked:*, reg haveasked1:V, reg p4:p(V +), reg r29:V, reg c9:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg i19:I, reg r32:V, reg haveasked2:*, reg haveasked3:V, reg tmpstring2:*, reg tmpstring3:V, reg c10:cls, reg r33:V, reg cat1:cls, reg r34:V, reg cat2:cls, reg pkg2:*, reg pkg3:V, reg p5:p(V +), reg r36:V, reg askprint:cls, reg object13:*, reg object14:V, reg c11:L, reg object16:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg r37:V, reg c12:L, reg dx21:V, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg k4:*, reg k5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg dx26:V, reg k8:V, reg r39:V, reg c13:cls, reg r40:V, reg __2:cls, reg r41:V, reg p6:p(V +), reg r43:V, reg askprint1:cls, reg object17:*, reg object18:V, reg c14:L, reg object20:V, reg dr16:V, reg dc8:L, reg dx27:V, reg dx28:V, reg r44:V, reg c15:L, reg dx30:V, reg dr18:V, reg dc9:L, reg dx31:V, reg dx32:V, reg pkg4:*, reg pkg5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg dx35:V, reg pkg8:V, reg r46:V, reg c16:cls, reg r47:V, reg __3:cls, reg r48:V, reg p7:p(V +), reg r50:V, reg askYesNo:cls, reg r51:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg i22:I, reg r53:V, reg answer:*, reg answer1:V, reg is_na:cls, reg r54:V, reg c17:L, reg cat3:cls, reg r55:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg invisible1:cls, reg r58:V, reg isTRUE:cls, reg answer2:*, reg answer3:V, reg p8:p(V +), reg r62:V, reg c18:L, reg rbind:cls, reg update:*, reg update1:V, reg p9:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r64:V, reg r65:V, reg pkg9:*, reg pkg10:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r66:V, reg r67:V, reg object21:*, reg object22:V, reg c19:L, reg object24:V, reg dr20:V, reg dc10:L, reg dx36:V, reg dx37:V, reg r68:V, reg c20:L, reg dx39:V, reg dr22:V, reg dc11:L, reg dx40:V, reg dx41:V, reg k9:*, reg k10:V, reg __4:cls, reg r69:V, reg as_character1:cls, reg r70:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg r72:V, reg object25:*, reg object26:V, reg c21:L, reg object28:V, reg dr24:V, reg dc12:L, reg dx42:V, reg dx43:V, reg r73:V, reg c22:L, reg dx45:V, reg dr26:V, reg dc13:L, reg dx46:V, reg dx47:V, reg pkg11:*, reg pkg12:V, reg __5:cls, reg r74:V, reg as_character2:cls, reg r75:V, reg c23:cls, reg r76:V, reg p10:p(V +), reg r78:V, reg i32:I, reg object29:*, reg object30:V, reg c24:L, reg object32:V, reg dr28:V, reg dc14:L, reg dx48:V, reg dx49:V, reg r80:V, reg c25:L, reg dr30:V, reg dc15:L, reg dx52:V, reg dx53:V, reg __6:cls, reg r81:V, reg cbind:cls, reg pkgs:*, reg pkgs1:V, reg p11:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r83:V, reg r84:V, reg object33:*, reg object34:V, reg c26:L, reg object36:V, reg dr32:V, reg dc16:L, reg dx54:V, reg dx55:V, reg r85:V, reg c27:L, reg dr34:V, reg dc17:L, reg dx58:V, reg dx59:V, reg __7:cls, reg r86:V, reg as_character3:cls, reg r87:V, reg p12:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r89:V, reg r90:V, reg object37:*, reg object38:V, reg c28:L, reg object40:V, reg dr36:V, reg dc18:L, reg dx60:V, reg dx61:V, reg r91:V, reg c29:L, reg dx63:V, reg dr38:V, reg dc19:L, reg dx64:V, reg dx65:V, reg pkgs2:*, reg pkgs3:V, reg __8:cls, reg r92:V, reg as_character4:cls, reg r93:V, reg p13:p(V +), reg r95:V, reg update2:*, reg update3:V, reg c30:L, reg update5:V, reg dr40:V, reg dc20:L, reg dx66:V, reg dx67:V, reg old4:*, reg old5:V, reg __9:cls, reg r96:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r97:V, reg r98:V, reg update6:*, reg update7:V, reg length1:cls, reg r99:V, reg c31:L, reg unique:cls, reg update8:*, reg update9:V, reg c32:L, reg dr42:V, reg dc21:L, reg dx68:V, reg dx69:V, reg __10:cls, reg r100:V, reg p14:p(V +), reg r102:V, reg s1:V, reg l1:I, reg i34:I, reg i35:I, reg i36:I, reg c33:L, reg x1:V, reg update12:*, reg update13:V, reg c34:L, reg i40:I, reg dr44:V, reg dc22:L, reg dx70:V, reg i42:I, reg dx71:V, reg __11:cls, reg r103:V, reg repo:*, reg repo1:V, reg r104:V, reg install_packages:cls, reg update16:*, reg update17:V, reg c35:L, reg update19:V, reg dr46:V, reg dc23:L, reg dx72:V, reg dx73:V, reg ok:*, reg ok1:V, reg __12:cls, reg r105:V, reg p15:p(V +), reg update20:*, reg update21:V, reg c36:L, reg update23:V, reg dr48:V, reg dc24:L, reg dx74:V, reg dx75:V, reg ok2:*, reg ok3:V, reg __13:cls, reg r107:V, reg p16:p(V +), reg repo2:*, reg repo3:V, reg p17:p(V +), reg ddd1:dots?, reg r110:V |
    mkenv;
    st object = object;
    ask_isMissing = missing.0(ask);
    if ask_isMissing then L0(TRUE) else L0(ask);
  L0(ask_orDefault):
    st ask = ask_orDefault;
    st `...` = ddd;
    st update = NULL;
    which = ldf which;
    check L26() else D0();
  D0():
    deopt 4 [];
  L26():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L1() else L2(object2);
    L0(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r = `$`(object4, <sym inst>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L4(dx5):
      r2 = `==`(dx5, "upgrade");
      return r2;
    L5():
      dr2 = tryDispatchBuiltin.1("$", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      r1 = `$`(dx3, <sym Status>);
      goto L4(r1);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L4(dx4);
    };
    r4 = dyn which(p);
    check L27() else D1();
  D1():
    deopt 6 [r4];
  L27():
    st old = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L1(r6):
    r8 = `==`(r6, 0);
    c2 = `as.logical`(r8);
    if c2 then L32() else L2();
  L28():
    old = ld old;
    check L30() else D2();
  L29():
    r5 = dyn base(<sym old>);
    goto L1(r5);
  D2():
    deopt 10 [old];
  L2():
    r15 = clos inner2501545716;
    st askprint = r15;
    character = ldf character;
    check L40() else D7();
  L30():
    old1 = force? old;
    checkMissing(old1);
    length = ldf length in base;
    r7 = dyn length(old1);
    check L31() else D3();
  L32():
    cat = ldf cat;
    check L33() else D4();
  D3():
    deopt 13 [r7];
  D4():
    deopt 17 [];
  D7():
    deopt 31 [];
  L31():
    goto L1(r7);
  L33():
    r9 = dyn cat("Nothing to do!\n");
    check L34() else D5();
  L40():
    r16 = dyn character();
    check L41() else D8();
  D5():
    deopt 19 [r9];
  D8():
    deopt 32 [r16];
  L34():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L41():
    st haveasked = r16;
    ask1 = ld ask;
    check L42() else D9();
  D9():
    deopt 34 [ask1];
  L3(r11):
    popenv;
    return r11;
  L35():
    invisible = ldf invisible in base;
    r12 = dyn invisible();
    check L37() else D6();
  L36():
    r10 = dyn base1();
    goto L3(r10);
  L42():
    ask2 = force? ask1;
    checkMissing(ask2);
    c3 = `as.logical`(ask2);
    if c3 then L43() else L5();
  D6():
    deopt 23 [r12];
  L5():
    object29 = ld object;
    check L96() else D39();
  L18():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L111() else L112();
  L37():
    goto L3(r12);
  L43():
    old2 = ld old;
    check L44() else D10();
  D10():
    deopt 36 [old2];
  D39():
    deopt 124 [object29];
  L21(r98):
    c31 = `as.logical`(r98);
    if c31 then L115() else L22();
  L44():
    old3 = force? old2;
    checkMissing(old3);
    s = toForSeq(old3);
    l = length(s);
    i = 0;
    goto L6(i);
  L96():
    object30 = force? object29;
    checkMissing(object30);
    c24 = `is.object`(object30);
    if c24 then L98() else L99(object30);
  L111():
    update6 = ld update;
    check L113() else D44();
  L112():
    r97 = dyn base13(<sym update>);
    goto L21(r97);
  D44():
    deopt 151 [update6];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L45() else L17();
  L22():
    invisible.0();
    popenv;
    return NULL;
  L97(dx49):
    c25 = `is.object`(dx49);
    if c25 then L101() else L102();
  L98():
    dr28 = tryDispatchBuiltin.1("$", object30);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L100() else L99(dr28);
  L99(object32):
    r80 = `$`(object32, <sym inst>);
    goto L97(r80);
  L113():
    update7 = force? update6;
    checkMissing(update7);
    length1 = ldf length in base;
    r99 = dyn length1(update7);
    check L114() else D45();
  L115():
    unique = ldf unique;
    check L116() else D46();
  D45():
    deopt 154 [r99];
  D46():
    deopt 156 [];
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    object5 = ld object;
    check L46() else D11();
  L19(dx53):
    st pkgs = dx53;
    cbind = ldf cbind;
    check L104() else D40();
  L45():
    goto L18();
  L100():
    dx48 = getTryDispatchBuiltinValue(dr28);
    goto L97(dx48);
  L101():
    dr30 = tryDispatchBuiltin.1("[", dx49);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L103() else L102();
  L102():
    __6 = ldf `[` in base;
    r81 = dyn __6(dx49, <missing>, "Package");
    goto L19(r81);
  L114():
    goto L21(r99);
  L116():
    p14 = prom<V +>{
      update8 = ld update;
      update9 = force? update8;
      checkMissing(update9);
      c32 = `is.object`(update9);
      if c32 then L1() else L2();
    L0(dx69):
      return dx69;
    L1():
      dr42 = tryDispatchBuiltin.1("[", update9);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2();
    L2():
      __10 = ldf `[` in base;
      r100 = dyn __10(update9, <missing>, 3.0);
      goto L0(r100);
    L3():
      dx68 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx68);
    };
    r102 = dyn unique(p14);
    check L117() else D47();
  D11():
    deopt 38 [i2, object5];
  D40():
    deopt 133 [];
  D47():
    deopt 158 [r102];
  L46():
    object6 = force? object5;
    checkMissing(object6);
    c5 = `is.object`(object6);
    if c5 then L48() else L49(i2, object6);
  L103():
    dx52 = getTryDispatchBuiltinValue(dr30);
    goto L19(dx52);
  L104():
    p11 = prom<V +>{
      pkgs = ld pkgs;
      pkgs1 = force? pkgs;
      checkMissing(pkgs1);
      return pkgs1;
    };
    p12 = prom<V +>{
      sym11 = ldf `as.character`;
      base11 = ldf `as.character` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r84):
      return r84;
    L2():
      object33 = ld object;
      object34 = force? object33;
      checkMissing(object34);
      c26 = `is.object`(object34);
      if c26 then L5() else L6(object34);
    L3():
      r83 = dyn base11(<lang `[`(`$`(object, inst), , "LibPath")>);
      goto L0(r83);
    L4(dx55):
      c27 = `is.object`(dx55);
      if c27 then L8() else L9();
    L5():
      dr32 = tryDispatchBuiltin.1("$", object34);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L7() else L6(dr32);
    L6(object36):
      r85 = `$`(object36, <sym inst>);
      goto L4(r85);
    L1(dx59):
      as_character3 = ldf `as.character` in base;
      r87 = dyn as_character3(dx59);
      goto L0(r87);
    L7():
      dx54 = getTryDispatchBuiltinValue(dr32);
      goto L4(dx54);
    L8():
      dr34 = tryDispatchBuiltin.1("[", dx55);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L10() else L9();
    L9():
      __7 = ldf `[` in base;
      r86 = dyn __7(dx55, <missing>, "LibPath");
      goto L1(r86);
    L10():
      dx58 = getTryDispatchBuiltinValue(dr34);
      goto L1(dx58);
    };
    p13 = prom<V +>{
      sym12 = ldf `as.character`;
      base12 = ldf `as.character` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L2() else L3();
    L0(r90):
      return r90;
    L2():
      object37 = ld object;
      object38 = force? object37;
      checkMissing(object38);
      c28 = `is.object`(object38);
      if c28 then L5() else L6(object38);
    L3():
      r89 = dyn base12(<lang `[`(`$`(object, avail), pkgs, "Repository")>);
      goto L0(r89);
    L4(dx61):
      c29 = `is.object`(dx61);
      if c29 then L8() else L9(dx61);
    L5():
      dr36 = tryDispatchBuiltin.1("$", object38);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L7() else L6(dr36);
    L6(object40):
      r91 = `$`(object40, <sym avail>);
      goto L4(r91);
    L1(dx65):
      as_character4 = ldf `as.character` in base;
      r93 = dyn as_character4(dx65);
      goto L0(r93);
    L7():
      dx60 = getTryDispatchBuiltinValue(dr36);
      goto L4(dx60);
    L8():
      dr38 = tryDispatchBuiltin.1("[", dx61);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L10() else L9(dr38);
    L9(dx63):
      pkgs2 = ld pkgs;
      pkgs3 = force? pkgs2;
      __8 = ldf `[` in base;
      r92 = dyn __8(dx63, pkgs3, "Repository");
      goto L1(r92);
    L10():
      dx64 = getTryDispatchBuiltinValue(dr38);
      goto L1(dx64);
    };
    r95 = dyn cbind(p11, p12, p13);
    check L105() else D41();
  L117():
    s1 = toForSeq(r102);
    l1 = length(s1);
    i34 = 0;
    goto L23(i34);
  D41():
    deopt 137 [r95];
  L23(i35):
    i36 = `+`.1(i35, 1);
    c33 = `<`.1(l1, i36);
    if c33 then L118() else L25();
  L47(i8, dx7):
    c6 = `is.object`(dx7);
    if c6 then L51() else L52(i8, dx7);
  L48():
    dr4 = tryDispatchBuiltin.1("$", object6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L50() else L49(i2, dr4);
  L49(i6, object8):
    r17 = `$`(object8, <sym inst>);
    goto L47(i6, r17);
  L105():
    st update = r95;
    update2 = ld update;
    check L106() else D42();
  D42():
    deopt 139 [update2];
  L7(i12, dx11):
    st pkg = dx11;
    paste = ldf paste;
    check L55() else D13();
  L25():
    x1 = `[[`(s1, i36, NULL, TRUE);
    st repo = x1;
    update12 = ld update;
    check L119() else D48();
  L50():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L47(i2, dx6);
  L51():
    dr6 = tryDispatchBuiltin.1("[", dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L53() else L52(i8, dr6);
  L52(i10, dx9):
    k = ld k;
    check L54() else D12();
  L106():
    update3 = force? update2;
    checkMissing(update3);
    c30 = `is.object`(update3);
    if c30 then L107() else L108(update3);
  L118():
    invisible.0();
    popenv;
    return i36;
  D12():
    deopt 41 [i10, dx9, k];
  D13():
    deopt 47 [i12];
  D48():
    deopt 159 [i36, update12];
  L20(dx67):
    st update = dx67;
    goto L18();
  L53():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L7(i8, dx10);
  L54():
    k1 = force? k;
    __ = ldf `[` in base;
    r18 = dyn __(dx9, k1, "Package");
    goto L7(i10, r18);
  L55():
    p1 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    p2 = prom<V +>{
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r21):
      return r21;
    L2():
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c7 = `is.object`(object10);
      if c7 then L5() else L6(object10);
    L3():
      r20 = dyn base2(<lang `[`(`$`(object, inst), k, "LibPath")>);
      goto L0(r20);
    L4(dx13):
      c8 = `is.object`(dx13);
      if c8 then L8() else L9(dx13);
    L5():
      dr8 = tryDispatchBuiltin.1("$", object10);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dr8);
    L6(object12):
      r22 = `$`(object12, <sym inst>);
      goto L4(r22);
    L1(dx17):
      as_character = ldf `as.character` in base;
      r24 = dyn as_character(dx17);
      goto L0(r24);
    L7():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L4(dx12);
    L8():
      dr10 = tryDispatchBuiltin.1("[", dx13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L10() else L9(dr10);
    L9(dx15):
      k2 = ld k;
      k3 = force? k2;
      __1 = ldf `[` in base;
      r23 = dyn __1(dx15, k3, "LibPath");
      goto L1(r23);
    L10():
      dx16 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx16);
    };
    r26 = dyn paste(p1, p2);
    check L56() else D14();
  L107():
    dr40 = tryDispatchBuiltin.1("[", update3);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L109() else L108(dr40);
  L108(update5):
    old4 = ld old;
    check L110() else D43();
  L119():
    update13 = force? update12;
    checkMissing(update13);
    c34 = `is.object`(update13);
    if c34 then L120() else L121(i36);
  D14():
    deopt 50 [i12, r26];
  D43():
    deopt 141 [update5, old4];
  L24(i42, dx71):
    repo = ld repo;
    check L123() else D49();
  L56():
    st tmpstring = r26;
    _in_ = ldf `%in%`;
    check L57() else D15();
  L109():
    dx66 = getTryDispatchBuiltinValue(dr40);
    goto L20(dx66);
  L110():
    old5 = force? old4;
    __9 = ldf `[` in base;
    r96 = dyn __9(update3, old5, <missing>, FALSE);
    goto L20(r96);
  L120():
    dr44 = tryDispatchBuiltin.1("[", update13);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L122() else L121(i36);
  L121(i40):
    __11 = ldf `[` in base;
    r103 = dyn __11(update13, <missing>, 3.0);
    goto L24(i40, r103);
  D15():
    deopt 53 [i12];
  D49():
    deopt 164 [i42, dx71, repo];
  L57():
    p3 = prom<V +>{
      tmpstring = ld tmpstring;
      tmpstring1 = force? tmpstring;
      checkMissing(tmpstring1);
      return tmpstring1;
    };
    p4 = prom<V +>{
      haveasked = ld haveasked;
      haveasked1 = force? haveasked;
      checkMissing(haveasked1);
      return haveasked1;
    };
    r29 = dyn _in_(p3, p4);
    check L58() else D16();
  L122():
    dx70 = getTryDispatchBuiltinValue(dr44);
    goto L24(i36, dx70);
  L123():
    repo1 = force? repo;
    checkMissing(repo1);
    r104 = `==`(dx71, repo1);
    st ok = r104;
    install_packages = ldf `install.packages`;
    check L124() else D50();
  D16():
    deopt 56 [i12, r29];
  D50():
    deopt 169 [i42];
  L58():
    c9 = `as.logical`(r29);
    if c9 then L59() else L8();
  L124():
    p15 = prom<V +>{
      update16 = ld update;
      update17 = force? update16;
      checkMissing(update17);
      c35 = `is.object`(update17);
      if c35 then L1() else L2(update17);
    L0(dx73):
      return dx73;
    L1():
      dr46 = tryDispatchBuiltin.1("[", update17);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(update19):
      ok = ld ok;
      ok1 = force? ok;
      __12 = ldf `[` in base;
      r105 = dyn __12(update19, ok1, 1.0);
      goto L0(r105);
    L3():
      dx72 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx72);
    };
    p16 = prom<V +>{
      update20 = ld update;
      update21 = force? update20;
      checkMissing(update21);
      c36 = `is.object`(update21);
      if c36 then L1() else L2(update21);
    L0(dx75):
      return dx75;
    L1():
      dr48 = tryDispatchBuiltin.1("[", update21);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(update23):
      ok2 = ld ok;
      ok3 = force? ok2;
      __13 = ldf `[` in base;
      r107 = dyn __13(update23, ok3, 2.0);
      goto L0(r107);
    L3():
      dx74 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx74);
    };
    p17 = prom<V +>{
      repo2 = ld repo;
      repo3 = force? repo2;
      checkMissing(repo3);
      return repo3;
    };
    ddd1 = ld `...`;
    r110 = dyn install_packages[, , contriburl, `...`](p15, p16, p17, ddd1);
    check L125() else D51();
  D51():
    deopt 175 [i42, r110];
  L8():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L62() else L63();
  L59():
    goto L6(i12);
  L125():
    goto L23(i42);
  L10(i19, r32):
    st haveasked = r32;
    cat1 = ldf cat;
    check L67() else D20();
  L62():
    haveasked2 = ld haveasked;
    check L64() else D17();
  L63():
    r31 = dyn base3(<sym haveasked>, <sym tmpstring>);
    goto L10(i12, r31);
  D17():
    deopt 63 [i12, haveasked2];
  D20():
    deopt 71 [i19];
  L64():
    haveasked3 = force? haveasked2;
    checkMissing(haveasked3);
    tmpstring2 = ld tmpstring;
    check L65() else D18();
  L67():
    r34 = dyn cat1("\n");
    check L68() else D21();
  D18():
    deopt 65 [i12, tmpstring2];
  D21():
    deopt 73 [i19, r34];
  L65():
    tmpstring3 = force? tmpstring2;
    checkMissing(tmpstring3);
    c10 = ldf c in base;
    r33 = dyn c10(haveasked3, tmpstring3);
    check L66() else D19();
  L68():
    cat2 = ldf cat;
    check L69() else D22();
  D19():
    deopt 68 [i12, r33];
  D22():
    deopt 75 [i19];
  L66():
    goto L10(i12, r33);
  L69():
    p5 = prom<V +>{
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      return pkg3;
    };
    r36 = dyn cat2(p5, ":\n");
    check L70() else D23();
  D23():
    deopt 78 [i19, r36];
  L70():
    askprint = ldf askprint;
    check L71() else D24();
  D24():
    deopt 80 [i19];
  L71():
    p6 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c11 = `is.object`(object14);
      if c11 then L3() else L4(object14);
    L2(dx19):
      c12 = `is.object`(dx19);
      if c12 then L6() else L7(dx19);
    L3():
      dr12 = tryDispatchBuiltin.1("$", object14);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L5() else L4(dr12);
    L4(object16):
      r37 = `$`(object16, <sym inst>);
      goto L2(r37);
    L0(dx23):
      return dx23;
    L5():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L2(dx18);
    L6():
      dr14 = tryDispatchBuiltin.1("[", dx19);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L8() else L7(dr14);
    L7(dx21):
      k4 = ld k;
      k5 = force? k4;
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L9() else L10();
    L1(dx26, k8, r39):
      __2 = ldf `[` in base;
      r41 = dyn __2(dx26, k8, r39);
      goto L0(r41);
    L8():
      dx22 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx22);
    L9():
      c13 = ldf c in base;
      r40 = dyn c13("Version", "LibPath");
      goto L1(dx21, k5, r40);
    L10():
      r38 = dyn base4("Version", "LibPath");
      goto L1(dx21, k5, r38);
    };
    r43 = dyn askprint(p6);
    check L72() else D25();
  D25():
    deopt 82 [i19, r43];
  L72():
    askprint1 = ldf askprint;
    check L73() else D26();
  D26():
    deopt 84 [i19];
  L73():
    p7 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c14 = `is.object`(object18);
      if c14 then L3() else L4(object18);
    L2(dx28):
      c15 = `is.object`(dx28);
      if c15 then L6() else L7(dx28);
    L3():
      dr16 = tryDispatchBuiltin.1("$", object18);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L5() else L4(dr16);
    L4(object20):
      r44 = `$`(object20, <sym avail>);
      goto L2(r44);
    L0(dx32):
      return dx32;
    L5():
      dx27 = getTryDispatchBuiltinValue(dr16);
      goto L2(dx27);
    L6():
      dr18 = tryDispatchBuiltin.1("[", dx28);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L8() else L7(dr18);
    L7(dx30):
      pkg4 = ld pkg;
      pkg5 = force? pkg4;
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L9() else L10();
    L1(dx35, pkg8, r46):
      __3 = ldf `[` in base;
      r48 = dyn __3(dx35, pkg8, r46);
      goto L0(r48);
    L8():
      dx31 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx31);
    L9():
      c16 = ldf c in base;
      r47 = dyn c16("Version", "Repository");
      goto L1(dx30, pkg5, r47);
    L10():
      r45 = dyn base5("Version", "Repository");
      goto L1(dx30, pkg5, r45);
    };
    r50 = dyn askprint1(p7);
    check L74() else D27();
  D27():
    deopt 86 [i19, r50];
  L74():
    askYesNo = ldf askYesNo;
    check L75() else D28();
  D28():
    deopt 88 [i19];
  L75():
    r51 = dyn askYesNo("Update?");
    check L76() else D29();
  D29():
    deopt 90 [i19, r51];
  L76():
    st answer = r51;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  L11(i22, r53):
    c17 = `as.logical`(r53);
    if c17 then L81() else L12();
  L77():
    answer = ld answer;
    check L79() else D30();
  L78():
    r52 = dyn base6(<sym answer>);
    goto L11(i19, r52);
  D30():
    deopt 94 [i19, answer];
  L12():
    isTRUE = ldf isTRUE;
    check L89() else D35();
  L79():
    answer1 = force? answer;
    checkMissing(answer1);
    is_na = ldf `is.na` in base;
    r54 = dyn is_na(answer1);
    check L80() else D31();
  L81():
    cat3 = ldf cat;
    check L82() else D32();
  D31():
    deopt 97 [i19, r54];
  D32():
    deopt 99 [i22];
  D35():
    deopt 110 [i22];
  L80():
    goto L11(i19, r54);
  L82():
    r55 = dyn cat3("cancelled by user\n");
    check L83() else D33();
  L89():
    p8 = prom<V +>{
      answer2 = ld answer;
      answer3 = force? answer2;
      checkMissing(answer3);
      return answer3;
    };
    r62 = dyn isTRUE(p8);
    check L90() else D36();
  D33():
    deopt 101 [i22, r55];
  D36():
    deopt 112 [i22, r62];
  L83():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  L90():
    c18 = `as.logical`(r62);
    if c18 then L91() else L15();
  L13(r57):
    popenv;
    return r57;
  L15():
    goto L16(i22);
  L16(i32):
    goto L6(i32);
  L84():
    invisible1 = ldf invisible in base;
    r58 = dyn invisible1();
    check L86() else D34();
  L85():
    r56 = dyn base7();
    goto L13(r56);
  L91():
    rbind = ldf rbind;
    check L92() else D37();
  D34():
    deopt 105 [i22, r58];
  D37():
    deopt 114 [i22];
  L86():
    goto L13(r58);
  L92():
    p9 = prom<V +>{
      update = ld update;
      update1 = force? update;
      checkMissing(update1);
      return update1;
    };
    p10 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L5() else L6();
    L0(r65):
      return r65;
    L5():
      pkg9 = ld pkg;
      pkg10 = force? pkg9;
      checkMissing(pkg10);
      sym9 = ldf `as.character`;
      base9 = ldf `as.character` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L7() else L8();
    L6():
      r64 = dyn base8(<sym pkg>, <lang as.character(`[`(`$`(object, inst), k, "LibPath"))>, <lang as.character(`[`(`$`(object, avail), pkg, "Repository"))>);
      goto L0(r64);
    L1(r67):
      sym10 = ldf `as.character`;
      base10 = ldf `as.character` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L16() else L17();
    L7():
      object21 = ld object;
      object22 = force? object21;
      checkMissing(object22);
      c19 = `is.object`(object22);
      if c19 then L10() else L11(object22);
    L8():
      r66 = dyn base9(<lang `[`(`$`(object, inst), k, "LibPath")>);
      goto L1(r66);
    L3(r72):
      c23 = ldf c in base;
      r76 = dyn c23(pkg10, r67, r72);
      goto L0(r76);
    L9(dx37):
      c20 = `is.object`(dx37);
      if c20 then L13() else L14(dx37);
    L10():
      dr20 = tryDispatchBuiltin.1("$", object22);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L12() else L11(dr20);
    L11(object24):
      r68 = `$`(object24, <sym inst>);
      goto L9(r68);
    L16():
      object25 = ld object;
      object26 = force? object25;
      checkMissing(object26);
      c21 = `is.object`(object26);
      if c21 then L19() else L20(object26);
    L17():
      r71 = dyn base10(<lang `[`(`$`(object, avail), pkg, "Repository")>);
      goto L3(r71);
    L2(dx41):
      as_character1 = ldf `as.character` in base;
      r70 = dyn as_character1(dx41);
      goto L1(r70);
    L12():
      dx36 = getTryDispatchBuiltinValue(dr20);
      goto L9(dx36);
    L13():
      dr22 = tryDispatchBuiltin.1("[", dx37);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L15() else L14(dr22);
    L14(dx39):
      k9 = ld k;
      k10 = force? k9;
      __4 = ldf `[` in base;
      r69 = dyn __4(dx39, k10, "LibPath");
      goto L2(r69);
    L18(dx43):
      c22 = `is.object`(dx43);
      if c22 then L22() else L23(dx43);
    L19():
      dr24 = tryDispatchBuiltin.1("$", object26);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L21() else L20(dr24);
    L20(object28):
      r73 = `$`(object28, <sym avail>);
      goto L18(r73);
    L4(dx47):
      as_character2 = ldf `as.character` in base;
      r75 = dyn as_character2(dx47);
      goto L3(r75);
    L15():
      dx40 = getTryDispatchBuiltinValue(dr22);
      goto L2(dx40);
    L21():
      dx42 = getTryDispatchBuiltinValue(dr24);
      goto L18(dx42);
    L22():
      dr26 = tryDispatchBuiltin.1("[", dx43);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L24() else L23(dr26);
    L23(dx45):
      pkg11 = ld pkg;
      pkg12 = force? pkg11;
      __5 = ldf `[` in base;
      r74 = dyn __5(dx45, pkg12, "Repository");
      goto L4(r74);
    L24():
      dx46 = getTryDispatchBuiltinValue(dr26);
      goto L4(dx46);
    };
    r78 = dyn rbind(p9, p10);
    check L93() else D38();
  D38():
    deopt 117 [i22, r78];
  L93():
    st update = r78;
    goto L16(i22);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg write_table:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    write_table = ldf `write.table`;
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
    r1 = dyn write_table[, `row.names`, `col.names`, quote, sep](p, FALSE, FALSE, FALSE, " at ");
    check L1() else D1();
  D1():
    deopt 11 [r1];
  L1():
    popenv;
    return r1;
  }
}