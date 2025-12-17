fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner890012476;
    st `summary.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner890012476(object, `...`, digits, `quantile.type`) {
  (reg object:*, reg ddd:dots, reg digits:*, reg quantile_type:*) -+> V { var object:*, var `...`:dots?, var digits:*, var `quantile.type`:*, reg quantile_type_isMissing:L, reg quantile_type_orDefault:*, reg is_factor:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg c:L, reg summary_factor:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg object5:*, reg object6:V, reg is_matrix:cls, reg r8:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c2:L, reg summary_matrix:cls, reg object7:*, reg object8:V, reg p2:p(V +), reg quantile_type1:*, reg quantile_type2:V, reg p3:p(V +), reg ddd2:dots?, reg r14:V, reg summary_matrix1:cls, reg object9:*, reg object10:V, reg p4:p(V +), reg digits1:*, reg digits2:V, reg p5:p(V +), reg quantile_type3:*, reg quantile_type4:V, reg p6:p(V +), reg ddd3:dots?, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg object11:*, reg object12:V, reg c3:L, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg table:cls, reg object13:*, reg object14:V, reg p7:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg tb:*, reg tb1:V, reg dimnames:cls, reg r31:V, reg c5:L, reg r33:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r34:V, reg c6:V, reg r35:V, reg c7:L, reg c9:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg c12:L, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg c15:L, reg r39:V, reg n:*, reg n1:V, reg is_na:cls, reg r40:V, reg any:cls, reg r41:V, reg c16:L, reg c17:V, reg c19:L, reg l:*, reg dimnames1:cls, reg r42:V, reg c20:L, reg r47:S, reg l2:*, reg r48:V, reg r49:S, reg r50:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r54:S, reg l4:*, reg r55:V, reg r56:S, reg dx3:V, reg __1:cls, reg r57:V, reg c21:L, reg r60:S, reg l6:*, reg r61:V, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg r64:S, reg l8:*, reg r65:V, reg dx7:V, reg iN:*, reg iN1:V, reg ___:cls, reg r66:V, reg c22:L, reg r69:S, reg l10:*, reg r70:V, reg dr6:V, reg dc3:L, reg dx8:V, reg r72:S, reg l12:*, reg dx9:V, reg ____:cls, reg r73:V, reg dimnames__:cls, reg r74:V, reg tb2:*, reg tb3:V, reg c23:cls, reg r76:V, reg r77:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r78:V, reg r79:V, reg object15:*, reg object16:V, reg is_numeric:cls, reg r80:V, reg c24:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r81:V, reg r82:V, reg object17:*, reg object18:V, reg is_na1:cls, reg r83:V, reg object19:*, reg object20:V, reg c25:L, reg object22:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg nas:*, reg nas1:V, reg r84:V, reg __2:cls, reg r85:V, reg __3:cls, reg r86:V, reg r87:cls, reg object23:*, reg object24:V, reg p8:p(V +), reg quantile_type5:*, reg quantile_type6:V, reg p9:p(V +), reg r90:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r91:V, reg r92:V, reg qq:*, reg qq1:V, reg c26:L, reg qq3:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r93:V, reg mean:cls, reg object25:*, reg object26:V, reg p10:p(V +), reg r95:V, reg qq4:*, reg qq5:V, reg c27:L, reg qq7:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __5:cls, reg r96:V, reg c28:cls, reg r97:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r98:V, reg r99:V, reg missing1:cls, reg r100:V, reg r101:V, reg c29:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r102:V, reg r103:V, reg signif:cls, reg r104:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r106:V, reg r107:V, reg c30:cls, reg r108:V, reg l13:*, reg names__:cls, reg r109:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r110:V, reg r111:V, reg nas2:*, reg nas3:V, reg any1:cls, reg r112:V, reg c31:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r113:V, reg r114:V, reg qq8:*, reg qq9:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r115:V, reg r116:V, reg nas4:*, reg nas5:V, reg sum:cls, reg r117:V, reg c32:cls, reg r118:V, reg r119:V, reg qq10:*, reg qq11:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r120:V, reg r121:V, reg object27:*, reg object28:V, reg is_recursive:cls, reg r122:V, reg c33:L, reg c35:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r123:V, reg c38:L, reg r124:V, reg object29:*, reg object30:V, reg is_language:cls, reg r125:V, reg r126:V, reg c39:L, reg c40:V, reg c42:L, reg c44:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r127:V, reg c47:L, reg r128:V, reg object31:*, reg object32:V, reg length:cls, reg r129:V, reg c48:L, reg c49:V, reg c51:L, reg array:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r130:V, reg r131:V, reg n2:*, reg n3:V, reg c52:cls, reg r132:V, reg p11:p(V +), reg sym21:cls, reg base21:cls, reg guard21:L, reg r134:V, reg r135:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r136:V, reg r137:V, reg object33:*, reg object34:V, reg names:cls, reg r138:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r139:V, reg r140:V, reg c53:cls, reg r141:V, reg list:cls, reg r142:V, reg p12:p(V +), reg r144:V, reg numeric:cls, reg n4:*, reg n5:V, reg p13:p(V +), reg r146:V, reg n6:*, reg n7:V, reg r147:V, reg s:V, reg l14:I, reg i:I, reg i1:I, reg i2:I, reg c54:L, reg x:V, reg object35:*, reg object36:V, reg c55:L, reg i6:I, reg object38:V, reg dr14:V, reg dc7:L, reg dx16:V, reg i8:I, reg dx17:V, reg i9:*, reg i10:V, reg __6:cls, reg r148:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r149:V, reg i13:I, reg r150:V, reg ii:*, reg ii1:V, reg length1:cls, reg r151:V, reg l15:*, reg c56:L, reg i15:I, reg r153:V, reg l17:*, reg dr16:V, reg dc8:L, reg dx18:V, reg i17:I, reg dx19:V, reg i18:*, reg i19:V, reg ___1:cls, reg r156:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r157:V, reg i22:I, reg r158:V, reg ii2:*, reg ii3:V, reg oldClass:cls, reg r159:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r160:V, reg i25:I, reg r161:V, reg cls:*, reg cls1:V, reg length2:cls, reg r162:V, reg c57:L, reg cls2:*, reg cls3:V, reg c58:L, reg i29:I, reg cls5:V, reg dr18:V, reg dc9:L, reg dx20:V, reg i31:I, reg dx21:V, reg __7:cls, reg r163:V, reg i32:I, reg dx22:V, reg l18:*, reg c59:L, reg i34:I, reg dx24:V, reg l20:*, reg dr20:V, reg dc10:L, reg dx26:V, reg i36:I, reg dx28:V, reg i37:*, reg i38:V, reg ___2:cls, reg r164:V, reg mode:cls, reg ii4:*, reg ii5:V, reg p14:p(V +), reg r166:V, reg l21:*, reg c60:L, reg i40:I, reg r168:V, reg l23:*, reg dr22:V, reg dc11:L, reg dx29:V, reg i42:I, reg dx30:V, reg i43:*, reg i44:V, reg ___3:cls, reg r171:V, reg format:cls, reg sym27:cls, reg base27:cls, reg guard27:L, reg r172:V, reg r173:V, reg ll:*, reg ll1:V, reg as_integer:cls, reg r174:V, reg p15:p(V +), reg r176:V, reg l24:*, reg c61:L, reg r178:V, reg dr24:V, reg dc12:L, reg dx31:V, reg dx32:V, reg ___4:cls, reg r181:V, reg sumry:*, reg sumry1:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r182:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r183:V, reg r184:V, reg object39:*, reg object40:V, reg length3:cls, reg r185:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r186:V, reg r187:V, reg object41:*, reg object42:V, reg class:cls, reg r188:V, reg mode1:cls, reg object43:*, reg object44:V, reg p16:p(V +), reg r190:V, reg c62:cls, reg r191:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r192:V, reg r193:V, reg c63:cls, reg r194:V, reg l27:*, reg class__:cls, reg r195:V, reg value:*, reg value1:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    st digits = digits;
    quantile_type_isMissing = missing.0(quantile_type);
    if quantile_type_isMissing then L0(7.0) else L0(quantile_type);
  L0(quantile_type_orDefault):
    st `quantile.type` = quantile_type_orDefault;
    is_factor = ldf `is.factor`;
    check L62() else D0();
  D0():
    deopt 1 [];
  L62():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn is_factor(p);
    check L63() else D1();
  D1():
    deopt 3 [r1];
  L63():
    c = `as.logical`(r1);
    if c then L64() else L1();
  L1():
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L69() else L70();
  L64():
    summary_factor = ldf `summary.factor`;
    check L65() else D2();
  D2():
    deopt 5 [];
  L3(r7):
    c1 = `as.logical`(r7);
    if c1 then L73() else L4();
  L65():
    p1 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    ddd1 = ld `...`;
    r3 = dyn summary_factor[, `...`](p1, ddd1);
    check L66() else D3();
  L69():
    object5 = ld object;
    check L71() else D4();
  L70():
    r6 = dyn base(<sym object>);
    goto L3(r6);
  D3():
    deopt 8 [r3];
  D4():
    deopt 12 [object5];
  L4():
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L85() else L86();
  L66():
    popenv;
    return r3;
  L71():
    object6 = force? object5;
    checkMissing(object6);
    is_matrix = ldf `is.matrix` in base;
    r8 = dyn is_matrix(object6);
    check L72() else D5();
  L73():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L74() else L75();
  D5():
    deopt 15 [r8];
  L5(r10):
    c2 = `as.logical`(r10);
    if c2 then L76() else L6();
  L8(r22):
    c4 = `as.logical`(r22);
    if c4 then L88() else L9();
  L72():
    goto L3(r8);
  L74():
    missing = ldf missing in base;
    r11 = dyn missing(<sym digits>);
    goto L5(r11);
  L75():
    r9 = dyn base1(<sym digits>);
    goto L5(r9);
  L85():
    object11 = ld object;
    check L87() else D10();
  L86():
    r21 = dyn base2(<sym object>);
    goto L8(r21);
  D10():
    deopt 40 [object11];
  L6():
    summary_matrix1 = ldf `summary.matrix`;
    check L81() else D8();
  L9():
    sym8 = ldf `is.numeric`;
    base8 = ldf `is.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L130() else L131();
  L22(r77):
    st value = r77;
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L267() else L268();
  L76():
    summary_matrix = ldf `summary.matrix`;
    check L77() else D6();
  L87():
    object12 = force? object11;
    checkMissing(object12);
    c3 = `is.logical`(object12);
    goto L8(c3);
  L88():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L89() else L90();
  D6():
    deopt 20 [];
  D8():
    deopt 28 [];
  L10(r24):
    goto L22(r24);
  L23(r79):
    c24 = `as.logical`(r79);
    if c24 then L134() else L24();
  L61(r193):
    l27 = ld value;
    class__ = ldf `class<-`;
    check L270() else D85();
  L77():
    p2 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    p3 = prom<V +>{
      quantile_type1 = ld `quantile.type`;
      quantile_type2 = force? quantile_type1;
      checkMissing(quantile_type2);
      return quantile_type2;
    };
    ddd2 = ld `...`;
    r14 = dyn summary_matrix[, `quantile.type`, `...`](p2, p3, ddd2);
    check L78() else D7();
  L81():
    p4 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    p5 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    p6 = prom<V +>{
      quantile_type3 = ld `quantile.type`;
      quantile_type4 = force? quantile_type3;
      checkMissing(quantile_type4);
      return quantile_type4;
    };
    ddd3 = ld `...`;
    r20 = dyn summary_matrix1[, digits, `quantile.type`, `...`](p4, p5, p6, ddd3);
    check L82() else D9();
  L89():
    table = ldf table;
    check L91() else D11();
  L90():
    r23 = dyn base3[Mode, ]("logical", <lang {
      `<-`(tb, table(object, exclude=NULL, useNA="ifany"));
      if(`&&`(`!`(is.null(`<-`(n, `[[`(dimnames(tb), 1)))), any(`<-`(iN, is.na(n)))), `<-`(`[`(`[[`(dimnames(tb), 1), iN), "NA's"));
      tb
    }>);
    goto L10(r23);
  L130():
    object15 = ld object;
    check L132() else D25();
  L131():
    r78 = dyn base8(<sym object>);
    goto L23(r78);
  L267():
    c63 = ldf c in base;
    r194 = dyn c63("summaryDefault", "table");
    check L269() else D84();
  L268():
    r192 = dyn base31("summaryDefault", "table");
    goto L61(r192);
  D7():
    deopt 25 [r14];
  D9():
    deopt 35 [r20];
  D11():
    deopt 48 [];
  D25():
    deopt 113 [object15];
  D84():
    deopt 344 [r194];
  D85():
    deopt 346 [r193, l27, r193];
  L24():
    sym17 = ldf `is.recursive`;
    base17 = ldf `is.recursive` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L187() else L188();
  L78():
    popenv;
    return r14;
  L82():
    popenv;
    return r20;
  L91():
    p7 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      return object14;
    };
    r26 = dyn table[, exclude, useNA](p7, NULL, "ifany");
    check L92() else D12();
  L132():
    object16 = force? object15;
    checkMissing(object16);
    is_numeric = ldf `is.numeric` in base;
    r80 = dyn is_numeric(object16);
    check L133() else D26();
  L134():
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L135() else L136();
  L269():
    goto L61(r194);
  L270():
    r195 = dyn class__(l27, NULL, r193);
    check L271() else D86();
  D12():
    deopt 54 [r26];
  D26():
    deopt 116 [r80];
  D86():
    deopt 348 [r193, r195];
  L25(r82):
    st nas = r82;
    object19 = ld object;
    check L139() else D29();
  L40(r121):
    c33 = `as.logical`(r121);
    if c33 then L191() else L41(c33);
  L92():
    st tb = r26;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L93() else L94();
  L133():
    goto L23(r80);
  L135():
    object17 = ld object;
    check L137() else D27();
  L136():
    r81 = dyn base9(<sym object>);
    goto L25(r81);
  L187():
    object27 = ld object;
    check L189() else D49();
  L188():
    r120 = dyn base17(<sym object>);
    goto L40(r120);
  L271():
    st value = r195;
    value = ld value;
    check L272() else D87();
  D27():
    deopt 119 [object17];
  D29():
    deopt 124 [object19];
  D49():
    deopt 211 [object27];
  D87():
    deopt 350 [value];
  L11(r28):
    r35 = `!`(r28);
    c7 = `as.logical`(r35);
    if c7 then L102() else L14(c7);
  L41(c35):
    c42 = `as.logical`(c35);
    if c42 then L197() else L43(c42);
  L93():
    sym5 = ldf dimnames;
    base5 = ldf dimnames in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L95() else L96();
  L94():
    r27 = dyn base4(<lang `<-`(n, `[[`(dimnames(tb), 1))>);
    goto L11(r27);
  L137():
    object18 = force? object17;
    checkMissing(object18);
    is_na1 = ldf `is.na` in base;
    r83 = dyn is_na1(object18);
    check L138() else D28();
  L139():
    object20 = force? object19;
    checkMissing(object20);
    c25 = `is.object`(object20);
    if c25 then L140() else L141(object20);
  L189():
    object28 = force? object27;
    checkMissing(object28);
    is_recursive = ldf `is.recursive` in base;
    r122 = dyn is_recursive(object28);
    check L190() else D50();
  L191():
    sym18 = ldf `is.language`;
    base18 = ldf `is.language` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L192() else L193();
  L272():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D28():
    deopt 122 [r83];
  D50():
    deopt 214 [r122];
  L12(r30):
    c5 = `is.object`(r30);
    if c5 then L99() else L100(r30);
  L14(c9):
    c19 = `as.logical`(c9);
    if c19 then L111() else L17();
  L26(dx11):
    st object = dx11;
    __3 = ldf `::`;
    check L144() else D31();
  L42(c38, r124):
    r126 = `!`(r124);
    c39 = `as.logical`(r126);
    c40 = `&&`(c38, c39);
    goto L41(c40);
  L43(c44):
    c51 = `as.logical`(c44);
    if c51 then L203() else L45();
  L95():
    tb = ld tb;
    check L97() else D13();
  L96():
    r29 = dyn base5(<sym tb>);
    goto L12(r29);
  L102():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L103() else L104();
  L138():
    goto L25(r83);
  L140():
    dr8 = tryDispatchBuiltin.1("[", object20);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L142() else L141(dr8);
  L141(object22):
    nas = ld nas;
    check L143() else D30();
  L190():
    goto L40(r122);
  L192():
    object29 = ld object;
    check L194() else D51();
  L193():
    r123 = dyn base18(<sym object>);
    goto L42(c33, r123);
  L197():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L198() else L199();
  D13():
    deopt 59 [tb];
  D30():
    deopt 126 [object22, nas];
  D31():
    deopt 132 [];
  D51():
    deopt 217 [c33, object29];
  L13(dx1):
    st n = dx1;
    c6 = `==`(dx1, NULL);
    goto L11(c6);
  L15(c12, r37):
    c16 = `as.logical`(r37);
    c17 = `&&`(c12, c16);
    goto L14(c17);
  L17():
    goto L21();
  L21():
    tb2 = ld tb;
    check L127() else D23();
  L44(c47, r128):
    st n = r128;
    c48 = `as.logical`(r128);
    c49 = `&&`(c47, c48);
    goto L43(c49);
  L45():
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L254() else L255();
  L97():
    tb1 = force? tb;
    checkMissing(tb1);
    dimnames = ldf dimnames in base;
    r31 = dyn dimnames(tb1);
    check L98() else D14();
  L99():
    dr = tryDispatchBuiltin.1("[[", r30);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L101() else L100(dr);
  L100(r33):
    __ = ldf `[[` in base;
    r34 = dyn __(r33, 1);
    goto L13(r34);
  L103():
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L105() else L106();
  L104():
    r36 = dyn base6(<lang `<-`(iN, is.na(n))>);
    goto L15(c7, r36);
  L111():
    l = ld tb;
    dimnames1 = ldf dimnames;
    check L112() else D18();
  L142():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L26(dx10);
  L143():
    nas1 = force? nas;
    checkMissing(nas1);
    r84 = `!`(nas1);
    __2 = ldf `[` in base;
    r85 = dyn __2(object22, r84);
    goto L26(r85);
  L144():
    r86 = dyn __3("stats", "quantile");
    check L145() else D32();
  L194():
    object30 = force? object29;
    checkMissing(object30);
    is_language = ldf `is.language` in base;
    r125 = dyn is_language(object30);
    check L195() else D52();
  L198():
    object31 = ld object;
    check L200() else D53();
  L199():
    r127 = dyn base19(<sym object>);
    goto L44(c42, r127);
  L203():
    array = ldf array;
    check L204() else D55();
  D14():
    deopt 62 [r31];
  D18():
    deopt 85 ["NA's", l, "NA's"];
  D23():
    deopt 107 [tb2];
  D32():
    deopt 135 [r86];
  D52():
    deopt 220 [c33, r125];
  D53():
    deopt 225 [c42, object31];
  D55():
    deopt 232 [];
  L16(c15, r39):
    st iN = r39;
    any = ldf any in base;
    r41 = dyn any(r39);
    check L109() else D17();
  L98():
    goto L12(r31);
  L101():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L105():
    n = ld n;
    check L107() else D15();
  L106():
    r38 = dyn base7(<sym n>);
    goto L16(c7, r38);
  L112():
    r42 = dyn dimnames1("NA's", NULL);
    check L113() else D19();
  L127():
    tb3 = force? tb2;
    checkMissing(tb3);
    c23 = ldf c in base;
    r76 = dyn c23("logical", tb3);
    check L128() else D24();
  L145():
    checkFun.0(r86);
    r87 = r86 as cls;
    p8 = prom<V +>{
      object23 = ld object;
      object24 = force? object23;
      checkMissing(object24);
      return object24;
    };
    p9 = prom<V +>{
      quantile_type5 = ld `quantile.type`;
      quantile_type6 = force? quantile_type5;
      checkMissing(quantile_type6);
      return quantile_type6;
    };
    r90 = dyn r87[, names, type](p8, FALSE, p9);
    check L146() else D33();
  L195():
    goto L42(c33, r125);
  L200():
    object32 = force? object31;
    checkMissing(object32);
    length = ldf length in base;
    r129 = dyn length(object32);
    check L201() else D54();
  L204():
    p11 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r131):
      return r131;
    L1():
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      c52 = ldf c in base;
      r132 = dyn c52(n3, 3);
      goto L0(r132);
    L2():
      r130 = dyn base20(<sym n>, 3);
      goto L0(r130);
    };
    p12 = prom<V +>{
      sym21 = ldf list;
      base21 = ldf list in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L3() else L4();
    L0(r135):
      return r135;
    L3():
      sym22 = ldf names;
      base22 = ldf names in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L5() else L6();
    L4():
      r134 = dyn base21(<lang names(object)>, <lang c("Length", "Class", "Mode")>);
      goto L0(r134);
    L1(r137):
      sym23 = ldf c;
      base23 = ldf c in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L7() else L8();
    L5():
      object33 = ld object;
      object34 = force? object33;
      checkMissing(object34);
      names = ldf names in base;
      r138 = dyn names(object34);
      goto L1(r138);
    L6():
      r136 = dyn base22(<sym object>);
      goto L1(r136);
    L2(r140):
      list = ldf list in base;
      r142 = dyn list(r137, r140);
      goto L0(r142);
    L7():
      c53 = ldf c in base;
      r141 = dyn c53("Length", "Class", "Mode");
      goto L2(r141);
    L8():
      r139 = dyn base23("Length", "Class", "Mode");
      goto L2(r139);
    };
    r144 = dyn array("", p11, p12);
    check L205() else D56();
  L254():
    sym29 = ldf length;
    base29 = ldf length in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L256() else L257();
  L255():
    r182 = dyn base28[Length, Class, Mode](<lang length(object)>, <lang class(object)>, <lang mode(object)>);
    goto L22(r182);
  D15():
    deopt 73 [c7, n];
  D17():
    deopt 79 [c15, r41];
  D19():
    deopt 87 ["NA's", l, "NA's", r42];
  D24():
    deopt 110 [r76];
  D33():
    deopt 142 [r90];
  D54():
    deopt 228 [c42, r129];
  D56():
    deopt 236 [r144];
  L59(r184):
    sym30 = ldf class;
    base30 = ldf class in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L260() else L261();
  L107():
    n1 = force? n;
    checkMissing(n1);
    is_na = ldf `is.na` in base;
    r40 = dyn is_na(n1);
    check L108() else D16();
  L109():
    goto L15(c15, r41);
  L113():
    c20 = `is.object`(r42);
    if c20 then L114() else L115("NA's", l, r42, "NA's", r42);
  L128():
    goto L10(r76);
  L146():
    st qq = r90;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L147() else L148();
  L201():
    goto L44(c42, r129);
  L205():
    st sumry = r144;
    numeric = ldf numeric;
    check L206() else D57();
  L256():
    object39 = ld object;
    check L258() else D77();
  L257():
    r183 = dyn base29(<sym object>);
    goto L59(r183);
  D16():
    deopt 76 [c7, r40];
  D57():
    deopt 239 [];
  D77():
    deopt 319 [object39];
  L18(r54, l4, r55, r56, dx3):
    c21 = `is.object`(dx3);
    if c21 then L117() else L118(r54, l4, r55, dx3);
  L27(r92):
    st qq = r92;
    sym11 = ldf missing;
    base11 = ldf missing in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L160() else L161();
  L60(r187):
    mode1 = ldf mode;
    check L264() else D81();
  L108():
    goto L16(c7, r40);
  L114():
    dr2 = tryDispatchBuiltin.1("[[", r42);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L116() else L115("NA's", l, r42, "NA's", dr2);
  L115(r47, l2, r48, r49, r50):
    __1 = ldf `[[` in base;
    r57 = dyn __1(r50, 1);
    goto L18(r47, l2, r48, r49, r57);
  L147():
    qq = ld qq;
    check L149() else D34();
  L148():
    r91 = dyn base10(<lang `[`(qq, `:`(1, 3))>, <lang mean(object)>, <lang `[`(qq, `:`(4, 5))>);
    goto L27(r91);
  L206():
    p13 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    r146 = dyn numeric(p13);
    check L207() else D58();
  L258():
    object40 = force? object39;
    checkMissing(object40);
    length3 = ldf length in base;
    r185 = dyn length3(object40);
    check L259() else D78();
  L260():
    object41 = ld object;
    check L262() else D79();
  L261():
    r186 = dyn base30(<sym object>);
    goto L60(r186);
  D34():
    deopt 146 [qq];
  D58():
    deopt 241 [r146];
  D78():
    deopt 322 [r185];
  D79():
    deopt 326 [object41];
  D81():
    deopt 332 [];
  L19(r64, l8, r65, dx7):
    c22 = `is.object`(r65);
    if c22 then L121() else L122(r64, l8, r65);
  L30(r99):
    r101 = `!`(r99);
    c29 = `as.logical`(r101);
    if c29 then L162() else L31();
  L116():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18("NA's", l, r42, "NA's", dx2);
  L117():
    dr4 = tryDispatchBuiltin.0("[<-", dx3, r56);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L119() else L118(r54, l4, r55, dr4);
  L118(r60, l6, r61, dx5):
    iN = ld iN;
    check L120() else D20();
  L149():
    qq1 = force? qq;
    checkMissing(qq1);
    c26 = `is.object`(qq1);
    if c26 then L150() else L151(qq1);
  L160():
    missing1 = ldf missing in base;
    r100 = dyn missing1(<sym digits>);
    goto L30(r100);
  L161():
    r98 = dyn base11(<sym digits>);
    goto L30(r98);
  L207():
    st ll = r146;
    n6 = ld n;
    check L208() else D59();
  L259():
    goto L59(r185);
  L262():
    object42 = force? object41;
    checkMissing(object42);
    class = ldf class in base;
    r188 = dyn class(object42);
    check L263() else D80();
  L264():
    p16 = prom<V +>{
      object43 = ld object;
      object44 = force? object43;
      checkMissing(object44);
      return object44;
    };
    r190 = dyn mode1(p16);
    check L265() else D82();
  D20():
    deopt 94 [r60, l6, r61, dx5, r56, iN];
  D59():
    deopt 244 [1, n6];
  D80():
    deopt 329 [r188];
  D82():
    deopt 334 [r190];
  L20(r72, l12, dx9):
    dimnames__ = ldf `dimnames<-`;
    check L124() else D21();
  L28(dx13):
    mean = ldf mean;
    check L153() else D35();
  L31():
    goto L33();
  L33():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L166() else L167();
  L119():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L19(r54, l4, r55, dx6);
  L120():
    iN1 = force? iN;
    ___ = ldf `[<-` in base;
    r66 = dyn ___(dx5, r56, iN1);
    goto L19(r60, l6, r61, r66);
  L121():
    dr6 = tryDispatchBuiltin.0("[[<-", r65, dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L123() else L122(r64, l8, dr6);
  L122(r69, l10, r70):
    ____ = ldf `[[<-` in base;
    r73 = dyn ____(r70, dx7, 1);
    goto L20(r69, l10, r73);
  L150():
    dr10 = tryDispatchBuiltin.1("[", qq1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L152() else L151(dr10);
  L151(qq3):
    __4 = ldf `[` in base;
    r93 = dyn __4(qq3, <int 1, 2, 3>);
    goto L28(r93);
  L162():
    sym12 = ldf signif;
    base12 = ldf signif in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L163() else L164();
  L208():
    n7 = force? n6;
    checkMissing(n7);
    r147 = `:`(1, n7);
    s = toForSeq(r147);
    l14 = length(s);
    i = 0;
    goto L46(i);
  L263():
    goto L60(r188);
  L265():
    c62 = ldf c in base;
    r191 = dyn c62(r184, r187, r190);
    check L266() else D83();
  D21():
    deopt 100 [r72, l12, dx9];
  D35():
    deopt 152 [];
  D83():
    deopt 337 [r191];
  L32(r103):
    st qq = r103;
    goto L33();
  L34(r107):
    l13 = ld qq;
    names__ = ldf `names<-`;
    check L169() else D40();
  L46(i1):
    i2 = `+`.1(i1, 1);
    c54 = `<`.1(l14, i2);
    if c54 then L209() else L57();
  L123():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L20(r64, l8, dx8);
  L124():
    r74 = dyn dimnames__(l12, NULL, dx9);
    check L125() else D22();
  L152():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L28(dx12);
  L153():
    p10 = prom<V +>{
      object25 = ld object;
      object26 = force? object25;
      checkMissing(object26);
      return object26;
    };
    r95 = dyn mean(p10);
    check L154() else D36();
  L163():
    signif = ldf signif in base;
    r104 = dyn signif(<sym qq>, <sym digits>);
    goto L32(r104);
  L164():
    r102 = dyn base12(<sym qq>, <sym digits>);
    goto L32(r102);
  L166():
    c30 = ldf c in base;
    r108 = dyn c30("Min.", "1st Qu.", "Median", "Mean", "3rd Qu.", "Max.");
    check L168() else D39();
  L167():
    r106 = dyn base13("Min.", "1st Qu.", "Median", "Mean", "3rd Qu.", "Max.");
    goto L34(r106);
  L266():
    goto L22(r191);
  D22():
    deopt 102 [r72, r74];
  D36():
    deopt 154 [r95];
  D39():
    deopt 182 [r108];
  D40():
    deopt 184 [r107, l13, r107];
  L57():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    object35 = ld object;
    check L210() else D60();
  L125():
    st tb = r74;
    goto L21();
  L154():
    qq4 = ld qq;
    check L155() else D37();
  L168():
    goto L34(r108);
  L169():
    r109 = dyn names__(l13, NULL, r107);
    check L170() else D41();
  L209():
    format = ldf format;
    check L247() else D74();
  D37():
    deopt 155 [qq4];
  D41():
    deopt 186 [r107, r109];
  D60():
    deopt 247 [i2, object35];
  D74():
    deopt 304 [];
  L155():
    qq5 = force? qq4;
    checkMissing(qq5);
    c27 = `is.object`(qq5);
    if c27 then L156() else L157(qq5);
  L170():
    st qq = r109;
    sym14 = ldf any;
    base14 = ldf any in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L171() else L172();
  L210():
    object36 = force? object35;
    checkMissing(object36);
    c55 = `is.object`(object36);
    if c55 then L211() else L212(i2, object36);
  L247():
    p15 = prom<V +>{
      sym27 = ldf `as.integer`;
      base27 = ldf `as.integer` in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L1() else L2();
    L0(r173):
      return r173;
    L1():
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      as_integer = ldf `as.integer` in base;
      r174 = dyn as_integer(ll1);
      goto L0(r174);
    L2():
      r172 = dyn base27(<sym ll>);
      goto L0(r172);
    };
    r176 = dyn format(p15);
    check L248() else D75();
  D75():
    deopt 306 [r176];
  L29(dx15):
    c28 = ldf c in base;
    r97 = dyn c28(dx13, r95, dx15);
    check L159() else D38();
  L35(r111):
    c31 = `as.logical`(r111);
    if c31 then L175() else L36();
  L47(i8, dx17):
    st ii = dx17;
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L215() else L216();
  L156():
    dr12 = tryDispatchBuiltin.1("[", qq5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L158() else L157(dr12);
  L157(qq7):
    __5 = ldf `[` in base;
    r96 = dyn __5(qq7, <int 4, 5>);
    goto L29(r96);
  L171():
    nas2 = ld nas;
    check L173() else D42();
  L172():
    r110 = dyn base14(<sym nas>);
    goto L35(r110);
  L211():
    dr14 = tryDispatchBuiltin.1("[[", object36);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L213() else L212(i2, dr14);
  L212(i6, object38):
    i9 = ld i;
    check L214() else D61();
  L248():
    l24 = ld sumry;
    c61 = `is.object`(l24);
    if c61 then L249() else L250(r176);
  D38():
    deopt 161 [r97];
  D42():
    deopt 190 [nas2];
  D61():
    deopt 249 [i6, object38, i9];
  L36():
    qq10 = ld qq;
    check L185() else D48();
  L39(r119):
    goto L22(r119);
  L48(i13, r150):
    l15 = ld ll;
    c56 = `is.object`(l15);
    if c56 then L219() else L220(i13, r150, l15);
  L58(dx32):
    st sumry = dx32;
    sumry = ld sumry;
    check L252() else D76();
  L158():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L29(dx14);
  L159():
    goto L27(r97);
  L173():
    nas3 = force? nas2;
    checkMissing(nas3);
    any1 = ldf any in base;
    r112 = dyn any1(nas3);
    check L174() else D43();
  L175():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L176() else L177();
  L213():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L47(i2, dx16);
  L214():
    i10 = force? i9;
    __6 = ldf `[[` in base;
    r148 = dyn __6(object38, i10);
    goto L47(i6, r148);
  L215():
    ii = ld ii;
    check L217() else D62();
  L216():
    r149 = dyn base24(<sym ii>);
    goto L48(i8, r149);
  L249():
    dr24 = tryDispatchBuiltin.0("[<-", l24, r176);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L251() else L250(r176);
  L250(r178):
    ___4 = ldf `[<-` in base;
    r181 = dyn ___4(l24, <missing>, 1, r176);
    goto L58(r181);
  D43():
    deopt 193 [r112];
  D48():
    deopt 207 [qq10];
  D62():
    deopt 255 [i8, ii];
  D76():
    deopt 313 [sumry];
  L37(r114):
    goto L39(r114);
  L49(i17, dx19):
    st ll = dx19;
    sym25 = ldf oldClass;
    base25 = ldf oldClass in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L223() else L224();
  L174():
    goto L35(r112);
  L176():
    qq8 = ld qq;
    check L178() else D44();
  L177():
    r113 = dyn base15[, `NA's`](<sym qq>, <lang sum(nas)>);
    goto L37(r113);
  L185():
    qq11 = force? qq10;
    checkMissing(qq11);
    goto L39(qq11);
  L217():
    ii1 = force? ii;
    checkMissing(ii1);
    length1 = ldf length in base;
    r151 = dyn length1(ii1);
    check L218() else D63();
  L219():
    dr16 = tryDispatchBuiltin.0("[<-", l15, r150);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L221() else L220(i13, r150, dr16);
  L220(i15, r153, l17):
    i18 = ld i;
    check L222() else D64();
  L251():
    dx31 = getTryDispatchBuiltinValue(dr24);
    goto L58(dx31);
  L252():
    sumry1 = force? sumry;
    checkMissing(sumry1);
    goto L22(sumry1);
  D44():
    deopt 196 [qq8];
  D63():
    deopt 258 [i8, r151];
  D64():
    deopt 260 [i15, r153, l17, r150, i18];
  L50(i22, r158):
    st cls = r158;
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L227() else L228();
  L178():
    qq9 = force? qq8;
    checkMissing(qq9);
    sym16 = ldf sum;
    base16 = ldf sum in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L179() else L180();
  L218():
    goto L48(i8, r151);
  L221():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L49(i13, dx18);
  L222():
    i19 = force? i18;
    ___1 = ldf `[<-` in base;
    r156 = dyn ___1(l17, r150, i19);
    goto L49(i15, r156);
  L223():
    ii2 = ld ii;
    check L225() else D65();
  L224():
    r157 = dyn base25(<sym ii>);
    goto L50(i17, r157);
  D65():
    deopt 266 [i17, ii2];
  L38(r116):
    c32 = ldf c in base;
    r118 = dyn c32(qq9, r116);
    check L183() else D47();
  L51(i25, r161):
    c57 = `as.logical`(r161);
    if c57 then L231() else L52();
  L179():
    nas4 = ld nas;
    check L181() else D45();
  L180():
    r115 = dyn base16(<sym nas>);
    goto L38(r115);
  L225():
    ii3 = force? ii2;
    checkMissing(ii3);
    oldClass = ldf oldClass in base;
    r159 = dyn oldClass(ii3);
    check L226() else D66();
  L227():
    cls = ld cls;
    check L229() else D67();
  L228():
    r160 = dyn base26(<sym cls>);
    goto L51(i22, r160);
  D45():
    deopt 200 [nas4];
  D47():
    deopt 206 [r118];
  D66():
    deopt 269 [i17, r159];
  D67():
    deopt 273 [i22, cls];
  L52():
    goto L54(i25, "-none-");
  L54(i32, dx22):
    l18 = ld sumry;
    c59 = `is.object`(l18);
    if c59 then L237() else L238(i32, dx22, l18);
  L181():
    nas5 = force? nas4;
    checkMissing(nas5);
    sum = ldf sum in base;
    r117 = dyn sum(nas5);
    check L182() else D46();
  L183():
    goto L37(r118);
  L226():
    goto L50(i17, r159);
  L229():
    cls1 = force? cls;
    checkMissing(cls1);
    length2 = ldf length in base;
    r162 = dyn length2(cls1);
    check L230() else D68();
  L231():
    cls2 = ld cls;
    check L232() else D69();
  D46():
    deopt 203 [r117];
  D68():
    deopt 276 [i22, r162];
  D69():
    deopt 277 [i25, cls2];
  L55(i36, dx28):
    st sumry = dx28;
    mode = ldf mode;
    check L241() else D71();
  L182():
    goto L38(r117);
  L230():
    goto L51(i22, r162);
  L232():
    cls3 = force? cls2;
    checkMissing(cls3);
    c58 = `is.object`(cls3);
    if c58 then L233() else L234(i25, cls3);
  L237():
    dr20 = tryDispatchBuiltin.0("[<-", l18, dx22);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L239() else L238(i32, dx22, dr20);
  L238(i34, dx24, l20):
    i37 = ld i;
    check L240() else D70();
  D70():
    deopt 285 [i34, dx24, l20, dx22, i37];
  D71():
    deopt 291 [i36];
  L53(i31, dx21):
    goto L54(i31, dx21);
  L233():
    dr18 = tryDispatchBuiltin.1("[", cls3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L235() else L234(i25, dr18);
  L234(i29, cls5):
    __7 = ldf `[` in base;
    r163 = dyn __7(cls5, 1);
    goto L53(i29, r163);
  L239():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L55(i32, dx26);
  L240():
    i38 = force? i37;
    ___2 = ldf `[<-` in base;
    r164 = dyn ___2(l20, dx22, i38, 2);
    goto L55(i34, r164);
  L241():
    p14 = prom<V +>{
      ii4 = ld ii;
      ii5 = force? ii4;
      checkMissing(ii5);
      return ii5;
    };
    r166 = dyn mode(p14);
    check L242() else D72();
  D72():
    deopt 293 [i36, r166];
  L235():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L53(i25, dx20);
  L242():
    l21 = ld sumry;
    c60 = `is.object`(l21);
    if c60 then L243() else L244(i36, r166, l21);
  L56(i42, dx30):
    st sumry = dx30;
    goto L46(i42);
  L243():
    dr22 = tryDispatchBuiltin.0("[<-", l21, r166);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L245() else L244(i36, r166, dr22);
  L244(i40, r168, l23):
    i43 = ld i;
    check L246() else D73();
  D73():
    deopt 295 [i40, r168, l23, r166, i43];
  L245():
    dx29 = getTryDispatchBuiltinValue(dr22);
    goto L56(i36, dx29);
  L246():
    i44 = force? i43;
    ___3 = ldf `[<-` in base;
    r171 = dyn ___3(l23, r166, i44, 3);
    goto L56(i40, r171);
  }
}