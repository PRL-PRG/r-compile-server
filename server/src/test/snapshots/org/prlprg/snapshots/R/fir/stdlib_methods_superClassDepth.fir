fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner363148547;
    st superClassDepth = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner363148547(ClassDef, soFar, simpleOnly) {
  (reg ClassDef:*, reg soFar:*, reg simpleOnly:*) -+> V { var ClassDef:*, var soFar:*, reg soFar_isMissing:L, reg soFar_orDefault:*, reg __:cls, reg r:V, reg p:p(V +), var simpleOnly:*, reg simpleOnly_isMissing:L, reg simpleOnly_orDefault:*, reg __1:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg ext:*, reg ext1:V, reg length:cls, reg r7:V, reg rep_int:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg ext2:*, reg ext3:V, reg r11:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg ext4:*, reg ext5:V, reg c1:L, reg i6:I, reg ext7:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __2:cls, reg r12:V, reg _isIndirectExtension:cls, reg exti:*, reg exti1:V, reg p1:p(V +), reg r14:V, reg c2:L, reg i11:I, reg c3:V, reg simpleOnly1:*, reg simpleOnly2:V, reg c5:L, reg i14:I, reg c8:L, reg c9:V, reg __3:cls, reg r15:V, reg r16:V, reg c10:L, reg c11:V, reg c14:L, reg c15:V, reg c17:L, reg l1:*, reg c18:L, reg i20:I, reg r18:L, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i22:I, reg r20:L, reg dx3:V, reg i23:*, reg i24:V, reg ___:cls, reg r21:V, reg i25:I, reg ext8:*, reg ext9:V, reg c19:L, reg ext11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ok:*, reg ok1:V, reg __4:cls, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg ext12:*, reg ext13:V, reg names:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg immediate:*, reg immediate1:V, reg soFar1:*, reg soFar2:V, reg match:cls, reg r31:V, reg is_na:cls, reg r32:V, reg immediate2:*, reg immediate3:V, reg c20:L, reg immediate5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg notSoFar:*, reg notSoFar1:V, reg __5:cls, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg immediate6:*, reg immediate7:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg immediate8:*, reg immediate9:V, reg length1:cls, reg r40:V, reg rep_int1:cls, reg r41:V, reg ext14:*, reg ext15:V, reg list:cls, reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg immediate10:*, reg immediate11:V, reg r45:I, reg s1:V, reg l4:I, reg i26:I, reg i27:I, reg i28:I, reg c21:L, reg x1:V, reg immediate12:*, reg immediate13:V, reg c22:L, reg i32:I, reg immediate15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i34:I, reg dx9:V, reg i35:*, reg i36:V, reg __6:cls, reg r46:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r47:V, reg i39:I, reg r48:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r49:V, reg i42:I, reg r50:V, reg what:*, reg what1:V, reg soFar3:*, reg soFar4:V, reg match1:cls, reg r51:V, reg is_na1:cls, reg r52:V, reg r53:V, reg c23:L, reg ext16:*, reg ext17:V, reg c24:L, reg i48:I, reg ext19:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i50:I, reg dx11:V, reg i51:*, reg i52:V, reg __7:cls, reg r55:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r56:V, reg i55:I, reg r57:V, reg soFar5:*, reg soFar6:V, reg what2:*, reg what3:V, reg c25:cls, reg r58:V, reg is:cls, reg exti2:*, reg exti3:V, reg p2:p(V +), reg r60:V, reg r61:V, reg c26:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg __8:cls, reg r62:V, reg p3:p(V +), reg r64:V, reg p4:p(V +), reg dQuote1:cls, reg what4:*, reg what5:V, reg p5:p(V +), reg r67:V, reg p6:p(V +), reg dQuote2:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r69:V, reg r70:V, reg exti4:*, reg exti5:V, reg class:cls, reg r71:V, reg p7:p(V +), reg r73:V, reg p8:p(V +), reg r75:V, reg p9:p(V +), reg r77:V, reg i58:I, reg getClassDef:cls, reg __9:cls, reg r79:V, reg p10:p(V +), reg __10:cls, reg r81:V, reg p11:p(V +), reg r83:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r84:V, reg i61:I, reg r85:V, reg superClass:*, reg superClass1:V, reg c27:V, reg c28:L, reg warning:cls, reg gettextf1:cls, reg dQuote3:cls, reg __11:cls, reg r86:V, reg p12:p(V +), reg r88:V, reg p13:p(V +), reg dQuote4:cls, reg what6:*, reg what7:V, reg p14:p(V +), reg r91:V, reg p15:p(V +), reg r93:V, reg p16:p(V +), reg r95:V, reg Recall:cls, reg superClass2:*, reg superClass3:V, reg p17:p(V +), reg soFar7:*, reg soFar8:V, reg p18:p(V +), reg r99:V, reg more:*, reg more1:V, reg c29:L, reg i67:I, reg more3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i69:I, reg dx13:V, reg r100:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r101:V, reg i72:I, reg r102:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r103:V, reg i75:I, reg r104:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r105:V, reg i78:I, reg r106:V, reg whatMore:*, reg whatMore1:V, reg soFar9:*, reg soFar10:V, reg match2:cls, reg r107:V, reg is_na2:cls, reg r108:V, reg all:cls, reg r109:V, reg r110:V, reg c30:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r111:V, reg i83:I, reg r112:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r113:V, reg i86:I, reg r114:V, reg whatMore2:*, reg whatMore3:V, reg soFar11:*, reg soFar12:V, reg match3:cls, reg r115:V, reg is_na3:cls, reg r116:V, reg more4:*, reg more5:V, reg c31:L, reg i88:I, reg more7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i90:I, reg dx15:V, reg r117:V, reg c32:L, reg i92:I, reg dx17:V, reg dr16:V, reg dc8:L, reg dx18:V, reg i94:I, reg dx19:V, reg ok2:*, reg ok3:V, reg __12:cls, reg r118:V, reg l5:*, reg c33:L, reg i96:I, reg dx21:V, reg l7:*, reg dr18:V, reg dc9:L, reg dx23:V, reg i98:I, reg dx25:V, reg r119:V, reg more8:*, reg more9:V, reg c34:L, reg i100:I, reg more11:V, reg dr20:V, reg dc10:L, reg dx26:V, reg i102:I, reg dx27:V, reg r120:V, reg c35:L, reg i104:I, reg dx29:V, reg dr22:V, reg dc11:L, reg dx30:V, reg i106:I, reg dx31:V, reg ok4:*, reg ok5:V, reg __13:cls, reg r121:V, reg l8:*, reg c36:L, reg i108:I, reg dx33:V, reg l10:*, reg dr24:V, reg dc12:L, reg dx35:V, reg i110:I, reg dx37:V, reg r122:V, reg more12:*, reg more13:V, reg c37:L, reg i112:I, reg more15:V, reg dr26:V, reg dc13:L, reg dx38:V, reg i114:I, reg dx39:V, reg r123:V, reg c38:L, reg i116:I, reg dx41:V, reg dr28:V, reg dc14:L, reg dx42:V, reg i118:I, reg dx43:V, reg ok6:*, reg ok7:V, reg __14:cls, reg r124:V, reg l11:*, reg c39:L, reg i120:I, reg dx45:V, reg l13:*, reg dr30:V, reg dc15:L, reg dx47:V, reg i122:I, reg dx49:V, reg r125:V, reg whatMore4:*, reg whatMore5:V, reg c40:L, reg i124:I, reg whatMore7:V, reg dr32:V, reg dc16:L, reg dx50:V, reg i126:I, reg dx51:V, reg ok8:*, reg ok9:V, reg __15:cls, reg r126:V, reg i127:I, reg sym20:cls, reg base20:cls, reg guard20:L, reg r127:V, reg i130:I, reg r128:V, reg whatMore8:*, reg whatMore9:V, reg length2:cls, reg r129:V, reg c41:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r130:V, reg i135:I, reg r131:V, reg soFar13:*, reg soFar14:V, reg whatMore10:*, reg whatMore11:V, reg c42:cls, reg r132:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r133:V, reg i138:I, reg r134:V, reg super:*, reg super1:V, reg c43:L, reg i140:I, reg super3:V, reg dr34:V, reg dc17:L, reg dx53:V, reg i142:I, reg dx54:V, reg r135:V, reg more16:*, reg more17:V, reg c44:L, reg i144:I, reg r137:R, reg more19:V, reg dr36:V, reg dc18:L, reg dx55:V, reg i146:I, reg r139:R, reg dx56:V, reg r140:V, reg r141:V, reg c45:cls, reg r142:V, reg l14:*, reg c46:L, reg i148:I, reg r144:V, reg l16:*, reg dr38:V, reg dc19:L, reg dx57:V, reg i150:I, reg dx58:V, reg r147:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r148:V, reg i153:I, reg r149:V, reg super4:*, reg super5:V, reg c47:L, reg i155:I, reg super7:V, reg dr40:V, reg dc20:L, reg dx59:V, reg i157:I, reg dx60:V, reg r150:V, reg more20:*, reg more21:V, reg c48:L, reg i159:I, reg more23:V, reg dr42:V, reg dc21:L, reg dx61:V, reg i161:I, reg dx62:V, reg r151:V, reg c49:cls, reg r152:V, reg l17:*, reg c50:L, reg i163:I, reg r154:V, reg l19:*, reg dr44:V, reg dc22:L, reg dx63:V, reg i165:I, reg dx64:V, reg r157:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r158:V, reg i168:I, reg r159:V, reg super8:*, reg super9:V, reg c51:L, reg i170:I, reg super11:V, reg dr46:V, reg dc23:L, reg dx65:V, reg i172:I, reg dx66:V, reg r160:V, reg more24:*, reg more25:V, reg c52:L, reg i174:I, reg more27:V, reg dr48:V, reg dc24:L, reg dx67:V, reg i176:I, reg dx68:V, reg r161:V, reg c53:cls, reg r162:V, reg l20:*, reg c54:L, reg i178:I, reg r164:V, reg l22:*, reg dr50:V, reg dc25:L, reg dx69:V, reg i180:I, reg r166:V, reg dx70:V, reg r167:V, reg i181:I, reg super12:*, reg super13:V |
    mkenv;
    st ClassDef = ClassDef;
    soFar_isMissing = missing.0(soFar);
    if soFar_isMissing then L0() else L1(soFar);
  L0():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym ClassDef>, <sym className>);
      return r;
    };
    goto L1(p);
  L1(soFar_orDefault):
    st soFar = soFar_orDefault;
    simpleOnly_isMissing = missing.0(simpleOnly);
    if simpleOnly_isMissing then L2(TRUE) else L2(simpleOnly);
  L2(simpleOnly_orDefault):
    st simpleOnly = simpleOnly_orDefault;
    __1 = ldf `@` in base;
    r2 = dyn __1(<sym ClassDef>, <sym contains>);
    st ext = r2;
    sym = ldf `rep.int`;
    base = ldf `rep.int` in base;
    guard = `==`.4(sym, base);
    if guard then L55() else L56();
  L3(r4):
    st ok = r4;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L62() else L63();
  L55():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L57() else L58();
  L56():
    r3 = dyn base(TRUE, <lang length(ext)>);
    goto L3(r3);
  L4(r6):
    rep_int = ldf `rep.int` in base;
    r8 = dyn rep_int(TRUE, r6);
    check L61() else D2();
  L5(r10):
    s = toForSeq(r10);
    l = length(s);
    i = 0;
    goto L6(i);
  L57():
    ext = ld ext;
    check L59() else D0();
  L58():
    r5 = dyn base1(<sym ext>);
    goto L4(r5);
  L62():
    ext2 = ld ext;
    check L64() else D3();
  L63():
    r9 = dyn base2(<sym ext>);
    goto L5(r9);
  D0():
    deopt 8 [ext];
  D2():
    deopt 13 [r8];
  D3():
    deopt 16 [ext2];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L65() else L13();
  L59():
    ext1 = force? ext;
    checkMissing(ext1);
    length = ldf length in base;
    r7 = dyn length(ext1);
    check L60() else D1();
  L61():
    goto L3(r8);
  L64():
    ext3 = force? ext2;
    checkMissing(ext3);
    r11 = seq_along(ext3);
    goto L5(r11);
  D1():
    deopt 11 [r7];
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    ext4 = ld ext;
    check L66() else D4();
  L60():
    goto L4(r7);
  L65():
    ext8 = ld ext;
    check L84() else D10();
  D4():
    deopt 19 [i2, ext4];
  D10():
    deopt 48 [ext8];
  L66():
    ext5 = force? ext4;
    checkMissing(ext5);
    c1 = `is.object`(ext5);
    if c1 then L67() else L68(i2, ext5);
  L84():
    ext9 = force? ext8;
    checkMissing(ext9);
    c19 = `is.object`(ext9);
    if c19 then L85() else L86(ext9);
  L7(i8, dx1):
    st exti = dx1;
    _isIndirectExtension = ldf `.isIndirectExtension`;
    check L71() else D6();
  L14(dx5):
    st ext = dx5;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L89() else L90();
  L67():
    dr = tryDispatchBuiltin.1("[[", ext5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L69() else L68(i2, dr);
  L68(i6, ext7):
    i9 = ld i;
    check L70() else D5();
  L85():
    dr4 = tryDispatchBuiltin.1("[", ext9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L87() else L86(dr4);
  L86(ext11):
    ok = ld ok;
    check L88() else D11();
  D5():
    deopt 21 [i6, ext7, i9];
  D6():
    deopt 26 [i8];
  D11():
    deopt 50 [ext11, ok];
  L15(r25):
    st immediate = r25;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L93() else L94();
  L69():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(i2, dx);
  L70():
    i10 = force? i9;
    __2 = ldf `[[` in base;
    r12 = dyn __2(ext7, i10);
    goto L7(i6, r12);
  L71():
    p1 = prom<V +>{
      exti = ld exti;
      exti1 = force? exti;
      checkMissing(exti1);
      return exti1;
    };
    r14 = dyn _isIndirectExtension(p1);
    check L72() else D7();
  L87():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx4);
  L88():
    ok1 = force? ok;
    __4 = ldf `[` in base;
    r23 = dyn __4(ext11, ok1);
    goto L14(r23);
  L89():
    ext12 = ld ext;
    check L91() else D12();
  L90():
    r24 = dyn base3(<sym ext>);
    goto L15(r24);
  D7():
    deopt 28 [i8, r14];
  D12():
    deopt 56 [ext12];
  L16(r28):
    st notSoFar = r28;
    immediate2 = ld immediate;
    check L101() else D18();
  L72():
    c2 = `as.logical`(r14);
    if c2 then L8(i8, c2) else L73();
  L91():
    ext13 = force? ext12;
    checkMissing(ext13);
    names = ldf names in base;
    r26 = dyn names(ext13);
    check L92() else D13();
  L93():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L95() else L96();
  L94():
    r27 = dyn base4(<lang match(immediate, soFar)>);
    goto L16(r27);
  D13():
    deopt 59 [r26];
  D18():
    deopt 76 [immediate2];
  L8(i11, c3):
    c17 = `as.logical`(c3);
    if c17 then L78() else L10();
  L17(r30):
    is_na = ldf `is.na` in base;
    r32 = dyn is_na(r30);
    check L100() else D17();
  L73():
    simpleOnly1 = ld simpleOnly;
    check L74() else D8();
  L92():
    goto L15(r26);
  L95():
    immediate = ld immediate;
    check L97() else D14();
  L96():
    r29 = dyn base5(<sym immediate>, <sym soFar>);
    goto L17(r29);
  L101():
    immediate3 = force? immediate2;
    checkMissing(immediate3);
    c20 = `is.object`(immediate3);
    if c20 then L102() else L103(immediate3);
  D8():
    deopt 29 [i8, c2, simpleOnly1];
  D14():
    deopt 65 [immediate];
  D17():
    deopt 74 [r32];
  L10():
    goto L12(i11);
  L12(i25):
    goto L6(i25);
  L18(dx7):
    st immediate = dx7;
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L106() else L107();
  L74():
    simpleOnly2 = force? simpleOnly1;
    checkMissing(simpleOnly2);
    c5 = `as.logical`(simpleOnly2);
    if c5 then L75() else L9(i8, c2, c5);
  L78():
    l1 = ld ok;
    c18 = `is.object`(l1);
    if c18 then L79() else L80(i11, FALSE, l1);
  L97():
    immediate1 = force? immediate;
    checkMissing(immediate1);
    soFar1 = ld soFar;
    check L98() else D15();
  L100():
    goto L16(r32);
  L102():
    dr6 = tryDispatchBuiltin.1("[", immediate3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L104() else L103(dr6);
  L103(immediate5):
    notSoFar = ld notSoFar;
    check L105() else D19();
  D15():
    deopt 67 [soFar1];
  D19():
    deopt 78 [immediate5, notSoFar];
  L9(i14, c8, c9):
    c14 = `as.logical`(c9);
    c15 = `||`(c8, c14);
    goto L8(i14, c15);
  L11(i22, r20, dx3):
    st ok = dx3;
    goto L12(i22);
  L19(r35):
    st super = r35;
    sym9 = ldf seq_along;
    base9 = ldf seq_along in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L118() else L119();
  L75():
    __3 = ldf `@` in base;
    r15 = dyn __3(<sym exti>, <sym simple>);
    r16 = `!`(r15);
    c10 = `as.logical`(r16);
    c11 = `&&`(c5, c10);
    goto L9(i8, c2, c11);
  L79():
    dr2 = tryDispatchBuiltin.0("[<-", l1, FALSE);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L81() else L80(i11, FALSE, dr2);
  L80(i20, r18, l3):
    i23 = ld i;
    check L82() else D9();
  L98():
    soFar2 = force? soFar1;
    checkMissing(soFar2);
    match = ldf match in base;
    r31 = dyn match(immediate1, soFar2, NA_INT, NULL);
    check L99() else D16();
  L104():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L18(dx6);
  L105():
    notSoFar1 = force? notSoFar;
    __5 = ldf `[` in base;
    r33 = dyn __5(immediate5, notSoFar1);
    goto L18(r33);
  L106():
    immediate6 = ld immediate;
    check L108() else D20();
  L107():
    r34 = dyn base6[label, depth, ext](<sym immediate>, <lang rep.int(1.0, length(immediate))>, <sym ext>);
    goto L19(r34);
  D9():
    deopt 39 [i20, r18, l3, FALSE, i23];
  D16():
    deopt 72 [r31];
  D20():
    deopt 84 [immediate6];
  L22(r44):
    s1 = toForSeq(r44);
    l4 = length(s1);
    i26 = 0;
    goto L23(i26);
  L81():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(i11, FALSE, dx2);
  L82():
    i24 = force? i23;
    ___ = ldf `[<-` in base;
    r21 = dyn ___(l3, FALSE, i24);
    goto L11(i20, r18, r21);
  L99():
    goto L17(r31);
  L108():
    immediate7 = force? immediate6;
    checkMissing(immediate7);
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L109() else L110();
  L118():
    immediate10 = ld immediate;
    check L120() else D26();
  L119():
    r43 = dyn base9(<sym immediate>);
    goto L22(r43);
  D26():
    deopt 106 [immediate10];
  L20(r37):
    ext14 = ld ext;
    check L116() else D24();
  L23(i27):
    i28 = `+`.1(i27, 1);
    c21 = `<`.1(l4, i28);
    if c21 then L121() else L54();
  L109():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L111() else L112();
  L110():
    r36 = dyn base7(1.0, <lang length(immediate)>);
    goto L20(r36);
  L120():
    immediate11 = force? immediate10;
    checkMissing(immediate11);
    r45 = seq_along(immediate11);
    goto L22(r45);
  D24():
    deopt 99 [ext14];
  L21(r39):
    rep_int1 = ldf `rep.int` in base;
    r41 = dyn rep_int1(1.0, r39);
    check L115() else D23();
  L54():
    x1 = `[[`(s1, i28, NULL, TRUE);
    st i = x1;
    immediate12 = ld immediate;
    check L122() else D27();
  L111():
    immediate8 = ld immediate;
    check L113() else D21();
  L112():
    r38 = dyn base8(<sym immediate>);
    goto L21(r38);
  L116():
    ext15 = force? ext14;
    checkMissing(ext15);
    list = ldf list in base;
    r42 = dyn list(immediate7, r37, ext15);
    check L117() else D25();
  L121():
    super12 = ld super;
    check L298() else D81();
  D21():
    deopt 92 [immediate8];
  D23():
    deopt 97 [r41];
  D25():
    deopt 103 [r42];
  D27():
    deopt 109 [i28, immediate12];
  D81():
    deopt 324 [super12];
  L113():
    immediate9 = force? immediate8;
    checkMissing(immediate9);
    length1 = ldf length in base;
    r40 = dyn length1(immediate9);
    check L114() else D22();
  L115():
    goto L20(r41);
  L117():
    goto L19(r42);
  L122():
    immediate13 = force? immediate12;
    checkMissing(immediate13);
    c22 = `is.object`(immediate13);
    if c22 then L123() else L124(i28, immediate13);
  L298():
    super13 = force? super12;
    checkMissing(super13);
    popenv;
    return super13;
  D22():
    deopt 95 [r40];
  L24(i34, dx9):
    st what = dx9;
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L127() else L128();
  L114():
    goto L21(r40);
  L123():
    dr8 = tryDispatchBuiltin.1("[[", immediate13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L125() else L124(i28, dr8);
  L124(i32, immediate15):
    i35 = ld i;
    check L126() else D28();
  D28():
    deopt 111 [i32, immediate15, i35];
  L25(i39, r48):
    r53 = `!`(r48);
    c23 = `as.logical`(r53);
    if c23 then L135() else L27();
  L125():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L24(i28, dx8);
  L126():
    i36 = force? i35;
    __6 = ldf `[[` in base;
    r46 = dyn __6(immediate15, i36);
    goto L24(i32, r46);
  L127():
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L129() else L130();
  L128():
    r47 = dyn base10(<lang match(what, soFar)>);
    goto L25(i34, r47);
  L26(i42, r50):
    is_na1 = ldf `is.na` in base;
    r52 = dyn is_na1(r50);
    check L134() else D32();
  L27():
    ext16 = ld ext;
    check L138() else D33();
  L129():
    what = ld what;
    check L131() else D29();
  L130():
    r49 = dyn base11(<sym what>, <sym soFar>);
    goto L26(i34, r49);
  L135():
    goto L23(i39);
  D29():
    deopt 119 [i34, what];
  D32():
    deopt 128 [i42, r52];
  D33():
    deopt 134 [i39, ext16];
  L131():
    what1 = force? what;
    checkMissing(what1);
    soFar3 = ld soFar;
    check L132() else D30();
  L134():
    goto L25(i42, r52);
  L138():
    ext17 = force? ext16;
    checkMissing(ext17);
    c24 = `is.object`(ext17);
    if c24 then L139() else L140(i39, ext17);
  D30():
    deopt 121 [i34, soFar3];
  L29(i50, dx11):
    st exti = dx11;
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L143() else L144();
  L132():
    soFar4 = force? soFar3;
    checkMissing(soFar4);
    match1 = ldf match in base;
    r51 = dyn match1(what1, soFar4, NA_INT, NULL);
    check L133() else D31();
  L139():
    dr10 = tryDispatchBuiltin.1("[[", ext17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L141() else L140(i39, dr10);
  L140(i48, ext19):
    i51 = ld i;
    check L142() else D34();
  D31():
    deopt 126 [i34, r51];
  D34():
    deopt 136 [i48, ext19, i51];
  L30(i55, r57):
    st soFar = r57;
    is = ldf is;
    check L148() else D38();
  L133():
    goto L26(i34, r51);
  L141():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L29(i39, dx10);
  L142():
    i52 = force? i51;
    __7 = ldf `[[` in base;
    r55 = dyn __7(ext19, i52);
    goto L29(i48, r55);
  L143():
    soFar5 = ld soFar;
    check L145() else D35();
  L144():
    r56 = dyn base12(<sym soFar>, <sym what>);
    goto L30(i50, r56);
  D35():
    deopt 142 [i50, soFar5];
  D38():
    deopt 150 [i55];
  L145():
    soFar6 = force? soFar5;
    checkMissing(soFar6);
    what2 = ld what;
    check L146() else D36();
  L148():
    p2 = prom<V +>{
      exti2 = ld exti;
      exti3 = force? exti2;
      checkMissing(exti3);
      return exti3;
    };
    r60 = dyn is(p2, "SClassExtension");
    check L149() else D39();
  D36():
    deopt 144 [i50, what2];
  D39():
    deopt 153 [i55, r60];
  L146():
    what3 = force? what2;
    checkMissing(what3);
    c25 = ldf c in base;
    r58 = dyn c25(soFar6, what3);
    check L147() else D37();
  L149():
    r61 = `!`(r60);
    c26 = `as.logical`(r61);
    if c26 then L150() else L31();
  D37():
    deopt 147 [i50, r58];
  L31():
    goto L32(i55);
  L32(i58):
    getClassDef = ldf getClassDef;
    check L154() else D42();
  L147():
    goto L30(i50, r58);
  L150():
    stop = ldf stop;
    check L151() else D40();
  D40():
    deopt 156 [i55];
  D42():
    deopt 164 [i58];
  L151():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        dQuote = ldf dQuote;
        p3 = prom<V +>{
          __8 = ldf `@` in base;
          r62 = dyn __8(<sym ClassDef>, <sym className>);
          return r62;
        };
        r64 = dyn dQuote(p3);
        return r64;
      };
      p6 = prom<V +>{
        dQuote1 = ldf dQuote;
        p5 = prom<V +>{
          what4 = ld what;
          what5 = force? what4;
          checkMissing(what5);
          return what5;
        };
        r67 = dyn dQuote1(p5);
        return r67;
      };
      p8 = prom<V +>{
        dQuote2 = ldf dQuote;
        p7 = prom<V +>{
          sym13 = ldf class;
          base13 = ldf class in base;
          guard13 = `==`.4(sym13, base13);
          if guard13 then L1() else L2();
        L0(r70):
          return r70;
        L1():
          exti4 = ld exti;
          exti5 = force? exti4;
          checkMissing(exti5);
          class = ldf class in base;
          r71 = dyn class(exti5);
          goto L0(r71);
        L2():
          r69 = dyn base13(<sym exti>);
          goto L0(r69);
        };
        r73 = dyn dQuote2(p7);
        return r73;
      };
      r75 = dyn gettextf("in definition of class %s, information for superclass %s is of class %s (expected \"SClassExtension\")", p4, p6, p8);
      return r75;
    };
    r77 = dyn stop[, domain](p9, NA_LGL);
    check L152() else D41();
  L154():
    p10 = prom<V +>{
      __9 = ldf `@` in base;
      r79 = dyn __9(<sym exti>, <sym superClass>);
      return r79;
    };
    p11 = prom<V +>{
      __10 = ldf `@` in base;
      r81 = dyn __10(<sym exti>, <sym package>);
      return r81;
    };
    r83 = dyn getClassDef[, package](p10, p11);
    check L155() else D43();
  D41():
    deopt 160 [i55, r77];
  D43():
    deopt 168 [i58, r83];
  L152():
    goto L32(i55);
  L155():
    st superClass = r83;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L156() else L157();
  L33(i61, r85):
    c28 = `as.logical`(r85);
    if c28 then L159() else L34();
  L156():
    superClass = ld superClass;
    check L158() else D44();
  L157():
    r84 = dyn base14(<sym superClass>);
    goto L33(i58, r84);
  D44():
    deopt 171 [i58, superClass];
  L34():
    Recall = ldf Recall;
    check L164() else D47();
  L158():
    superClass1 = force? superClass;
    checkMissing(superClass1);
    c27 = `==`(superClass1, NULL);
    goto L33(i58, c27);
  L159():
    warning = ldf warning;
    check L160() else D45();
  D45():
    deopt 175 [i61];
  D47():
    deopt 185 [i61];
  L160():
    p16 = prom<V +>{
      gettextf1 = ldf gettextf;
      p13 = prom<V +>{
        dQuote3 = ldf dQuote;
        p12 = prom<V +>{
          __11 = ldf `@` in base;
          r86 = dyn __11(<sym ClassDef>, <sym className>);
          return r86;
        };
        r88 = dyn dQuote3(p12);
        return r88;
      };
      p15 = prom<V +>{
        dQuote4 = ldf dQuote;
        p14 = prom<V +>{
          what6 = ld what;
          what7 = force? what6;
          checkMissing(what7);
          return what7;
        };
        r91 = dyn dQuote4(p14);
        return r91;
      };
      r93 = dyn gettextf1("class %s extends an undefined class, %s", p13, p15);
      return r93;
    };
    r95 = dyn warning[, domain](p16, NA_LGL);
    check L161() else D46();
  L164():
    p17 = prom<V +>{
      superClass2 = ld superClass;
      superClass3 = force? superClass2;
      checkMissing(superClass3);
      return superClass3;
    };
    p18 = prom<V +>{
      soFar7 = ld soFar;
      soFar8 = force? soFar7;
      checkMissing(soFar8);
      return soFar8;
    };
    r99 = dyn Recall(p17, p18);
    check L165() else D48();
  D46():
    deopt 179 [i61, r95];
  D48():
    deopt 188 [i61, r99];
  L161():
    goto L23(i61);
  L165():
    st more = r99;
    more = ld more;
    check L166() else D49();
  D49():
    deopt 190 [i61, more];
  L166():
    more1 = force? more;
    checkMissing(more1);
    c29 = `is.object`(more1);
    if c29 then L168() else L169(i61, more1);
  L167(i69, dx13):
    st whatMore = dx13;
    sym15 = ldf all;
    base15 = ldf all in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L171() else L172();
  L168():
    dr12 = tryDispatchBuiltin.1("$", more1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L170() else L169(i61, dr12);
  L169(i67, more3):
    r100 = `$`(more3, <sym label>);
    goto L167(i67, r100);
  L36(i72, r102):
    r110 = `!`(r102);
    c30 = `as.logical`(r110);
    if c30 then L182() else L39();
  L170():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L167(i61, dx12);
  L171():
    sym16 = ldf `is.na`;
    base16 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L173() else L174();
  L172():
    r101 = dyn base15(<lang is.na(match(whatMore, soFar))>);
    goto L36(i69, r101);
  L37(i75, r104):
    all = ldf all in base;
    r109 = dyn all(r104);
    check L181() else D54();
  L39():
    goto L46(i72);
  L46(i127):
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L236() else L237();
  L173():
    sym17 = ldf match;
    base17 = ldf match in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L175() else L176();
  L174():
    r103 = dyn base16(<lang match(whatMore, soFar)>);
    goto L37(i69, r103);
  L182():
    sym18 = ldf `is.na`;
    base18 = ldf `is.na` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L183() else L184();
  D54():
    deopt 211 [i75, r109];
  L38(i78, r106):
    is_na2 = ldf `is.na` in base;
    r108 = dyn is_na2(r106);
    check L180() else D53();
  L40(i83, r112):
    st ok = r112;
    more4 = ld more;
    check L191() else D59();
  L47(i130, r128):
    c41 = `as.logical`(r128);
    if c41 then L240() else L48();
  L175():
    whatMore = ld whatMore;
    check L177() else D50();
  L176():
    r105 = dyn base17(<sym whatMore>, <sym soFar>);
    goto L38(i69, r105);
  L181():
    goto L36(i75, r109);
  L183():
    sym19 = ldf match;
    base19 = ldf match in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L185() else L186();
  L184():
    r111 = dyn base18(<lang match(whatMore, soFar)>);
    goto L40(i72, r111);
  L236():
    whatMore8 = ld whatMore;
    check L238() else D67();
  L237():
    r127 = dyn base20(<sym whatMore>);
    goto L47(i127, r127);
  D50():
    deopt 200 [i69, whatMore];
  D53():
    deopt 209 [i78, r108];
  D59():
    deopt 228 [i83, more4];
  D67():
    deopt 265 [i127, whatMore8];
  L41(i86, r114):
    is_na3 = ldf `is.na` in base;
    r116 = dyn is_na3(r114);
    check L190() else D58();
  L48():
    goto L53(i130);
  L53(i181):
    goto L23(i181);
  L177():
    whatMore1 = force? whatMore;
    checkMissing(whatMore1);
    soFar9 = ld soFar;
    check L178() else D51();
  L180():
    goto L37(i78, r108);
  L185():
    whatMore2 = ld whatMore;
    check L187() else D55();
  L186():
    r113 = dyn base19(<sym whatMore>, <sym soFar>);
    goto L41(i72, r113);
  L191():
    more5 = force? more4;
    checkMissing(more5);
    c31 = `is.object`(more5);
    if c31 then L193() else L194(i83, more5);
  L238():
    whatMore9 = force? whatMore8;
    checkMissing(whatMore9);
    length2 = ldf length in base;
    r129 = dyn length2(whatMore9);
    check L239() else D68();
  L240():
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L241() else L242();
  D51():
    deopt 202 [i69, soFar9];
  D55():
    deopt 217 [i72, whatMore2];
  D58():
    deopt 226 [i86, r116];
  D68():
    deopt 268 [i127, r129];
  L49(i135, r131):
    st soFar = r131;
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L246() else L247();
  L178():
    soFar10 = force? soFar9;
    checkMissing(soFar10);
    match2 = ldf match in base;
    r107 = dyn match2(whatMore1, soFar10, NA_INT, NULL);
    check L179() else D52();
  L187():
    whatMore3 = force? whatMore2;
    checkMissing(whatMore3);
    soFar11 = ld soFar;
    check L188() else D56();
  L190():
    goto L40(i86, r116);
  L192(i90, dx15):
    c32 = `is.object`(dx15);
    if c32 then L196() else L197(i90, dx15);
  L193():
    dr14 = tryDispatchBuiltin.1("$", more5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L195() else L194(i83, dr14);
  L194(i88, more7):
    r117 = `$`(more7, <sym depth>);
    goto L192(i88, r117);
  L239():
    goto L47(i127, r129);
  L241():
    soFar13 = ld soFar;
    check L243() else D69();
  L242():
    r130 = dyn base21(<sym soFar>, <sym whatMore>);
    goto L49(i130, r130);
  D52():
    deopt 207 [i69, r107];
  D56():
    deopt 219 [i72, soFar11];
  D69():
    deopt 271 [i130, soFar13];
  L42(i94, dx19):
    l5 = ld more;
    c33 = `is.object`(l5);
    if c33 then L201() else L202(i94, dx19, l5);
  L50(i138, r134):
    l14 = ld super;
    c46 = `is.object`(l14);
    if c46 then L260() else L261(i138, r134, l14);
  L179():
    goto L38(i69, r107);
  L188():
    soFar12 = force? soFar11;
    checkMissing(soFar12);
    match3 = ldf match in base;
    r115 = dyn match3(whatMore3, soFar12, NA_INT, NULL);
    check L189() else D57();
  L195():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L192(i83, dx14);
  L196():
    dr16 = tryDispatchBuiltin.1("[", dx15);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L198() else L197(i90, dr16);
  L197(i92, dx17):
    ok2 = ld ok;
    check L199() else D60();
  L243():
    soFar14 = force? soFar13;
    checkMissing(soFar14);
    whatMore10 = ld whatMore;
    check L244() else D70();
  L246():
    super = ld super;
    check L248() else D72();
  L247():
    r133 = dyn base22(<lang `$`(super, depth)>, <lang `+`(1.0, `$`(more, depth))>);
    goto L50(i135, r133);
  D57():
    deopt 224 [i72, r115];
  D60():
    deopt 231 [i92, dx17, ok2];
  D70():
    deopt 273 [i130, whatMore10];
  D72():
    deopt 280 [i135, super];
  L189():
    goto L41(i72, r115);
  L198():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L42(i90, dx18);
  L199():
    ok3 = force? ok2;
    __12 = ldf `[` in base;
    r118 = dyn __12(dx17, ok3);
    goto L42(i92, r118);
  L200(i98, dx25):
    st more = dx25;
    more8 = ld more;
    check L204() else D61();
  L201():
    dr18 = tryDispatchBuiltin.0("$<-", l5, dx19);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L203() else L202(i94, dx19, dr18);
  L202(i96, dx21, l7):
    r119 = `$<-`(l7, <sym depth>, dx19);
    goto L200(i96, r119);
  L244():
    whatMore11 = force? whatMore10;
    checkMissing(whatMore11);
    c42 = ldf c in base;
    r132 = dyn c42(soFar14, whatMore11);
    check L245() else D71();
  L248():
    super1 = force? super;
    checkMissing(super1);
    c43 = `is.object`(super1);
    if c43 then L250() else L251(i135, super1);
  L259(i150, dx58):
    st super = dx58;
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L263() else L264();
  L260():
    dr38 = tryDispatchBuiltin.0("$<-", l14, r134);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L262() else L261(i138, r134, dr38);
  L261(i148, r144, l16):
    r147 = `$<-`(l16, <sym depth>, r134);
    goto L259(i148, r147);
  D61():
    deopt 237 [i98, more8];
  D71():
    deopt 276 [i130, r132];
  L51(i153, r149):
    l17 = ld super;
    c50 = `is.object`(l17);
    if c50 then L277() else L278(i153, r149, l17);
  L203():
    dx23 = getTryDispatchBuiltinValue(dr18);
    goto L200(i94, dx23);
  L204():
    more9 = force? more8;
    checkMissing(more9);
    c34 = `is.object`(more9);
    if c34 then L206() else L207(i98, more9);
  L245():
    goto L49(i130, r132);
  L249(i142, dx54):
    more16 = ld more;
    check L253() else D73();
  L250():
    dr34 = tryDispatchBuiltin.1("$", super1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L252() else L251(i135, dr34);
  L251(i140, super3):
    r135 = `$`(super3, <sym depth>);
    goto L249(i140, r135);
  L262():
    dx57 = getTryDispatchBuiltinValue(dr38);
    goto L259(i138, dx57);
  L263():
    super4 = ld super;
    check L265() else D75();
  L264():
    r148 = dyn base23(<lang `$`(super, label)>, <lang `$`(more, label)>);
    goto L51(i150, r148);
  D73():
    deopt 284 [i142, 1.0, more16];
  D75():
    deopt 295 [i150, super4];
  L205(i102, dx27):
    c35 = `is.object`(dx27);
    if c35 then L209() else L210(i102, dx27);
  L206():
    dr20 = tryDispatchBuiltin.1("$", more9);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L208() else L207(i98, dr20);
  L207(i100, more11):
    r120 = `$`(more11, <sym label>);
    goto L205(i100, r120);
  L252():
    dx53 = getTryDispatchBuiltinValue(dr34);
    goto L249(i135, dx53);
  L253():
    more17 = force? more16;
    checkMissing(more17);
    c44 = `is.object`(more17);
    if c44 then L255() else L256(i142, 1.0, more17);
  L265():
    super5 = force? super4;
    checkMissing(super5);
    c47 = `is.object`(super5);
    if c47 then L267() else L268(i150, super5);
  L276(i165, dx64):
    st super = dx64;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L280() else L281();
  L277():
    dr44 = tryDispatchBuiltin.0("$<-", l17, r149);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L279() else L278(i153, r149, dr44);
  L278(i163, r154, l19):
    r157 = `$<-`(l19, <sym label>, r149);
    goto L276(i163, r157);
  L43(i106, dx31):
    l8 = ld more;
    c36 = `is.object`(l8);
    if c36 then L214() else L215(i106, dx31, l8);
  L52(i168, r159):
    l20 = ld super;
    c54 = `is.object`(l20);
    if c54 then L294() else L295(i168, r159, l20);
  L208():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L205(i98, dx26);
  L209():
    dr22 = tryDispatchBuiltin.1("[", dx27);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L211() else L210(i102, dr22);
  L210(i104, dx29):
    ok4 = ld ok;
    check L212() else D62();
  L254(i146, r139, dx56):
    r141 = `+`(r139, dx56);
    c45 = ldf c in base;
    r142 = dyn c45(dx54, r141);
    check L258() else D74();
  L255():
    dr36 = tryDispatchBuiltin.1("$", more17);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L257() else L256(i142, 1.0, dr36);
  L256(i144, r137, more19):
    r140 = `$`(more19, <sym depth>);
    goto L254(i144, r137, r140);
  L266(i157, dx60):
    more20 = ld more;
    check L270() else D76();
  L267():
    dr40 = tryDispatchBuiltin.1("$", super5);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L269() else L268(i150, dr40);
  L268(i155, super7):
    r150 = `$`(super7, <sym label>);
    goto L266(i155, r150);
  L279():
    dx63 = getTryDispatchBuiltinValue(dr44);
    goto L276(i153, dx63);
  L280():
    super8 = ld super;
    check L282() else D78();
  L281():
    r158 = dyn base24(<lang `$`(super, ext)>, <lang `$`(more, ext)>);
    goto L52(i165, r158);
  D62():
    deopt 240 [i104, dx29, ok4];
  D74():
    deopt 289 [i146, r142];
  D76():
    deopt 298 [i157, more20];
  D78():
    deopt 308 [i165, super8];
  L211():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L43(i102, dx30);
  L212():
    ok5 = force? ok4;
    __13 = ldf `[` in base;
    r121 = dyn __13(dx29, ok5);
    goto L43(i104, r121);
  L213(i110, dx37):
    st more = dx37;
    more12 = ld more;
    check L217() else D63();
  L214():
    dr24 = tryDispatchBuiltin.0("$<-", l8, dx31);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L216() else L215(i106, dx31, dr24);
  L215(i108, dx33, l10):
    r122 = `$<-`(l10, <sym label>, dx31);
    goto L213(i108, r122);
  L257():
    dx55 = getTryDispatchBuiltinValue(dr36);
    goto L254(i142, 1.0, dx55);
  L258():
    goto L50(i146, r142);
  L269():
    dx59 = getTryDispatchBuiltinValue(dr40);
    goto L266(i150, dx59);
  L270():
    more21 = force? more20;
    checkMissing(more21);
    c48 = `is.object`(more21);
    if c48 then L272() else L273(i157, more21);
  L282():
    super9 = force? super8;
    checkMissing(super9);
    c51 = `is.object`(super9);
    if c51 then L284() else L285(i165, super9);
  L293(i180, r166, dx70):
    st super = dx70;
    goto L53(i180);
  L294():
    dr50 = tryDispatchBuiltin.0("$<-", l20, r159);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L296() else L295(i168, r159, dr50);
  L295(i178, r164, l22):
    r167 = `$<-`(l22, <sym ext>, r159);
    goto L293(i178, r164, r167);
  D63():
    deopt 246 [i110, more12];
  L216():
    dx35 = getTryDispatchBuiltinValue(dr24);
    goto L213(i106, dx35);
  L217():
    more13 = force? more12;
    checkMissing(more13);
    c37 = `is.object`(more13);
    if c37 then L219() else L220(i110, more13);
  L271(i161, dx62):
    c49 = ldf c in base;
    r152 = dyn c49(dx60, dx62);
    check L275() else D77();
  L272():
    dr42 = tryDispatchBuiltin.1("$", more21);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L274() else L273(i157, dr42);
  L273(i159, more23):
    r151 = `$`(more23, <sym label>);
    goto L271(i159, r151);
  L283(i172, dx66):
    more24 = ld more;
    check L287() else D79();
  L284():
    dr46 = tryDispatchBuiltin.1("$", super9);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L286() else L285(i165, dr46);
  L285(i170, super11):
    r160 = `$`(super11, <sym ext>);
    goto L283(i170, r160);
  L296():
    dx69 = getTryDispatchBuiltinValue(dr50);
    goto L293(i168, r159, dx69);
  D77():
    deopt 302 [i161, r152];
  D79():
    deopt 311 [i172, more24];
  L218(i114, dx39):
    c38 = `is.object`(dx39);
    if c38 then L222() else L223(i114, dx39);
  L219():
    dr26 = tryDispatchBuiltin.1("$", more13);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L221() else L220(i110, dr26);
  L220(i112, more15):
    r123 = `$`(more15, <sym ext>);
    goto L218(i112, r123);
  L274():
    dx61 = getTryDispatchBuiltinValue(dr42);
    goto L271(i157, dx61);
  L275():
    goto L51(i161, r152);
  L286():
    dx65 = getTryDispatchBuiltinValue(dr46);
    goto L283(i165, dx65);
  L287():
    more25 = force? more24;
    checkMissing(more25);
    c52 = `is.object`(more25);
    if c52 then L289() else L290(i172, more25);
  L44(i118, dx43):
    l11 = ld more;
    c39 = `is.object`(l11);
    if c39 then L227() else L228(i118, dx43, l11);
  L221():
    dx38 = getTryDispatchBuiltinValue(dr26);
    goto L218(i110, dx38);
  L222():
    dr28 = tryDispatchBuiltin.1("[", dx39);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L224() else L223(i114, dr28);
  L223(i116, dx41):
    ok6 = ld ok;
    check L225() else D64();
  L288(i176, dx68):
    c53 = ldf c in base;
    r162 = dyn c53(dx66, dx68);
    check L292() else D80();
  L289():
    dr48 = tryDispatchBuiltin.1("$", more25);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L291() else L290(i172, dr48);
  L290(i174, more27):
    r161 = `$`(more27, <sym ext>);
    goto L288(i174, r161);
  D64():
    deopt 249 [i116, dx41, ok6];
  D80():
    deopt 315 [i176, r162];
  L224():
    dx42 = getTryDispatchBuiltinValue(dr28);
    goto L44(i114, dx42);
  L225():
    ok7 = force? ok6;
    __14 = ldf `[` in base;
    r124 = dyn __14(dx41, ok7);
    goto L44(i116, r124);
  L226(i122, dx49):
    st more = dx49;
    whatMore4 = ld whatMore;
    check L230() else D65();
  L227():
    dr30 = tryDispatchBuiltin.0("$<-", l11, dx43);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L229() else L228(i118, dx43, dr30);
  L228(i120, dx45, l13):
    r125 = `$<-`(l13, <sym ext>, dx43);
    goto L226(i120, r125);
  L291():
    dx67 = getTryDispatchBuiltinValue(dr48);
    goto L288(i172, dx67);
  L292():
    goto L52(i176, r162);
  D65():
    deopt 255 [i122, whatMore4];
  L229():
    dx47 = getTryDispatchBuiltinValue(dr30);
    goto L226(i118, dx47);
  L230():
    whatMore5 = force? whatMore4;
    checkMissing(whatMore5);
    c40 = `is.object`(whatMore5);
    if c40 then L231() else L232(i122, whatMore5);
  L45(i126, dx51):
    st whatMore = dx51;
    goto L46(i126);
  L231():
    dr32 = tryDispatchBuiltin.1("[", whatMore5);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L233() else L232(i122, dr32);
  L232(i124, whatMore7):
    ok8 = ld ok;
    check L234() else D66();
  D66():
    deopt 257 [i124, whatMore7, ok8];
  L233():
    dx50 = getTryDispatchBuiltinValue(dr32);
    goto L45(i122, dx50);
  L234():
    ok9 = force? ok8;
    __15 = ldf `[` in base;
    r126 = dyn __15(whatMore7, ok9);
    goto L45(i124, r126);
  }
}