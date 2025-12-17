fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3796164062;
    st `str.dendrogram` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3796164062(object, `max.level`, `digits.d`, `give.attr`, wid, `nest.lev`, `indent.str`, `last.str`, stem, `...`) {
  (reg object:*, reg max_level:*, reg digits_d:*, reg give_attr:*, reg wid:*, reg nest_lev:*, reg indent_str:*, reg last_str:*, reg stem:*, reg ddd:dots) -+> V { var object:*, var `max.level`:*, reg max_level_isMissing:L, reg max_level_orDefault:*, var `digits.d`:*, reg digits_d_isMissing:L, reg digits_d_orDefault:*, var `give.attr`:*, reg give_attr_isMissing:L, reg give_attr_orDefault:*, var wid:*, reg wid_isMissing:L, reg wid_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `nest.lev`:*, reg nest_lev_isMissing:L, reg nest_lev_orDefault:*, var `indent.str`:*, reg indent_str_isMissing:L, reg indent_str_orDefault:*, var `last.str`:*, reg last_str_isMissing:L, reg last_str_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), var stem:*, reg stem_isMissing:L, reg stem_orDefault:*, var `...`:dots?, reg r4:cls, reg sub:cls, reg last_str1:*, reg last_str2:V, reg p2:p(V +), reg indent_str1:*, reg indent_str2:V, reg p3:p(V +), reg r7:V, reg cat:cls, reg istr:*, reg istr1:V, reg p4:p(V +), reg stem1:*, reg stem2:V, reg p5:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg object1:*, reg object2:V, reg attributes:cls, reg r13:V, reg at:*, reg at1:V, reg c:L, reg at3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg at4:*, reg at5:V, reg c1:L, reg at7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r15:V, reg is_leaf:cls, reg object3:*, reg object4:V, reg p6:p(V +), reg r17:V, reg r18:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg object5:*, reg object6:V, reg length:cls, reg r21:V, reg give_attr1:*, reg give_attr2:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg pasteLis:cls, reg at8:*, reg at9:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg c4:cls, reg r27:V, reg p8:p(V +), reg r29:V, reg nzchar:cls, reg r30:V, reg c5:L, reg paste:cls, reg at10:*, reg at11:V, reg p9:p(V +), reg r32:V, reg r33:V, reg cat1:cls, reg le:*, reg le1:V, reg p10:p(V +), reg memb:*, reg memb1:V, reg p11:p(V +), reg format:cls, reg hgt:*, reg hgt1:V, reg p12:p(V +), reg digits_d1:*, reg digits_d2:V, reg p13:p(V +), reg r39:V, reg p14:p(V +), reg give_attr3:*, reg give_attr4:V, reg c6:L, reg at12:*, reg at13:V, reg p15:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg max_level1:*, reg max_level2:V, reg is_na:cls, reg r44:V, reg r45:V, reg c7:L, reg c9:V, reg nest_lev1:*, reg nest_lev2:V, reg max_level3:*, reg max_level4:V, reg r46:V, reg c10:L, reg c11:V, reg c13:L, reg p16:p(V +), reg r48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg r50:V, reg max_level5:*, reg max_level6:V, reg is_na1:cls, reg r51:V, reg c14:L, reg c15:V, reg nest_lev3:*, reg nest_lev4:V, reg max_level7:*, reg max_level8:V, reg r52:V, reg c17:L, reg c18:V, reg c20:L, reg nest_lev5:*, reg nest_lev6:V, reg r53:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg object7:*, reg object8:V, reg c21:L, reg object10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg le2:*, reg le3:V, reg __2:cls, reg r56:V, reg nest_lev7:*, reg nest_lev8:V, reg paste1:cls, reg indent_str3:*, reg indent_str4:V, reg p17:p(V +), reg r58:V, reg todo:*, reg todo1:V, reg list:cls, reg r59:V, reg paste2:cls, reg indent_str5:*, reg indent_str6:V, reg p18:p(V +), reg r61:V, reg le4:*, reg le5:V, reg r62:V, reg r63:V, reg c22:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg r65:V, reg object11:*, reg object12:V, reg c23:L, reg object14:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg le6:*, reg le7:V, reg __3:cls, reg r66:V, reg nest_lev9:*, reg nest_lev10:V, reg indent_str7:*, reg indent_str8:V, reg todo2:*, reg todo3:V, reg list1:cls, reg r67:V, reg r68:dots, reg cat2:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg r71:V, reg at14:*, reg at15:V, reg c24:L, reg at17:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r72:V, reg c25:L, reg c26:L, reg paste3:cls, reg at18:*, reg at19:V, reg c27:L, reg at21:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r73:V, reg p19:p(V +), reg r75:V, reg format1:cls, reg object15:*, reg object16:V, reg p20:p(V +), reg digits_d3:*, reg digits_d4:V, reg p21:p(V +), reg r78:V, reg p22:p(V +), reg r80:V, reg hgt2:*, reg hgt3:V, reg r81:V, reg any_at:*, reg any_at1:V, reg c28:L, reg cat3:cls, reg format2:cls, reg hgt4:*, reg hgt5:V, reg p23:p(V +), reg digits_d5:*, reg digits_d6:V, reg p24:p(V +), reg r84:V, reg p25:p(V +), reg r86:V, reg memb2:*, reg memb3:V, reg r88:V, reg c29:L, reg cat4:cls, reg any_at2:*, reg any_at3:V, reg c30:L, reg p26:p(V +), reg memb4:*, reg memb5:V, reg p27:p(V +), reg r91:V, reg pasteLis1:cls, reg at22:*, reg at23:V, reg p28:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r94:V, reg r95:V, reg c31:cls, reg r96:V, reg p29:p(V +), reg r98:V, reg any_at4:*, reg any_at5:V, reg c32:L, reg c33:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r99:V, reg c37:L, reg r100:V, reg at24:*, reg at25:V, reg nzchar1:cls, reg r101:V, reg c38:L, reg c39:V, reg c41:L, reg cat5:cls, reg any_at6:*, reg any_at7:V, reg r102:V, reg c42:L, reg p30:p(V +), reg at26:*, reg at27:V, reg p31:p(V +), reg r105:V, reg cat6:cls, reg r107:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r108:V, reg r109:V, reg todo4:*, reg todo5:V, reg c43:V, reg c44:L, reg todo6:*, reg todo7:V, reg c45:L, reg todo9:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r111:V, reg todo10:*, reg todo11:V, reg c46:L, reg todo13:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r112:V, reg todo14:*, reg todo15:V, reg c47:L, reg todo17:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r113:V, reg todo18:*, reg todo19:V, reg c48:L, reg todo21:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r114:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r115:V, reg r116:V, reg invisible:cls, reg r117:V |
    mkenv;
    st object = object;
    max_level_isMissing = missing.0(max_level);
    if max_level_isMissing then L0(NA_LGL) else L0(max_level);
  L0(max_level_orDefault):
    st `max.level` = max_level_orDefault;
    digits_d_isMissing = missing.0(digits_d);
    if digits_d_isMissing then L1(3) else L1(digits_d);
  L1(digits_d_orDefault):
    st `digits.d` = digits_d_orDefault;
    give_attr_isMissing = missing.0(give_attr);
    if give_attr_isMissing then L2(FALSE) else L2(give_attr);
  L2(give_attr_orDefault):
    st `give.attr` = give_attr_orDefault;
    wid_isMissing = missing.0(wid);
    if wid_isMissing then L3() else L4(wid);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("width");
      return r;
    };
    goto L4(p);
  L4(wid_orDefault):
    st wid = wid_orDefault;
    nest_lev_isMissing = missing.0(nest_lev);
    if nest_lev_isMissing then L5(0) else L5(nest_lev);
  L5(nest_lev_orDefault):
    st `nest.lev` = nest_lev_orDefault;
    indent_str_isMissing = missing.0(indent_str);
    if indent_str_isMissing then L6("") else L6(indent_str);
  L6(indent_str_orDefault):
    st `indent.str` = indent_str_orDefault;
    last_str_isMissing = missing.0(last_str);
    if last_str_isMissing then L7() else L8(last_str);
  L7():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("str.dendrogram.last");
      return r2;
    };
    goto L8(p1);
  L8(last_str_orDefault):
    st `last.str` = last_str_orDefault;
    stem_isMissing = missing.0(stem);
    if stem_isMissing then L9("--") else L9(stem);
  L9(stem_orDefault):
    st stem = stem_orDefault;
    st `...` = ddd;
    r4 = clos inner466533257;
    st pasteLis = r4;
    st todo = NULL;
    goto L43();
  L43():
    sub = ldf sub;
    check L45() else D0();
  D0():
    deopt 7 [];
  L45():
    p2 = prom<V +>{
      last_str1 = ld `last.str`;
      last_str2 = force? last_str1;
      checkMissing(last_str2);
      return last_str2;
    };
    p3 = prom<V +>{
      indent_str1 = ld `indent.str`;
      indent_str2 = force? indent_str1;
      checkMissing(indent_str2);
      return indent_str2;
    };
    r7 = dyn sub(" $", p2, p3);
    check L46() else D1();
  D1():
    deopt 11 [r7];
  L46():
    st istr = r7;
    cat = ldf cat;
    check L47() else D2();
  D2():
    deopt 14 [];
  L47():
    p4 = prom<V +>{
      istr = ld istr;
      istr1 = force? istr;
      checkMissing(istr1);
      return istr1;
    };
    p5 = prom<V +>{
      stem1 = ld stem;
      stem2 = force? stem1;
      checkMissing(stem2);
      return stem2;
    };
    r10 = dyn cat[, , sep](p4, p5, "");
    check L48() else D3();
  D3():
    deopt 19 [r10];
  L48():
    sym = ldf attributes;
    base = ldf attributes in base;
    guard = `==`.4(sym, base);
    if guard then L49() else L50();
  L10(r12):
    st at = r12;
    at = ld at;
    check L53() else D6();
  L49():
    object1 = ld object;
    check L51() else D4();
  L50():
    r11 = dyn base(<sym object>);
    goto L10(r11);
  D4():
    deopt 22 [object1];
  D6():
    deopt 27 [at];
  L51():
    object2 = force? object1;
    checkMissing(object2);
    attributes = ldf attributes in base;
    r13 = dyn attributes(object2);
    check L52() else D5();
  L53():
    at1 = force? at;
    checkMissing(at1);
    c = `is.object`(at1);
    if c then L54() else L55(at1);
  D5():
    deopt 25 [r13];
  L11(dx1):
    st memb = dx1;
    at4 = ld at;
    check L57() else D7();
  L52():
    goto L10(r13);
  L54():
    dr = tryDispatchBuiltin.1("[[", at1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L56() else L55(dr);
  L55(at3):
    __ = ldf `[[` in base;
    r14 = dyn __(at3, "members");
    goto L11(r14);
  D7():
    deopt 33 [at4];
  L56():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L57():
    at5 = force? at4;
    checkMissing(at5);
    c1 = `is.object`(at5);
    if c1 then L58() else L59(at5);
  L12(dx3):
    st hgt = dx3;
    is_leaf = ldf `is.leaf`;
    check L61() else D8();
  L58():
    dr2 = tryDispatchBuiltin.1("[[", at5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L60() else L59(dr2);
  L59(at7):
    __1 = ldf `[[` in base;
    r15 = dyn __1(at7, "height");
    goto L12(r15);
  D8():
    deopt 40 [];
  L60():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L61():
    p6 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r17 = dyn is_leaf(p6);
    check L62() else D9();
  D9():
    deopt 42 [r17];
  L62():
    r18 = `!`(r17);
    c2 = `as.logical`(r18);
    if c2 then L63() else L13();
  L13():
    cat2 = ldf cat;
    check L122() else D41();
  L30():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L150() else L151();
  L63():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L64() else L65();
  D41():
    deopt 166 [];
  L14(r20):
    st le = r20;
    give_attr1 = ld `give.attr`;
    check L68() else D12();
  L39(r109):
    c44 = `as.logical`(r109);
    if c44 then L153() else L40();
  L64():
    object5 = ld object;
    check L66() else D10();
  L65():
    r19 = dyn base1(<sym object>);
    goto L14(r19);
  L122():
    p22 = prom<V +>{
      sym8 = ldf `is.character`;
      base8 = ldf `is.character` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r71):
      c26 = `as.logical`(r71);
      if c26 then L8() else L1();
    L2():
      at14 = ld at;
      at15 = force? at14;
      checkMissing(at15);
      c24 = `is.object`(at15);
      if c24 then L5() else L6(at15);
    L3():
      r70 = dyn base8(<lang `$`(at, label)>);
      goto L0(r70);
    L1():
      format1 = ldf format;
      p20 = prom<V +>{
        object15 = ld object;
        object16 = force? object15;
        checkMissing(object16);
        return object16;
      };
      p21 = prom<V +>{
        digits_d3 = ld `digits.d`;
        digits_d4 = force? digits_d3;
        checkMissing(digits_d4);
        return digits_d4;
      };
      r78 = dyn format1[, digits](p20, p21);
      return r78;
    L4(dx9):
      c25 = `is.character`(dx9);
      goto L0(c25);
    L5():
      dr8 = tryDispatchBuiltin.1("$", at15);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dr8);
    L6(at17):
      r72 = `$`(at17, <sym label>);
      goto L4(r72);
    L8():
      paste3 = ldf paste;
      p19 = prom<V +>{
        at18 = ld at;
        at19 = force? at18;
        checkMissing(at19);
        c27 = `is.object`(at19);
        if c27 then L1() else L2(at19);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("$", at19);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(at21):
        r73 = `$`(at21, <sym label>);
        goto L0(r73);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r75 = dyn paste3[, , , sep]("", p19, "", "\"");
      return r75;
    L7():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L4(dx8);
    };
    r80 = dyn cat2("leaf", p22, "");
    check L123() else D42();
  L150():
    todo4 = ld todo;
    check L152() else D59();
  L151():
    r108 = dyn base11(<sym todo>);
    goto L39(r108);
  D10():
    deopt 46 [object5];
  D12():
    deopt 51 [give_attr1];
  D42():
    deopt 170 [r80];
  D59():
    deopt 227 [todo4];
  L40():
    todo6 = ld todo;
    check L156() else D60();
  L66():
    object6 = force? object5;
    checkMissing(object6);
    length = ldf length in base;
    r21 = dyn length(object6);
    check L67() else D11();
  L68():
    give_attr2 = force? give_attr1;
    checkMissing(give_attr2);
    c3 = `as.logical`(give_attr2);
    if c3 then L69() else L15();
  L123():
    hgt2 = ld hgt;
    check L124() else D43();
  L152():
    todo5 = force? todo4;
    checkMissing(todo5);
    c43 = `==`(todo5, NULL);
    goto L39(c43);
  L153():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L177() else L178();
  D11():
    deopt 49 [r21];
  D43():
    deopt 171 [hgt2];
  D60():
    deopt 232 [todo6];
  L15():
    goto L19();
  L19():
    cat1 = ldf cat;
    check L80() else D18();
  L44(r116):
    popenv;
    return r116;
  L67():
    goto L14(r21);
  L69():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L70() else L71();
  L124():
    hgt3 = force? hgt2;
    checkMissing(hgt3);
    r81 = `!=`(hgt3, 0.0);
    st `any.at` = r81;
    any_at = ld `any.at`;
    check L125() else D44();
  L156():
    todo7 = force? todo6;
    checkMissing(todo7);
    c45 = `is.object`(todo7);
    if c45 then L158() else L159(todo7);
  L177():
    invisible = ldf invisible in base;
    r117 = dyn invisible();
    check L179() else D64();
  L178():
    r115 = dyn base12();
    goto L44(r115);
  D18():
    deopt 74 [];
  D44():
    deopt 176 [any_at];
  D64():
    deopt 254 [r117];
  L16(r23):
    c5 = `as.logical`(r23);
    if c5 then L75() else L17();
  L70():
    pasteLis = ldf pasteLis;
    check L72() else D13();
  L71():
    r22 = dyn base2(<lang `<-`(at, pasteLis(at, c("class", "height", "members")))>);
    goto L16(r22);
  L80():
    p10 = prom<V +>{
      le = ld le;
      le1 = force? le;
      checkMissing(le1);
      return le1;
    };
    p11 = prom<V +>{
      memb = ld memb;
      memb1 = force? memb;
      checkMissing(memb1);
      return memb1;
    };
    p14 = prom<V +>{
      format = ldf format;
      p12 = prom<V +>{
        hgt = ld hgt;
        hgt1 = force? hgt;
        checkMissing(hgt1);
        return hgt1;
      };
      p13 = prom<V +>{
        digits_d1 = ld `digits.d`;
        digits_d2 = force? digits_d1;
        checkMissing(digits_d2);
        return digits_d2;
      };
      r39 = dyn format[, digits](p12, p13);
      return r39;
    };
    p15 = prom<V +>{
      give_attr3 = ld `give.attr`;
      give_attr4 = force? give_attr3;
      checkMissing(give_attr4);
      c6 = `as.logical`(give_attr4);
      if c6 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      at12 = ld at;
      at13 = force? at12;
      checkMissing(at13);
      return at13;
    };
    p16 = prom<V +>{
      sym4 = ldf `is.na`;
      base4 = ldf `is.na` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L3() else L4();
    L0(r43):
      r45 = `!`(r43);
      c7 = `as.logical`(r45);
      if c7 then L5() else L1(c7);
    L3():
      max_level1 = ld `max.level`;
      max_level2 = force? max_level1;
      checkMissing(max_level2);
      is_na = ldf `is.na` in base;
      r44 = dyn is_na(max_level2);
      goto L0(r44);
    L4():
      r42 = dyn base4(<sym max.level>);
      goto L0(r42);
    L1(c9):
      c13 = `as.logical`(c9);
      if c13 then L7() else L2();
    L5():
      nest_lev1 = ld `nest.lev`;
      nest_lev2 = force? nest_lev1;
      checkMissing(nest_lev2);
      max_level3 = ld `max.level`;
      max_level4 = force? max_level3;
      checkMissing(max_level4);
      r46 = `==`(nest_lev2, max_level4);
      c10 = `as.logical`(r46);
      c11 = `&&`(c7, c10);
      goto L1(c11);
    L2():
      invisible.0();
      return NULL;
    L7():
      return " ..";
    };
    r48 = dyn cat1[, , , , , , , , , , sep]("[dendrogram w/ ", p10, " branches and ", p11, " members at h = ", p14, p15, "]", p16, "\n", "");
    check L81() else D19();
  L125():
    any_at1 = force? any_at;
    checkMissing(any_at1);
    c28 = `as.logical`(any_at1);
    if c28 then L126() else L31();
  L157(dx13):
    st object = dx13;
    todo10 = ld todo;
    check L161() else D61();
  L158():
    dr12 = tryDispatchBuiltin.1("$", todo7);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L160() else L159(dr12);
  L159(todo9):
    r111 = `$`(todo9, <sym object>);
    goto L157(r111);
  L179():
    goto L44(r117);
  D13():
    deopt 56 [];
  D19():
    deopt 87 [r48];
  D61():
    deopt 236 [todo10];
  L17():
    goto L18(NULL);
  L18(r33):
    goto L19();
  L31():
    goto L32();
  L32():
    memb2 = ld memb;
    check L130() else D47();
  L72():
    p7 = prom<V +>{
      at8 = ld at;
      at9 = force? at8;
      checkMissing(at9);
      return at9;
    };
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      c4 = ldf c in base;
      r27 = dyn c4("class", "height", "members");
      goto L0(r27);
    L2():
      r25 = dyn base3("class", "height", "members");
      goto L0(r25);
    };
    r29 = dyn pasteLis(p7, p8);
    check L73() else D14();
  L75():
    paste = ldf paste;
    check L76() else D16();
  L81():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L82() else L83();
  L126():
    cat3 = ldf cat;
    check L127() else D45();
  L160():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L157(dx12);
  L161():
    todo11 = force? todo10;
    checkMissing(todo11);
    c46 = `is.object`(todo11);
    if c46 then L163() else L164(todo11);
  D14():
    deopt 59 [r29];
  D16():
    deopt 64 [];
  D45():
    deopt 179 [];
  D47():
    deopt 185 [memb2];
  L20(r50):
    c14 = `as.logical`(r50);
    if c14 then L21(c14) else L86();
  L73():
    st at = r29;
    nzchar = ldf nzchar in base;
    r30 = dyn nzchar(r29);
    check L74() else D15();
  L76():
    p9 = prom<V +>{
      at10 = ld at;
      at11 = force? at10;
      checkMissing(at11);
      return at11;
    };
    r32 = dyn paste(",", p9);
    check L77() else D17();
  L82():
    max_level5 = ld `max.level`;
    check L84() else D20();
  L83():
    r49 = dyn base5(<sym max.level>);
    goto L20(r49);
  L127():
    p25 = prom<V +>{
      format2 = ldf format;
      p23 = prom<V +>{
        hgt4 = ld hgt;
        hgt5 = force? hgt4;
        checkMissing(hgt5);
        return hgt5;
      };
      p24 = prom<V +>{
        digits_d5 = ld `digits.d`;
        digits_d6 = force? digits_d5;
        checkMissing(digits_d6);
        return digits_d6;
      };
      r84 = dyn format2[, digits](p23, p24);
      return r84;
    };
    r86 = dyn cat3("(h=", p25);
    check L128() else D46();
  L130():
    memb3 = force? memb2;
    checkMissing(memb3);
    r88 = `!=`(memb3, 1.0);
    c29 = `as.logical`(r88);
    if c29 then L131() else L33();
  L162(dx15):
    st `nest.lev` = dx15;
    todo14 = ld todo;
    check L166() else D62();
  L163():
    dr14 = tryDispatchBuiltin.1("$", todo11);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L165() else L164(dr14);
  L164(todo13):
    r112 = `$`(todo13, <sym nest.lev>);
    goto L162(r112);
  D15():
    deopt 62 [r30];
  D17():
    deopt 67 [r32];
  D20():
    deopt 90 [max_level5];
  D46():
    deopt 182 [r86];
  D62():
    deopt 240 [todo14];
  L21(c15):
    c20 = `as.logical`(c15);
    if c20 then L90() else L22();
  L33():
    goto L34();
  L34():
    pasteLis1 = ldf pasteLis;
    check L135() else D50();
  L74():
    goto L16(r30);
  L77():
    st at = r32;
    goto L18(r32);
  L84():
    max_level6 = force? max_level5;
    checkMissing(max_level6);
    is_na1 = ldf `is.na` in base;
    r51 = dyn is_na1(max_level6);
    check L85() else D21();
  L86():
    nest_lev3 = ld `nest.lev`;
    check L87() else D22();
  L128():
    goto L32();
  L131():
    cat4 = ldf cat;
    check L132() else D48();
  L165():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L162(dx14);
  L166():
    todo15 = force? todo14;
    checkMissing(todo15);
    c47 = `is.object`(todo15);
    if c47 then L168() else L169(todo15);
  D21():
    deopt 93 [r51];
  D22():
    deopt 94 [c14, nest_lev3];
  D48():
    deopt 190 [];
  D50():
    deopt 200 [];
  L22():
    goto L29(NULL);
  L29(r68):
    goto L30();
  L85():
    goto L20(r51);
  L87():
    nest_lev4 = force? nest_lev3;
    checkMissing(nest_lev4);
    max_level7 = ld `max.level`;
    check L88() else D23();
  L90():
    nest_lev5 = ld `nest.lev`;
    check L91() else D24();
  L132():
    p26 = prom<V +>{
      any_at2 = ld `any.at`;
      any_at3 = force? any_at2;
      checkMissing(any_at3);
      c30 = `as.logical`(any_at3);
      if c30 then L1() else L0();
    L0():
      st `any.at` = TRUE;
      return "(";
    L1():
      return ", ";
    };
    p27 = prom<V +>{
      memb4 = ld memb;
      memb5 = force? memb4;
      checkMissing(memb5);
      return memb5;
    };
    r91 = dyn cat4[, , , sep](p26, "memb= ", p27, "");
    check L133() else D49();
  L135():
    p28 = prom<V +>{
      at22 = ld at;
      at23 = force? at22;
      checkMissing(at23);
      return at23;
    };
    p29 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r95):
      return r95;
    L1():
      c31 = ldf c in base;
      r96 = dyn c31("class", "height", "members", "leaf", "label");
      goto L0(r96);
    L2():
      r94 = dyn base9("class", "height", "members", "leaf", "label");
      goto L0(r94);
    };
    r98 = dyn pasteLis1(p28, p29);
    check L136() else D51();
  L167(dx17):
    st `indent.str` = dx17;
    todo18 = ld todo;
    check L171() else D63();
  L168():
    dr16 = tryDispatchBuiltin.1("$", todo15);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L170() else L169(dr16);
  L169(todo17):
    r113 = `$`(todo17, <sym indent.str>);
    goto L167(r113);
  D23():
    deopt 95 [c14, nest_lev4, max_level7];
  D24():
    deopt 99 [nest_lev5];
  D49():
    deopt 196 [r91];
  D51():
    deopt 203 [r98];
  D63():
    deopt 244 [todo18];
  L88():
    max_level8 = force? max_level7;
    checkMissing(max_level8);
    r52 = `<`(nest_lev4, max_level8);
    c17 = `as.logical`(r52);
    c18 = `||`(c14, c17);
    goto L21(c18);
  L91():
    nest_lev6 = force? nest_lev5;
    checkMissing(nest_lev6);
    r53 = `+`(nest_lev6, 1);
    st `nest.lev` = r53;
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L92() else L93();
  L133():
    goto L34();
  L136():
    st at = r98;
    any_at4 = ld `any.at`;
    check L137() else D52();
  L170():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L167(dx16);
  L171():
    todo19 = force? todo18;
    checkMissing(todo19);
    c48 = `is.object`(todo19);
    if c48 then L173() else L174(todo19);
  D52():
    deopt 205 [any_at4];
  L23(r55):
    st todo = r55;
    paste2 = ldf paste;
    check L104() else D32();
  L92():
    object7 = ld object;
    check L94() else D25();
  L93():
    r54 = dyn base6[object, `nest.lev`, `indent.str`, todo](<lang `[[`(object, le)>, <sym nest.lev>, <lang paste(indent.str, "  ")>, <sym todo>);
    goto L23(r54);
  L137():
    any_at5 = force? any_at4;
    checkMissing(any_at5);
    c32 = `as.logical`(any_at5);
    if c32 then L35(c32) else L138();
  L172(dx19):
    st todo = dx19;
    goto L43();
  L173():
    dr18 = tryDispatchBuiltin.1("$", todo19);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L175() else L174(dr18);
  L174(todo21):
    r114 = `$`(todo21, <sym todo>);
    goto L172(r114);
  D25():
    deopt 106 [object7];
  D32():
    deopt 128 [];
  L35(c33):
    c41 = `as.logical`(c33);
    if c41 then L144() else L37();
  L94():
    object8 = force? object7;
    checkMissing(object8);
    c21 = `is.object`(object8);
    if c21 then L95() else L96(object8);
  L104():
    p18 = prom<V +>{
      indent_str5 = ld `indent.str`;
      indent_str6 = force? indent_str5;
      checkMissing(indent_str6);
      return indent_str6;
    };
    r61 = dyn paste2(p18, " |");
    check L105() else D33();
  L138():
    sym10 = ldf nzchar;
    base10 = ldf nzchar in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L139() else L140();
  L175():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L172(dx18);
  D33():
    deopt 131 [r61];
  L24(dx5):
    nest_lev7 = ld `nest.lev`;
    check L99() else D27();
  L36(c37, r100):
    c38 = `as.logical`(r100);
    c39 = `||`(c37, c38);
    goto L35(c39);
  L37():
    goto L38();
  L38():
    cat6 = ldf cat;
    check L148() else D57();
  L95():
    dr4 = tryDispatchBuiltin.1("[[", object8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L97() else L96(dr4);
  L96(object10):
    le2 = ld le;
    check L98() else D26();
  L105():
    st `indent.str` = r61;
    goto L28();
  L139():
    at24 = ld at;
    check L141() else D53();
  L140():
    r99 = dyn base10(<sym at>);
    goto L36(c32, r99);
  L144():
    cat5 = ldf cat;
    check L145() else D55();
  D26():
    deopt 108 [object10, le2];
  D27():
    deopt 112 [nest_lev7];
  D53():
    deopt 209 [c32, at24];
  D55():
    deopt 215 [];
  D57():
    deopt 223 [];
  L28():
    le4 = ld le;
    check L106() else D34();
  L97():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L24(dx4);
  L98():
    le3 = force? le2;
    __2 = ldf `[[` in base;
    r56 = dyn __2(object10, le3);
    goto L24(r56);
  L99():
    nest_lev8 = force? nest_lev7;
    checkMissing(nest_lev8);
    paste1 = ldf paste;
    check L100() else D28();
  L141():
    at25 = force? at24;
    checkMissing(at25);
    nzchar1 = ldf nzchar in base;
    r101 = dyn nzchar1(at25);
    check L142() else D54();
  L145():
    p30 = prom<V +>{
      any_at6 = ld `any.at`;
      any_at7 = force? any_at6;
      checkMissing(any_at7);
      r102 = `!`(any_at7);
      c42 = `as.logical`(r102);
      if c42 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "(";
    };
    p31 = prom<V +>{
      at26 = ld at;
      at27 = force? at26;
      checkMissing(at27);
      return at27;
    };
    r105 = dyn cat5(p30, p31, ")");
    check L146() else D56();
  L148():
    r107 = dyn cat6("\n");
    check L149() else D58();
  D28():
    deopt 116 [];
  D34():
    deopt 133 [le4];
  D54():
    deopt 212 [c32, r101];
  D56():
    deopt 219 [r105];
  D58():
    deopt 225 [r107];
  L100():
    p17 = prom<V +>{
      indent_str3 = ld `indent.str`;
      indent_str4 = force? indent_str3;
      checkMissing(indent_str4);
      return indent_str4;
    };
    r58 = dyn paste1(p17, "  ");
    check L101() else D29();
  L106():
    le5 = force? le4;
    checkMissing(le5);
    r62 = `-`(le5, 1);
    st le = r62;
    r63 = `>`(r62, 0);
    c22 = `as.logical`(r63);
    if c22 then L107() else L25();
  L142():
    goto L36(c32, r101);
  L146():
    goto L38();
  L149():
    goto L30();
  D29():
    deopt 119 [r58];
  L25():
    goto L29(NULL);
  L101():
    todo = ld todo;
    check L102() else D30();
  L107():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L108() else L109();
  D30():
    deopt 121 [todo];
  L26(r65):
    st todo = r65;
    goto L28();
  L102():
    todo1 = force? todo;
    checkMissing(todo1);
    list = ldf list in base;
    r59 = dyn list(dx5, nest_lev8, r58, todo1);
    check L103() else D31();
  L108():
    object11 = ld object;
    check L110() else D35();
  L109():
    r64 = dyn base7[object, `nest.lev`, `indent.str`, todo](<lang `[[`(object, le)>, <sym nest.lev>, <sym indent.str>, <sym todo>);
    goto L26(r64);
  D31():
    deopt 125 [r59];
  D35():
    deopt 142 [object11];
  L103():
    goto L23(r59);
  L110():
    object12 = force? object11;
    checkMissing(object12);
    c23 = `is.object`(object12);
    if c23 then L111() else L112(object12);
  L27(dx7):
    nest_lev9 = ld `nest.lev`;
    check L115() else D37();
  L111():
    dr6 = tryDispatchBuiltin.1("[[", object12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L113() else L112(dr6);
  L112(object14):
    le6 = ld le;
    check L114() else D36();
  D36():
    deopt 144 [object14, le6];
  D37():
    deopt 148 [nest_lev9];
  L113():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L27(dx6);
  L114():
    le7 = force? le6;
    __3 = ldf `[[` in base;
    r66 = dyn __3(object14, le7);
    goto L27(r66);
  L115():
    nest_lev10 = force? nest_lev9;
    checkMissing(nest_lev10);
    indent_str7 = ld `indent.str`;
    check L116() else D38();
  D38():
    deopt 151 [indent_str7];
  L116():
    indent_str8 = force? indent_str7;
    checkMissing(indent_str8);
    todo2 = ld todo;
    check L117() else D39();
  D39():
    deopt 154 [todo2];
  L117():
    todo3 = force? todo2;
    checkMissing(todo3);
    list1 = ldf list in base;
    r67 = dyn list1(dx7, nest_lev10, indent_str8, todo3);
    check L118() else D40();
  D40():
    deopt 158 [r67];
  L118():
    goto L26(r67);
  }
}
fun inner466533257(lis, dropNam, sep) {
  (reg lis:*, reg dropNam:*, reg sep:*) -+> V { var lis:*, var dropNam:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, reg lis1:*, reg lis2:V, reg c:L, reg lis4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg lis5:*, reg lis6:V, reg names:cls, reg r2:V, reg p:p(V +), reg dropNam1:*, reg dropNam2:V, reg p1:p(V +), reg r5:V, reg r6:V, reg __:cls, reg r7:V, reg sapply:cls, reg lis7:*, reg lis8:V, reg p2:p(V +), reg format:*, reg format1:V, reg p3:p(V +), reg digits_d:*, reg digits_d1:V, reg p4:p(V +), reg r11:V, reg paste:cls, reg paste1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg fl:*, reg fl1:V, reg names1:cls, reg r14:V, reg p5:p(V +), reg fl2:*, reg fl3:V, reg p6:p(V +), reg sep1:*, reg sep2:V, reg p7:p(V +), reg r18:V, reg p8:p(V +), reg r20:V |
    mkenv;
    st lis = lis;
    st dropNam = dropNam;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L0(" = ") else L0(sep);
  L0(sep_orDefault):
    st sep = sep_orDefault;
    lis1 = ld lis;
    check L2() else D0();
  D0():
    deopt 0 [lis1];
  L2():
    lis2 = force? lis1;
    checkMissing(lis2);
    c = `is.object`(lis2);
    if c then L3() else L4(lis2);
  L1(dx1):
    st lis = dx1;
    sapply = ldf sapply;
    check L8() else D3();
  L3():
    dr = tryDispatchBuiltin.1("[", lis2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(lis4):
    _in_ = ldf `%in%`;
    check L6() else D1();
  D1():
    deopt 3 [lis4];
  D3():
    deopt 11 [];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L6():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      lis5 = ld lis;
      lis6 = force? lis5;
      checkMissing(lis6);
      names = ldf names in base;
      r2 = dyn names(lis6);
      goto L0(r2);
    L2():
      r = dyn base(<sym lis>);
      goto L0(r);
    };
    p1 = prom<V +>{
      dropNam1 = ld dropNam;
      dropNam2 = force? dropNam1;
      checkMissing(dropNam2);
      return dropNam2;
    };
    r5 = dyn _in_(p, p1);
    check L7() else D2();
  L8():
    p2 = prom<V +>{
      lis7 = ld lis;
      lis8 = force? lis7;
      checkMissing(lis8);
      return lis8;
    };
    p3 = prom<V +>{
      format = ld format;
      format1 = force? format;
      checkMissing(format1);
      return format1;
    };
    p4 = prom<V +>{
      digits_d = ld `digits.d`;
      digits_d1 = force? digits_d;
      checkMissing(digits_d1);
      return digits_d1;
    };
    r11 = dyn sapply[, , digits](p2, p3, p4);
    check L9() else D4();
  D2():
    deopt 6 [lis4, r5];
  D4():
    deopt 16 [r11];
  L7():
    r6 = `!`(r5);
    __ = ldf `[` in base;
    r7 = dyn __(lis4, r6);
    goto L1(r7);
  L9():
    st fl = r11;
    paste = ldf paste;
    check L10() else D5();
  D5():
    deopt 19 [];
  L10():
    p8 = prom<V +>{
      paste1 = ldf paste;
      p5 = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r13):
        return r13;
      L1():
        fl = ld fl;
        fl1 = force? fl;
        checkMissing(fl1);
        names1 = ldf names in base;
        r14 = dyn names1(fl1);
        goto L0(r14);
      L2():
        r12 = dyn base1(<sym fl>);
        goto L0(r12);
      };
      p6 = prom<V +>{
        fl2 = ld fl;
        fl3 = force? fl2;
        checkMissing(fl3);
        return fl3;
      };
      p7 = prom<V +>{
        sep1 = ld sep;
        sep2 = force? sep1;
        checkMissing(sep2);
        return sep2;
      };
      r18 = dyn paste1[, , sep](p5, p6, p7);
      return r18;
    };
    r20 = dyn paste[, collapse](p8, ", ");
    check L11() else D6();
  D6():
    deopt 23 [r20];
  L11():
    popenv;
    return r20;
  }
}