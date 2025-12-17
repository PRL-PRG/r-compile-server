fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner489206001;
    st `.walkClassGraph` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner489206001(ClassDef, slotName, where, conflicts) {
  (reg ClassDef:*, reg slotName:*, reg where:*, reg conflicts:*) -+> V { var ClassDef:*, var slotName:*, var where:*, var conflicts:*, reg conflicts_isMissing:L, reg conflicts_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), reg slot:cls, reg ClassDef1:*, reg ClassDef2:V, reg p1:p(V +), reg slotName1:*, reg slotName2:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg ext:*, reg ext1:V, reg length:cls, reg r7:V, reg r8:V, reg c:L, reg ext2:*, reg ext3:V, reg __:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg slotName3:*, reg slotName4:V, reg identical:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg ext4:*, reg ext5:V, reg names:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg ext6:*, reg ext7:V, reg r20:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg what:*, reg what1:V, reg c2:L, reg i6:I, reg what3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __1:cls, reg r21:V, reg isClass:cls, reg by:*, reg by1:V, reg p3:p(V +), reg packageSlot:cls, reg ext8:*, reg ext9:V, reg c3:L, reg ext11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i11:*, reg i12:V, reg __2:cls, reg r23:V, reg p4:p(V +), reg r25:V, reg p5:p(V +), reg r27:V, reg c4:L, reg getClassDef:cls, reg by2:*, reg by3:V, reg p6:p(V +), reg packageSlot1:cls, reg ext12:*, reg ext13:V, reg c5:L, reg ext15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i15:*, reg i16:V, reg __3:cls, reg r29:V, reg p7:p(V +), reg r31:V, reg p8:p(V +), reg r33:V, reg slot1:cls, reg byDef:*, reg byDef1:V, reg p9:p(V +), reg slotName5:*, reg slotName6:V, reg p10:p(V +), reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg i19:I, reg r38:V, reg exti:*, reg exti1:V, reg attr:cls, reg r39:V, reg superClassCase:*, reg superClassCase1:V, reg c6:L, reg i21:I, reg c8:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg i24:I, reg c11:L, reg r41:V, reg coni:*, reg coni1:V, reg length1:cls, reg r42:V, reg r43:V, reg c12:L, reg c13:V, reg c15:L, reg unique:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg conflicts1:*, reg conflicts2:V, reg coni2:*, reg coni3:V, reg c16:cls, reg r46:V, reg p11:p(V +), reg r48:V, reg i28:I, reg exti2:*, reg exti3:V, reg c17:L, reg i30:I, reg exti5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i32:I, reg dx7:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg i35:I, reg exti8:V, reg r51:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg i38:I, reg exti11:V, reg r53:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r54:V, reg i41:I, reg exti14:V, reg r55:V, reg exti15:*, reg exti16:V, reg names1:cls, reg r56:V, reg what4:*, reg what5:V, reg match:cls, reg r57:V, reg is_na:cls, reg r58:V, reg __4:cls, reg r59:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r60:V, reg i44:I, reg r61:V, reg exti17:*, reg exti18:V, reg length2:cls, reg r62:V, reg c18:L, reg superClassCase2:*, reg superClassCase3:V, reg c19:L, reg _transitiveExtends:cls, reg className:*, reg className1:V, reg p12:p(V +), reg by4:*, reg by5:V, reg p13:p(V +), reg ext16:*, reg ext17:V, reg c20:L, reg ext19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i49:*, reg i50:V, reg __5:cls, reg r65:V, reg p14:p(V +), reg exti19:*, reg exti20:V, reg p15:p(V +), reg strictBy:*, reg strictBy1:V, reg p16:p(V +), reg r69:V, reg i51:I, reg _transitiveSubclasses:cls, reg by6:*, reg by7:V, reg p17:p(V +), reg className2:*, reg className3:V, reg p18:p(V +), reg ext20:*, reg ext21:V, reg c21:L, reg ext23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i52:*, reg i53:V, reg __6:cls, reg r73:V, reg p19:p(V +), reg exti21:*, reg exti22:V, reg p20:p(V +), reg strictBy2:*, reg strictBy3:V, reg p21:p(V +), reg r77:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r78:V, reg i56:I, reg r79:V, reg ext24:*, reg ext25:V, reg exti23:*, reg exti24:V, reg c22:cls, reg r80:V, reg i57:I, reg r81:V, reg i58:I, reg stop:cls, reg gettextf:cls, reg superClassCase4:*, reg superClassCase5:V, reg c23:L, reg p22:p(V +), reg dQuote:cls, reg className4:*, reg className5:V, reg p23:p(V +), reg r85:V, reg p24:p(V +), reg dQuote1:cls, reg _className:cls, reg by8:*, reg by9:V, reg p25:p(V +), reg r88:V, reg p26:p(V +), reg r90:V, reg p27:p(V +), reg r92:V, reg p28:p(V +), reg r94:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r95:V, reg r96:V, reg ext26:*, reg ext27:V, reg names2:cls, reg r97:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r98:V, reg r99:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r100:V, reg r101:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r102:V, reg r103:V, reg what6:*, reg what7:V, reg className6:*, reg className7:V, reg match1:cls, reg r104:V, reg is_na1:cls, reg r105:V, reg all:cls, reg r106:V, reg r107:V, reg c24:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r108:V, reg r109:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r110:V, reg r111:V, reg what8:*, reg what9:V, reg className8:*, reg className9:V, reg match2:cls, reg r112:V, reg is_na2:cls, reg r113:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r114:V, reg r115:V, reg what10:*, reg what11:V, reg r116:I, reg c25:L, reg r118:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ok:*, reg ok1:V, reg r119:V, reg __7:cls, reg r120:V, reg s1:V, reg l1:I, reg i59:I, reg i60:I, reg i61:I, reg c26:L, reg x1:V, reg ext28:*, reg ext29:V, reg c27:L, reg i65:I, reg ext31:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i67:I, reg dx15:V, reg i68:*, reg i69:V, reg __8:cls, reg r121:V, reg is:cls, reg exti25:*, reg exti26:V, reg p29:p(V +), reg r123:V, reg r124:V, reg c28:L, reg superClassCase6:*, reg superClassCase7:V, reg c29:L, reg i74:I, reg stop1:cls, reg sprintf:cls, reg dQuote2:cls, reg className10:*, reg className11:V, reg p30:p(V +), reg r127:V, reg p31:p(V +), reg whatError:*, reg whatError1:V, reg p32:p(V +), reg dQuote3:cls, reg __9:cls, reg r130:V, reg p33:p(V +), reg r132:V, reg p34:p(V +), reg dQuote4:cls, reg className12:*, reg className13:V, reg p35:p(V +), reg r135:V, reg p36:p(V +), reg r137:V, reg p37:p(V +), reg r139:V, reg i75:I, reg ext32:*, reg ext33:V, reg c30:L, reg ext35:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg ok2:*, reg ok3:V, reg __10:cls, reg r141:V, reg sort_list:cls, reg vapply:cls, reg ext36:*, reg ext37:V, reg p38:p(V +), reg r143:cls, reg p39:p(V +), reg r145:V, reg p40:p(V +), reg r147:V, reg ext38:*, reg ext39:V, reg c31:L, reg ext41:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg distOrder:*, reg distOrder1:V, reg __11:cls, reg r148:V, reg superClassCase8:*, reg superClassCase9:V, reg c32:L, reg c34:V, reg anyDuplicated:cls, reg what12:*, reg what13:V, reg p41:p(V +), reg r150:V, reg c35:L, reg c36:L, reg c37:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r151:V, reg c44:L, reg c45:L, reg r152:V, reg conflicts3:*, reg conflicts4:V, reg length3:cls, reg r153:V, reg r154:V, reg c46:L, reg c47:V, reg c50:L, reg c51:V, reg c53:L, reg _resolveSuperclasses:cls, reg ClassDef3:*, reg ClassDef4:V, reg p42:p(V +), reg ext42:*, reg ext43:V, reg p43:p(V +), reg where1:*, reg where2:V, reg p44:p(V +), reg conflicts5:*, reg conflicts6:V, reg p45:p(V +), reg r159:V, reg ext44:*, reg ext45:V |
    mkenv;
    st ClassDef = ClassDef;
    st slotName = slotName;
    st where = where;
    conflicts_isMissing = missing.0(conflicts);
    if conflicts_isMissing then L0() else L1(conflicts);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(conflicts_orDefault):
    st conflicts = conflicts_orDefault;
    slot = ldf slot;
    check L52() else D0();
  D0():
    deopt 1 [];
  L52():
    p1 = prom<V +>{
      ClassDef1 = ld ClassDef;
      ClassDef2 = force? ClassDef1;
      checkMissing(ClassDef2);
      return ClassDef2;
    };
    p2 = prom<V +>{
      slotName1 = ld slotName;
      slotName2 = force? slotName1;
      checkMissing(slotName2);
      return slotName2;
    };
    r4 = dyn slot(p1, p2);
    check L53() else D1();
  D1():
    deopt 4 [r4];
  L53():
    st ext = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L54() else L55();
  L2(r6):
    r8 = `==`(r6, 0.0);
    c = `as.logical`(r8);
    if c then L58() else L3();
  L54():
    ext = ld ext;
    check L56() else D2();
  L55():
    r5 = dyn base(<sym ext>);
    goto L2(r5);
  D2():
    deopt 8 [ext];
  L3():
    __ = ldf `@` in base;
    r11 = dyn __(<sym ClassDef>, <sym className>);
    st className = r11;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L62() else L63();
  L56():
    ext1 = force? ext;
    checkMissing(ext1);
    length = ldf length in base;
    r7 = dyn length(ext1);
    check L57() else D3();
  L58():
    ext2 = ld ext;
    check L59() else D4();
  D3():
    deopt 11 [r7];
  D4():
    deopt 14 [ext2];
  L5(r13):
    st superClassCase = r13;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L66() else L67();
  L57():
    goto L2(r7);
  L59():
    ext3 = force? ext2;
    checkMissing(ext3);
    popenv;
    return ext3;
  L62():
    slotName3 = ld slotName;
    check L64() else D5();
  L63():
    r12 = dyn base1(<sym slotName>, "contains");
    goto L5(r12);
  D5():
    deopt 24 [slotName3];
  L6(r16):
    st what = r16;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L70() else L71();
  L64():
    slotName4 = force? slotName3;
    checkMissing(slotName4);
    identical = ldf identical in base;
    r14 = dyn identical(slotName4, "contains", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L65() else D6();
  L66():
    ext4 = ld ext;
    check L68() else D7();
  L67():
    r15 = dyn base2(<sym ext>);
    goto L6(r15);
  D6():
    deopt 35 [r14];
  D7():
    deopt 39 [ext4];
  L7(r19):
    s = toForSeq(r19);
    l = length(s);
    i = 0;
    goto L8(i);
  L65():
    goto L5(r14);
  L68():
    ext5 = force? ext4;
    checkMissing(ext5);
    names = ldf names in base;
    r17 = dyn names(ext5);
    check L69() else D8();
  L70():
    ext6 = ld ext;
    check L72() else D9();
  L71():
    r18 = dyn base3(<sym ext>);
    goto L7(r18);
  D8():
    deopt 42 [r17];
  D9():
    deopt 45 [ext6];
  L8(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L73() else L27();
  L69():
    goto L6(r17);
  L72():
    ext7 = force? ext6;
    checkMissing(ext7);
    r20 = seq_along(ext7);
    goto L7(r20);
  L27():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    what = ld what;
    check L74() else D10();
  L73():
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L137() else L138();
  D10():
    deopt 48 [i2, what];
  L28(r96):
    st what = r96;
    sym13 = ldf all;
    base13 = ldf all in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L141() else L142();
  L74():
    what1 = force? what;
    checkMissing(what1);
    c2 = `is.object`(what1);
    if c2 then L75() else L76(i2, what1);
  L137():
    ext26 = ld ext;
    check L139() else D43();
  L138():
    r95 = dyn base12(<sym ext>);
    goto L28(r95);
  D43():
    deopt 175 [ext26];
  L9(i8, dx1):
    st by = dx1;
    isClass = ldf isClass;
    check L79() else D12();
  L29(r99):
    r107 = `!`(r99);
    c24 = `as.logical`(r107);
    if c24 then L152() else L32();
  L75():
    dr = tryDispatchBuiltin.1("[[", what1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L77() else L76(i2, dr);
  L76(i6, what3):
    i9 = ld i;
    check L78() else D11();
  L139():
    ext27 = force? ext26;
    checkMissing(ext27);
    names2 = ldf names in base;
    r97 = dyn names2(ext27);
    check L140() else D44();
  L141():
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L143() else L144();
  L142():
    r98 = dyn base13(<lang is.na(match(what, className))>);
    goto L29(r98);
  D11():
    deopt 50 [i6, what3, i9];
  D12():
    deopt 55 [i8];
  D44():
    deopt 178 [r97];
  L30(r101):
    all = ldf all in base;
    r106 = dyn all(r101);
    check L151() else D49();
  L32():
    goto L45();
  L45():
    sort_list = ldf `sort.list`;
    check L189() else D65();
  L77():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(i2, dx);
  L78():
    i10 = force? i9;
    __1 = ldf `[[` in base;
    r21 = dyn __1(what3, i10);
    goto L9(i6, r21);
  L79():
    p3 = prom<V +>{
      by = ld by;
      by1 = force? by;
      checkMissing(by1);
      return by1;
    };
    p5 = prom<V +>{
      packageSlot = ldf packageSlot;
      p4 = prom<V +>{
        ext8 = ld ext;
        ext9 = force? ext8;
        checkMissing(ext9);
        c3 = `is.object`(ext9);
        if c3 then L1() else L2(ext9);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", ext9);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(ext11):
        i11 = ld i;
        i12 = force? i11;
        __2 = ldf `[[` in base;
        r23 = dyn __2(ext11, i12);
        goto L0(r23);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r25 = dyn packageSlot(p4);
      return r25;
    };
    r27 = dyn isClass[, where](p3, p5);
    check L80() else D13();
  L140():
    goto L28(r97);
  L143():
    sym15 = ldf match;
    base15 = ldf match in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L145() else L146();
  L144():
    r100 = dyn base14(<lang match(what, className)>);
    goto L30(r100);
  L152():
    sym16 = ldf `is.na`;
    base16 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L153() else L154();
  D13():
    deopt 59 [i8, r27];
  D49():
    deopt 197 [r106];
  D65():
    deopt 262 [];
  L31(r103):
    is_na1 = ldf `is.na` in base;
    r105 = dyn is_na1(r103);
    check L150() else D48();
  L33(r109):
    st ok = r109;
    sym18 = ldf seq_along;
    base18 = ldf seq_along in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L161() else L162();
  L80():
    c4 = `as.logical`(r27);
    if c4 then L81() else L10();
  L145():
    what6 = ld what;
    check L147() else D45();
  L146():
    r102 = dyn base15(<sym what>, <sym className>);
    goto L31(r102);
  L151():
    goto L29(r106);
  L153():
    sym17 = ldf match;
    base17 = ldf match in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L155() else L156();
  L154():
    r108 = dyn base16(<lang match(what, className)>);
    goto L33(r108);
  L189():
    p40 = prom<V +>{
      vapply = ldf vapply;
      p38 = prom<V +>{
        ext36 = ld ext;
        ext37 = force? ext36;
        checkMissing(ext37);
        return ext37;
      };
      p39 = prom<V +>{
        r143 = clos inner2501545716;
        return r143;
      };
      r145 = dyn vapply(p38, p39, 1.0);
      return r145;
    };
    r147 = dyn sort_list(p40);
    check L190() else D66();
  D45():
    deopt 186 [what6];
  D48():
    deopt 195 [r105];
  D66():
    deopt 264 [r147];
  L10():
    stop = ldf stop;
    check L135() else D41();
  L26(i58):
    goto L8(i58);
  L34(r111):
    is_na2 = ldf `is.na` in base;
    r113 = dyn is_na2(r111);
    check L160() else D53();
  L35(r115):
    c25 = `is.object`(r115);
    if c25 then L164() else L165(r115);
  L81():
    getClassDef = ldf getClassDef;
    check L82() else D14();
  L147():
    what7 = force? what6;
    checkMissing(what7);
    className6 = ld className;
    check L148() else D46();
  L150():
    goto L30(r105);
  L155():
    what8 = ld what;
    check L157() else D50();
  L156():
    r110 = dyn base17(<sym what>, <sym className>);
    goto L34(r110);
  L161():
    what10 = ld what;
    check L163() else D54();
  L162():
    r114 = dyn base18(<sym what>);
    goto L35(r114);
  L190():
    st distOrder = r147;
    ext38 = ld ext;
    check L191() else D67();
  D14():
    deopt 61 [i8];
  D41():
    deopt 165 [i8];
  D46():
    deopt 188 [className6];
  D50():
    deopt 203 [what8];
  D53():
    deopt 212 [r113];
  D54():
    deopt 215 [what10];
  D67():
    deopt 266 [ext38];
  L36(dx13):
    s1 = toForSeq(dx13);
    l1 = length(s1);
    i59 = 0;
    goto L37(i59);
  L82():
    p6 = prom<V +>{
      by2 = ld by;
      by3 = force? by2;
      checkMissing(by3);
      return by3;
    };
    p8 = prom<V +>{
      packageSlot1 = ldf packageSlot;
      p7 = prom<V +>{
        ext12 = ld ext;
        ext13 = force? ext12;
        checkMissing(ext13);
        c5 = `is.object`(ext13);
        if c5 then L1() else L2(ext13);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[[", ext13);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(ext15):
        i15 = ld i;
        i16 = force? i15;
        __3 = ldf `[[` in base;
        r29 = dyn __3(ext15, i16);
        goto L0(r29);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r31 = dyn packageSlot1(p7);
      return r31;
    };
    r33 = dyn getClassDef[, package](p6, p8);
    check L83() else D15();
  L135():
    p28 = prom<V +>{
      gettextf = ldf gettextf;
      p22 = prom<V +>{
        superClassCase4 = ld superClassCase;
        superClassCase5 = force? superClassCase4;
        checkMissing(superClassCase5);
        c23 = `as.logical`(superClassCase5);
        if c23 then L1() else L0();
      L0():
        return "subClass";
      L1():
        return "superClass";
      };
      p24 = prom<V +>{
        dQuote = ldf dQuote;
        p23 = prom<V +>{
          className4 = ld className;
          className5 = force? className4;
          checkMissing(className5);
          return className5;
        };
        r85 = dyn dQuote(p23);
        return r85;
      };
      p27 = prom<V +>{
        dQuote1 = ldf dQuote;
        p26 = prom<V +>{
          _className = ldf `.className`;
          p25 = prom<V +>{
            by8 = ld by;
            by9 = force? by8;
            checkMissing(by9);
            return by9;
          };
          r88 = dyn _className(p25);
          return r88;
        };
        r90 = dyn dQuote1(p26);
        return r90;
      };
      r92 = dyn gettextf("the '%s' list for class %s, includes an undefined class %s", p22, p24, p27);
      return r92;
    };
    r94 = dyn stop[, domain](p28, NA_LGL);
    check L136() else D42();
  L148():
    className7 = force? className6;
    checkMissing(className7);
    match1 = ldf match in base;
    r104 = dyn match1(what7, className7, NA_INT, NULL);
    check L149() else D47();
  L157():
    what9 = force? what8;
    checkMissing(what9);
    className8 = ld className;
    check L158() else D51();
  L160():
    goto L33(r113);
  L163():
    what11 = force? what10;
    checkMissing(what11);
    r116 = seq_along(what11);
    goto L35(r116);
  L164():
    dr12 = tryDispatchBuiltin.1("[", r115);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L166() else L165(dr12);
  L165(r118):
    ok = ld ok;
    check L167() else D55();
  L191():
    ext39 = force? ext38;
    checkMissing(ext39);
    c31 = `is.object`(ext39);
    if c31 then L192() else L193(ext39);
  D15():
    deopt 65 [i8, r33];
  D42():
    deopt 169 [i8, r94];
  D47():
    deopt 193 [r104];
  D51():
    deopt 205 [className8];
  D55():
    deopt 218 [r118, ok];
  L37(i60):
    i61 = `+`.1(i60, 1);
    c26 = `<`.1(l1, i61);
    if c26 then L168() else L43();
  L46(dx20):
    st ext = dx20;
    superClassCase8 = ld superClassCase;
    check L196() else D69();
  L83():
    st byDef = r33;
    slot1 = ldf slot;
    check L84() else D16();
  L136():
    goto L26(i8);
  L149():
    goto L31(r104);
  L158():
    className9 = force? className8;
    checkMissing(className9);
    match2 = ldf match in base;
    r112 = dyn match2(what9, className9, NA_INT, NULL);
    check L159() else D52();
  L166():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L36(dx12);
  L167():
    ok1 = force? ok;
    checkMissing(ok1);
    r119 = `!`(ok1);
    __7 = ldf `[` in base;
    r120 = dyn __7(r118, r119);
    goto L36(r120);
  L192():
    dr18 = tryDispatchBuiltin.1("[", ext39);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L194() else L193(dr18);
  L193(ext41):
    distOrder = ld distOrder;
    check L195() else D68();
  D16():
    deopt 68 [i8];
  D52():
    deopt 210 [r112];
  D68():
    deopt 268 [ext41, distOrder];
  D69():
    deopt 272 [superClassCase8];
  L43():
    x1 = `[[`(s1, i61, NULL, TRUE);
    st i = x1;
    ext28 = ld ext;
    check L169() else D56();
  L84():
    p9 = prom<V +>{
      byDef = ld byDef;
      byDef1 = force? byDef;
      checkMissing(byDef1);
      return byDef1;
    };
    p10 = prom<V +>{
      slotName5 = ld slotName;
      slotName6 = force? slotName5;
      checkMissing(slotName6);
      return slotName6;
    };
    r36 = dyn slot1(p9, p10);
    check L85() else D17();
  L159():
    goto L34(r112);
  L168():
    ext32 = ld ext;
    check L183() else D63();
  L194():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L46(dx19);
  L195():
    distOrder1 = force? distOrder;
    __11 = ldf `[` in base;
    r148 = dyn __11(ext41, distOrder1);
    goto L46(r148);
  L196():
    superClassCase9 = force? superClassCase8;
    checkMissing(superClassCase9);
    c32 = `as.logical`(superClassCase9);
    if c32 then L197() else L47(c32);
  D17():
    deopt 71 [i8, r36];
  D56():
    deopt 222 [i61, ext28];
  D63():
    deopt 253 [ext32];
  L47(c34):
    c53 = `as.logical`(c34);
    if c53 then L207() else L50();
  L85():
    st exti = r36;
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L86() else L87();
  L169():
    ext29 = force? ext28;
    checkMissing(ext29);
    c27 = `is.object`(ext29);
    if c27 then L170() else L171(i61, ext29);
  L183():
    ext33 = force? ext32;
    checkMissing(ext33);
    c30 = `is.object`(ext33);
    if c30 then L184() else L185(ext33);
  L197():
    anyDuplicated = ldf anyDuplicated;
    check L198() else D70();
  D70():
    deopt 275 [c32];
  L11(i19, r38):
    st coni = r38;
    superClassCase = ld superClassCase;
    check L90() else D20();
  L38(i67, dx15):
    st exti = dx15;
    is = ldf is;
    check L174() else D58();
  L44(dx17):
    st ext = dx17;
    goto L45();
  L50():
    goto L51();
  L51():
    ext44 = ld ext;
    check L211() else D76();
  L86():
    exti = ld exti;
    check L88() else D18();
  L87():
    r37 = dyn base4(<sym exti>, "conflicts");
    goto L11(i8, r37);
  L170():
    dr14 = tryDispatchBuiltin.1("[[", ext29);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L172() else L171(i61, dr14);
  L171(i65, ext31):
    i68 = ld i;
    check L173() else D57();
  L184():
    dr16 = tryDispatchBuiltin.1("[", ext33);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L186() else L185(dr16);
  L185(ext35):
    ok2 = ld ok;
    check L187() else D64();
  L198():
    p41 = prom<V +>{
      what12 = ld what;
      what13 = force? what12;
      checkMissing(what13);
      return what13;
    };
    r150 = dyn anyDuplicated(p41);
    check L199() else D71();
  L207():
    _resolveSuperclasses = ldf `.resolveSuperclasses`;
    check L208() else D74();
  D18():
    deopt 75 [i8, exti];
  D20():
    deopt 81 [i19, superClassCase];
  D57():
    deopt 224 [i65, ext31, i68];
  D58():
    deopt 229 [i67];
  D64():
    deopt 255 [ext35, ok2];
  D71():
    deopt 277 [c32, r150];
  D74():
    deopt 289 [];
  D76():
    deopt 298 [ext44];
  L88():
    exti1 = force? exti;
    checkMissing(exti1);
    attr = ldf attr in base;
    r39 = dyn attr(exti1, "conflicts");
    check L89() else D19();
  L90():
    superClassCase1 = force? superClassCase;
    checkMissing(superClassCase1);
    c6 = `as.logical`(superClassCase1);
    if c6 then L91() else L12(i19, c6);
  L172():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L38(i61, dx14);
  L173():
    i69 = force? i68;
    __8 = ldf `[[` in base;
    r121 = dyn __8(ext31, i69);
    goto L38(i65, r121);
  L174():
    p29 = prom<V +>{
      exti25 = ld exti;
      exti26 = force? exti25;
      checkMissing(exti26);
      return exti26;
    };
    r123 = dyn is(p29, "conditionalExtension");
    check L175() else D59();
  L186():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L44(dx16);
  L187():
    ok3 = force? ok2;
    __10 = ldf `[` in base;
    r141 = dyn __10(ext35, ok3);
    goto L44(r141);
  L199():
    c35 = `as.logical`(r150);
    if c35 then L48(c32, c35) else L200();
  L208():
    p42 = prom<V +>{
      ClassDef3 = ld ClassDef;
      ClassDef4 = force? ClassDef3;
      checkMissing(ClassDef4);
      return ClassDef4;
    };
    p43 = prom<V +>{
      ext42 = ld ext;
      ext43 = force? ext42;
      checkMissing(ext43);
      return ext43;
    };
    p44 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p45 = prom<V +>{
      conflicts5 = ld conflicts;
      conflicts6 = force? conflicts5;
      checkMissing(conflicts6);
      return conflicts6;
    };
    r159 = dyn _resolveSuperclasses(p42, p43, p44, p45);
    check L209() else D75();
  L211():
    ext45 = force? ext44;
    checkMissing(ext45);
    popenv;
    return ext45;
  D19():
    deopt 79 [i8, r39];
  D59():
    deopt 232 [i67, r123];
  D75():
    deopt 294 [r159];
  L12(i21, c8):
    c15 = `as.logical`(c8);
    if c15 then L97() else L14();
  L48(c36, c37):
    c50 = `as.logical`(c37);
    c51 = `&&`(c36, c50);
    goto L47(c51);
  L89():
    goto L11(i8, r39);
  L91():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L92() else L93();
  L175():
    r124 = `!`(r123);
    c28 = `as.logical`(r124);
    if c28 then L176() else L39();
  L200():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L201() else L202();
  L209():
    st ext = r159;
    goto L51();
  L13(i24, c11, r41):
    r43 = `>`(r41, 0.0);
    c12 = `as.logical`(r43);
    c13 = `&&`(c11, c12);
    goto L12(i24, c13);
  L14():
    goto L15(i21);
  L15(i28):
    exti2 = ld exti;
    check L101() else D25();
  L39():
    goto L42(i67);
  L42(i75):
    goto L37(i75);
  L49(c44, c45, r152):
    r154 = `>`(r152, 0.0);
    c46 = `as.logical`(r154);
    c47 = `||`(c45, c46);
    goto L48(c44, c47);
  L92():
    coni = ld coni;
    check L94() else D21();
  L93():
    r40 = dyn base5(<sym coni>);
    goto L13(i19, c6, r40);
  L97():
    unique = ldf unique;
    check L98() else D23();
  L176():
    superClassCase6 = ld superClassCase;
    check L177() else D60();
  L201():
    conflicts3 = ld conflicts;
    check L203() else D72();
  L202():
    r151 = dyn base19(<sym conflicts>);
    goto L49(c32, c35, r151);
  D21():
    deopt 85 [i19, c6, coni];
  D23():
    deopt 93 [i21];
  D25():
    deopt 99 [i28, exti2];
  D60():
    deopt 234 [i67, superClassCase6];
  D72():
    deopt 280 [c32, c35, conflicts3];
  L94():
    coni1 = force? coni;
    checkMissing(coni1);
    length1 = ldf length in base;
    r42 = dyn length1(coni1);
    check L95() else D22();
  L98():
    p11 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      conflicts1 = ld conflicts;
      conflicts2 = force? conflicts1;
      checkMissing(conflicts2);
      coni2 = ld coni;
      coni3 = force? coni2;
      checkMissing(coni3);
      c16 = ldf c in base;
      r46 = dyn c16(conflicts2, coni3);
      goto L0(r46);
    L2():
      r44 = dyn base6(<sym conflicts>, <sym coni>);
      goto L0(r44);
    };
    r48 = dyn unique(p11);
    check L99() else D24();
  L101():
    exti3 = force? exti2;
    checkMissing(exti3);
    c17 = `is.object`(exti3);
    if c17 then L102() else L103(i28, exti3);
  L177():
    superClassCase7 = force? superClassCase6;
    checkMissing(superClassCase7);
    c29 = `as.logical`(superClassCase7);
    if c29 then L178() else L40();
  L203():
    conflicts4 = force? conflicts3;
    checkMissing(conflicts4);
    length3 = ldf length in base;
    r153 = dyn length3(conflicts4);
    check L204() else D73();
  D22():
    deopt 88 [i19, c6, r42];
  D24():
    deopt 95 [i21, r48];
  D73():
    deopt 283 [c32, c35, r153];
  L16(i32, dx7):
    st exti = dx7;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L116() else L117();
  L40():
    st whatError = "have itself as a subclass";
    goto L41(i67);
  L41(i74):
    stop1 = ldf stop;
    check L180() else D61();
  L95():
    goto L13(i19, c6, r42);
  L99():
    st conflicts = r48;
    goto L15(i21);
  L102():
    dr6 = tryDispatchBuiltin.1("[", exti3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L104() else L103(i28, dr6);
  L103(i30, exti5):
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L105() else L106();
  L178():
    st whatError = "contain itself";
    goto L41(i67);
  L204():
    goto L49(c32, c35, r153);
  D61():
    deopt 243 [i74];
  L17(i35, exti8, r51):
    __4 = ldf `[` in base;
    r59 = dyn __4(exti8, r51);
    goto L16(i35, r59);
  L20(i44, r61):
    c18 = `as.logical`(r61);
    if c18 then L120() else L21();
  L104():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(i28, dx6);
  L105():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L107() else L108();
  L106():
    r50 = dyn base7(<lang match(names(exti), what)>);
    goto L17(i30, exti5, r50);
  L116():
    exti17 = ld exti;
    check L118() else D31();
  L117():
    r60 = dyn base10(<sym exti>);
    goto L20(i32, r60);
  L180():
    p37 = prom<V +>{
      sprintf = ldf sprintf;
      p31 = prom<V +>{
        dQuote2 = ldf dQuote;
        p30 = prom<V +>{
          className10 = ld className;
          className11 = force? className10;
          checkMissing(className11);
          return className11;
        };
        r127 = dyn dQuote2(p30);
        return r127;
      };
      p32 = prom<V +>{
        whatError = ld whatError;
        whatError1 = force? whatError;
        checkMissing(whatError1);
        return whatError1;
      };
      p34 = prom<V +>{
        dQuote3 = ldf dQuote;
        p33 = prom<V +>{
          __9 = ldf `@` in base;
          r130 = dyn __9(<sym exti>, <sym by>);
          return r130;
        };
        r132 = dyn dQuote3(p33);
        return r132;
      };
      p36 = prom<V +>{
        dQuote4 = ldf dQuote;
        p35 = prom<V +>{
          className12 = ld className;
          className13 = force? className12;
          checkMissing(className13);
          return className13;
        };
        r135 = dyn dQuote4(p35);
        return r135;
      };
      r137 = dyn sprintf("class %s may not %s: it contains class %s, with a circular relation back to %s", p31, p32, p34, p36);
      return r137;
    };
    r139 = dyn stop1[, domain](p37, NA_LGL);
    check L181() else D62();
  D31():
    deopt 123 [i32, exti17];
  D62():
    deopt 247 [i74, r139];
  L18(i38, exti11, r53):
    is_na = ldf `is.na` in base;
    r58 = dyn is_na(r53);
    check L115() else D30();
  L21():
    goto L25(i44, NULL);
  L25(i57, r81):
    goto L26(i57);
  L107():
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L109() else L110();
  L108():
    r52 = dyn base8(<lang names(exti)>, <sym what>);
    goto L18(i30, exti5, r52);
  L118():
    exti18 = force? exti17;
    checkMissing(exti18);
    length2 = ldf length in base;
    r62 = dyn length2(exti18);
    check L119() else D32();
  L120():
    superClassCase2 = ld superClassCase;
    check L121() else D33();
  L181():
    goto L42(i74);
  D30():
    deopt 118 [i38, exti11, r58];
  D32():
    deopt 126 [i32, r62];
  D33():
    deopt 127 [i44, superClassCase2];
  L19(i41, exti14, r55):
    what4 = ld what;
    check L113() else D28();
  L109():
    exti15 = ld exti;
    check L111() else D26();
  L110():
    r54 = dyn base9(<sym exti>);
    goto L19(i30, exti5, r54);
  L115():
    goto L17(i38, exti11, r58);
  L119():
    goto L20(i32, r62);
  L121():
    superClassCase3 = force? superClassCase2;
    checkMissing(superClassCase3);
    c19 = `as.logical`(superClassCase3);
    if c19 then L122() else L22();
  D26():
    deopt 107 [i30, exti5, exti15];
  D28():
    deopt 111 [i41, exti14, what4];
  L22():
    st strictBy = TRUE;
    _transitiveSubclasses = ldf `.transitiveSubclasses`;
    check L126() else D36();
  L23(i51):
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L128() else L129();
  L111():
    exti16 = force? exti15;
    checkMissing(exti16);
    names1 = ldf names in base;
    r56 = dyn names1(exti16);
    check L112() else D27();
  L113():
    what5 = force? what4;
    checkMissing(what5);
    match = ldf match in base;
    r57 = dyn match(r55, what5, NA_INT, NULL);
    check L114() else D29();
  L122():
    st strictBy = TRUE;
    _transitiveExtends = ldf `.transitiveExtends`;
    check L123() else D34();
  D27():
    deopt 110 [i30, exti5, r56];
  D29():
    deopt 116 [i41, exti14, r57];
  D34():
    deopt 133 [i44];
  D36():
    deopt 145 [i44];
  L24(i56, r79):
    st ext = r79;
    goto L25(i56, r79);
  L112():
    goto L19(i30, exti5, r56);
  L114():
    goto L18(i41, exti14, r57);
  L123():
    p12 = prom<V +>{
      className = ld className;
      className1 = force? className;
      checkMissing(className1);
      return className1;
    };
    p13 = prom<V +>{
      by4 = ld by;
      by5 = force? by4;
      checkMissing(by5);
      return by5;
    };
    p14 = prom<V +>{
      ext16 = ld ext;
      ext17 = force? ext16;
      checkMissing(ext17);
      c20 = `is.object`(ext17);
      if c20 then L1() else L2(ext17);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", ext17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(ext19):
      i49 = ld i;
      i50 = force? i49;
      __5 = ldf `[[` in base;
      r65 = dyn __5(ext19, i50);
      goto L0(r65);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p15 = prom<V +>{
      exti19 = ld exti;
      exti20 = force? exti19;
      checkMissing(exti20);
      return exti20;
    };
    p16 = prom<V +>{
      strictBy = ld strictBy;
      strictBy1 = force? strictBy;
      checkMissing(strictBy1);
      return strictBy1;
    };
    r69 = dyn _transitiveExtends(p12, p13, p14, p15, p16);
    check L124() else D35();
  L126():
    p17 = prom<V +>{
      by6 = ld by;
      by7 = force? by6;
      checkMissing(by7);
      return by7;
    };
    p18 = prom<V +>{
      className2 = ld className;
      className3 = force? className2;
      checkMissing(className3);
      return className3;
    };
    p19 = prom<V +>{
      ext20 = ld ext;
      ext21 = force? ext20;
      checkMissing(ext21);
      c21 = `is.object`(ext21);
      if c21 then L1() else L2(ext21);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", ext21);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(ext23):
      i52 = ld i;
      i53 = force? i52;
      __6 = ldf `[[` in base;
      r73 = dyn __6(ext23, i53);
      goto L0(r73);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p20 = prom<V +>{
      exti21 = ld exti;
      exti22 = force? exti21;
      checkMissing(exti22);
      return exti22;
    };
    p21 = prom<V +>{
      strictBy2 = ld strictBy;
      strictBy3 = force? strictBy2;
      checkMissing(strictBy3);
      return strictBy3;
    };
    r77 = dyn _transitiveSubclasses(p17, p18, p19, p20, p21);
    check L127() else D37();
  L128():
    ext24 = ld ext;
    check L130() else D38();
  L129():
    r78 = dyn base11(<sym ext>, <sym exti>);
    goto L24(i51, r78);
  D35():
    deopt 139 [i44, r69];
  D37():
    deopt 151 [i44, r77];
  D38():
    deopt 155 [i51, ext24];
  L124():
    st exti = r69;
    goto L23(i44);
  L127():
    st exti = r77;
    goto L23(i44);
  L130():
    ext25 = force? ext24;
    checkMissing(ext25);
    exti23 = ld exti;
    check L131() else D39();
  D39():
    deopt 157 [i51, exti23];
  L131():
    exti24 = force? exti23;
    checkMissing(exti24);
    c22 = ldf c in base;
    r80 = dyn c22(ext25, exti24);
    check L132() else D40();
  D40():
    deopt 160 [i51, r80];
  L132():
    goto L24(i51, r80);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg __:cls, reg r:V |
    mkenv;
    st x = x;
    __ = ldf `@` in base;
    r = dyn __(<sym x>, <sym distance>);
    popenv;
    return r;
  }
}