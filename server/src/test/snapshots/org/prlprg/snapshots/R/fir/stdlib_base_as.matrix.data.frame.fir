fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2329594347;
    st `as.matrix.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2329594347(x, `rownames.force`, `...`) {
  (reg x:*, reg rownames_force:*, reg ddd:dots) -+> V { var x:*, var `rownames.force`:*, reg rownames_force_isMissing:L, reg rownames_force_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg _in_:cls, reg rownames_force1:*, reg rownames_force2:V, reg p:p(V +), reg r4:V, reg c:L, reg r5:V, reg _in_1:cls, reg rownames_force3:*, reg rownames_force4:V, reg p1:p(V +), reg r7:V, reg c1:L, reg c2:V, reg _row_names_info:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r9:V, reg r10:V, reg c4:L, reg c5:V, reg c7:L, reg row_names:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg rn:*, reg rn1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg x7:*, reg x8:V, reg names:cls, reg r17:V, reg list:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg dm:*, reg dm1:V, reg r21:V, reg any:cls, reg r22:V, reg c8:L, reg array:cls, reg dm2:*, reg dm3:V, reg p4:p(V +), reg dn:*, reg dn1:V, reg p5:p(V +), reg r25:V, reg dm4:*, reg dm5:V, reg c9:L, reg dm7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg p6:*, reg p7:V, reg r31:I, reg dm8:*, reg dm9:V, reg c10:L, reg dm11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg x9:*, reg x10:V, reg unclass:cls, reg r35:V, reg pseq:*, reg pseq1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c11:L, reg x11:V, reg X:*, reg X1:V, reg c12:L, reg i6:I, reg X3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i8:I, reg dx5:V, reg j:*, reg j1:V, reg __2:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg i11:I, reg r38:V, reg xj:*, reg xj1:V, reg inherits:cls, reg r39:V, reg c13:L, reg as_matrix:cls, reg xj2:*, reg xj3:V, reg p8:p(V +), reg r41:V, reg l1:*, reg c14:L, reg i15:I, reg r43:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i17:I, reg r45:V, reg dx7:V, reg j2:*, reg j3:V, reg ____:cls, reg r46:V, reg i18:I, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg i21:I, reg r49:V, reg xj4:*, reg xj5:V, reg c15:L, reg all_logical:*, reg all_logical1:V, reg c16:L, reg i23:I, reg c18:V, reg j_logic:*, reg j_logic1:V, reg r50:V, reg c19:L, reg c20:V, reg c22:L, reg i27:I, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg i30:I, reg r53:V, reg levels:cls, reg xj6:*, reg xj7:V, reg p9:p(V +), reg r55:V, reg length:cls, reg r56:V, reg r57:V, reg c23:L, reg i31:I, reg c24:V, reg j_logic2:*, reg j_logic3:V, reg c26:L, reg i33:I, reg c27:L, reg c28:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg i37:I, reg c35:L, reg c36:L, reg r59:V, reg xj8:*, reg xj9:V, reg is_numeric:cls, reg r60:V, reg c37:L, reg c38:V, reg c41:L, reg i39:I, reg c42:L, reg c43:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg i43:I, reg c50:L, reg c51:L, reg r62:V, reg xj10:*, reg xj11:V, reg c52:L, reg c53:L, reg c54:V, reg r63:V, reg c57:L, reg c58:V, reg c60:L, reg i46:I, reg c61:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r64:V, reg i50:I, reg c65:L, reg r65:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r66:V, reg i53:I, reg c68:L, reg r67:V, reg xj12:*, reg xj13:V, reg attr:cls, reg r68:V, reg c69:V, reg r69:V, reg c70:L, reg i55:I, reg c73:L, reg c74:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r70:V, reg i58:I, reg c79:L, reg c80:L, reg r71:V, reg _in_2:cls, reg cl:*, reg cl1:V, reg p10:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r73:V, reg r74:V, reg c81:cls, reg r75:V, reg p11:p(V +), reg r77:V, reg any1:cls, reg r78:V, reg c82:L, reg c83:V, reg c86:L, reg c87:V, reg c89:L, reg i63:I, reg sym15:cls, reg base15:cls, reg guard15:L, reg r80:V, reg i66:I, reg r81:V, reg xj14:*, reg xj15:V, reg is_atomic:cls, reg r82:V, reg r83:V, reg c90:L, reg i68:I, reg c92:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r84:V, reg i71:I, reg c95:L, reg r85:V, reg xj16:*, reg xj17:V, reg inherits1:cls, reg r86:V, reg r87:V, reg c96:L, reg c97:V, reg c99:L, reg i75:I, reg non_atomic:*, reg non_atomic1:V, reg c100:L, reg pseq2:*, reg pseq3:V, reg s1:V, reg l4:I, reg i76:I, reg i77:I, reg i78:I, reg c101:L, reg x12:V, reg X4:*, reg X5:V, reg c102:L, reg i82:I, reg X7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i84:I, reg dx9:V, reg j4:*, reg j5:V, reg __3:cls, reg r89:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r90:V, reg i87:I, reg r91:V, reg xj18:*, reg xj19:V, reg is_recursive:cls, reg r92:V, reg r93:V, reg c103:L, reg as_list:cls, reg as_vector:cls, reg xj20:*, reg xj21:V, reg p12:p(V +), reg r95:V, reg p13:p(V +), reg r97:V, reg l5:*, reg c104:L, reg i91:I, reg r99:V, reg l7:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i93:I, reg r101:V, reg dx11:V, reg j6:*, reg j7:V, reg ____1:cls, reg r102:V, reg i94:I, reg all_logical2:*, reg all_logical3:V, reg c105:L, reg non_numeric:*, reg non_numeric1:V, reg c106:L, reg pseq4:*, reg pseq5:V, reg s2:V, reg l8:I, reg i96:I, reg i97:I, reg i98:I, reg c107:L, reg x13:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r104:V, reg i103:I, reg r105:V, reg X8:*, reg X9:V, reg c108:L, reg i105:I, reg X11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i107:I, reg dx13:V, reg j8:*, reg j9:V, reg __4:cls, reg r106:V, reg c109:L, reg c110:L, reg i111:I, reg sym19:cls, reg base19:cls, reg guard19:L, reg r108:V, reg i114:I, reg r109:V, reg X12:*, reg X13:V, reg c111:L, reg i116:I, reg X15:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i118:I, reg dx15:V, reg j10:*, reg j11:V, reg __5:cls, reg r110:V, reg c112:L, reg c113:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r111:V, reg i123:I, reg r112:V, reg xj22:*, reg xj23:V, reg as_character:cls, reg r113:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r114:V, reg i126:I, reg r115:V, reg xj24:*, reg xj25:V, reg is_na:cls, reg r116:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r117:V, reg i129:I, reg r118:V, reg levels1:cls, reg xj26:*, reg xj27:V, reg p14:p(V +), reg r120:V, reg length1:cls, reg r121:V, reg c114:L, reg as_vector1:cls, reg xj28:*, reg xj29:V, reg p15:p(V +), reg r123:V, reg i132:I, reg r124:V, reg format:cls, reg xj30:*, reg xj31:V, reg p16:p(V +), reg r126:V, reg miss:*, reg miss1:V, reg l9:*, reg is_na__:cls, reg r127:V, reg xj32:*, reg xj33:V, reg l10:*, reg c115:L, reg i134:I, reg xj35:V, reg l12:*, reg dr16:V, reg dc8:L, reg dx16:V, reg i136:I, reg dx17:V, reg j12:*, reg j13:V, reg ____2:cls, reg r128:V, reg as_list1:cls, reg dn2:*, reg dn3:V, reg c116:L, reg dn5:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __6:cls, reg r129:V, reg p17:p(V +), reg r131:V, reg pseq6:*, reg pseq7:V, reg s3:V, reg l13:I, reg i137:I, reg i138:I, reg i139:I, reg c117:L, reg x14:V, reg X16:*, reg X17:V, reg c118:L, reg i143:I, reg X19:V, reg dr20:V, reg dc10:L, reg dx20:V, reg i145:I, reg dx21:V, reg j14:*, reg j15:V, reg __7:cls, reg r132:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r133:V, reg i148:I, reg r134:V, reg xj38:*, reg xj39:V, reg dim1:cls, reg r135:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r136:V, reg i151:I, reg r137:V, reg dj:*, reg dj1:V, reg length2:cls, reg r138:V, reg r139:V, reg c119:L, reg i153:I, reg c121:V, reg dj2:*, reg dj3:V, reg c122:L, reg i155:I, reg c124:L, reg dj5:V, reg dr22:V, reg dc11:L, reg dx22:V, reg i157:I, reg c126:L, reg dx23:V, reg __8:cls, reg r140:V, reg r141:V, reg c127:L, reg c128:V, reg c130:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r142:V, reg i163:I, reg r143:V, reg colnames:cls, reg xj40:*, reg xj41:V, reg p18:p(V +), reg r145:V, reg length3:cls, reg r146:V, reg r147:V, reg c131:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r148:V, reg i168:I, reg r149:V, reg dj6:*, reg dj7:V, reg c132:L, reg i170:I, reg dj9:V, reg dr24:V, reg dc12:L, reg dx24:V, reg i172:I, reg dx25:V, reg __9:cls, reg r150:V, reg r151:I, reg i173:I, reg sym27:cls, reg base27:cls, reg guard27:L, reg r153:V, reg i176:I, reg r154:V, reg collabs:*, reg collabs1:V, reg length4:cls, reg r155:V, reg c133:L, reg dj10:*, reg dj11:V, reg c134:L, reg i180:I, reg dj13:V, reg dr26:V, reg dc13:L, reg dx26:V, reg i182:I, reg dx27:V, reg __10:cls, reg r156:V, reg r157:V, reg c135:L, reg paste:cls, reg collabs2:*, reg collabs3:V, reg c136:L, reg collabs5:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg j16:*, reg j17:V, reg __11:cls, reg r158:V, reg p19:p(V +), reg dnj:*, reg dnj1:V, reg p20:p(V +), reg r161:V, reg i185:I, reg r162:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r163:V, reg i188:I, reg r164:V, reg collabs6:*, reg collabs7:V, reg c137:L, reg i190:I, reg collabs9:V, reg dr30:V, reg dc15:L, reg dx30:V, reg i192:I, reg dx31:V, reg j18:*, reg j19:V, reg __12:cls, reg r165:V, reg c138:L, reg c139:L, reg collabs10:*, reg collabs11:V, reg c140:L, reg i196:I, reg collabs13:V, reg dr32:V, reg dc16:L, reg dx32:V, reg i198:I, reg dx33:V, reg j20:*, reg j21:V, reg __13:cls, reg r166:V, reg dnj2:*, reg dnj3:V, reg i199:I, reg r167:V, reg dnj4:*, reg dnj5:V, reg l14:*, reg c141:L, reg i201:I, reg r169:V, reg l16:*, reg dr34:V, reg dc17:L, reg dx34:V, reg i203:I, reg r171:V, reg dx35:V, reg j22:*, reg j23:V, reg ____3:cls, reg r172:V, reg i204:I, reg vapply:cls, reg X20:*, reg X21:V, reg p21:p(V +), reg NCOL:*, reg NCOL1:V, reg p22:p(V +), reg numeric:cls, reg r176:V, reg p23:p(V +), reg r178:V, reg unlist:cls, reg X22:*, reg X23:V, reg p24:p(V +), reg r180:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r181:V, reg r182:V, reg n:*, reg n1:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r183:V, reg r184:V, reg X24:*, reg X25:V, reg length5:cls, reg r185:V, reg n2:*, reg n3:V, reg r186:V, reg c142:cls, reg r187:V, reg l17:*, reg dim__:cls, reg r188:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r189:V, reg r190:V, reg dn6:*, reg dn7:V, reg c143:L, reg dn9:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg __14:cls, reg r191:V, reg unlist1:cls, reg collabs14:*, reg collabs15:V, reg c144:L, reg collabs17:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg nc:*, reg nc1:V, reg r192:V, reg __15:cls, reg r193:V, reg p25:p(V +), reg r195:V, reg list1:cls, reg r196:V, reg l18:*, reg dimnames__:cls, reg r197:V, reg X26:*, reg X27:V |
    mkenv;
    st x = x;
    rownames_force_isMissing = missing.0(rownames_force);
    if rownames_force_isMissing then L0(NA_LGL) else L0(rownames_force);
  L0(rownames_force_orDefault):
    st `rownames.force` = rownames_force_orDefault;
    st `...` = ddd;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L99() else L100();
  L1(r1):
    st dm = r1;
    _in_ = ldf `%in%`;
    check L103() else D2();
  L99():
    x1 = ld x;
    check L101() else D0();
  L100():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [];
  L101():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L102() else D1();
  L103():
    p = prom<V +>{
      rownames_force1 = ld `rownames.force`;
      rownames_force2 = force? rownames_force1;
      checkMissing(rownames_force2);
      return rownames_force2;
    };
    r4 = dyn _in_(p, FALSE);
    check L104() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 11 [r4];
  L102():
    goto L1(r2);
  L104():
    c = `as.logical`(r4);
    if c then L105() else L2();
  L2():
    _in_1 = ldf `%in%`;
    check L107() else D4();
  L3(r5):
    st rn = r5;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L117() else L118();
  L105():
    goto L3(NULL);
  D4():
    deopt 15 [];
  L6(r14):
    st dn = r14;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L125() else L126();
  L107():
    p1 = prom<V +>{
      rownames_force3 = ld `rownames.force`;
      rownames_force4 = force? rownames_force3;
      checkMissing(rownames_force4);
      return rownames_force4;
    };
    r7 = dyn _in_1(p1, TRUE);
    check L108() else D5();
  L117():
    rn = ld rn;
    check L119() else D10();
  L118():
    r13 = dyn base1(<sym rn>, <lang names(x)>);
    goto L6(r13);
  D5():
    deopt 18 [r7];
  D10():
    deopt 35 [rn];
  L8(r20):
    c8 = `as.logical`(r20);
    if c8 then L129() else L9();
  L108():
    c1 = `as.logical`(r7);
    if c1 then L4(c1) else L109();
  L119():
    rn1 = force? rn;
    checkMissing(rn1);
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L120() else L121();
  L125():
    dm = ld dm;
    check L127() else D14();
  L126():
    r19 = dyn base3(<lang `==`(dm, 0)>);
    goto L8(r19);
  D14():
    deopt 48 [dm];
  L4(c2):
    c7 = `as.logical`(c2);
    if c7 then L113() else L5();
  L7(r16):
    list = ldf list in base;
    r18 = dyn list(rn1, r16);
    check L124() else D13();
  L9():
    dm4 = ld dm;
    check L134() else D18();
  L109():
    _row_names_info = ldf `.row_names_info`;
    check L110() else D6();
  L120():
    x7 = ld x;
    check L122() else D11();
  L121():
    r15 = dyn base2(<sym x>);
    goto L7(r15);
  L127():
    dm1 = force? dm;
    checkMissing(dm1);
    r21 = `==`(dm1, 0);
    any = ldf any in base;
    r22 = dyn any(r21);
    check L128() else D15();
  L129():
    array = ldf array;
    check L130() else D16();
  D6():
    deopt 20 [c1];
  D11():
    deopt 39 [x7];
  D13():
    deopt 44 [r18];
  D15():
    deopt 53 [r22];
  D16():
    deopt 55 [];
  D18():
    deopt 65 [dm4];
  L5():
    goto L3(NULL);
  L110():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r9 = dyn _row_names_info(p2);
    check L111() else D7();
  L113():
    row_names = ldf `row.names`;
    check L114() else D8();
  L122():
    x8 = force? x7;
    checkMissing(x8);
    names = ldf names in base;
    r17 = dyn names(x8);
    check L123() else D12();
  L124():
    goto L6(r18);
  L128():
    goto L8(r22);
  L130():
    p4 = prom<V +>{
      dm2 = ld dm;
      dm3 = force? dm2;
      checkMissing(dm3);
      return dm3;
    };
    p5 = prom<V +>{
      dn = ld dn;
      dn1 = force? dn;
      checkMissing(dn1);
      return dn1;
    };
    r25 = dyn array[, dim, dimnames](NA_LGL, p4, p5);
    check L131() else D17();
  L134():
    dm5 = force? dm4;
    checkMissing(dm5);
    c9 = `is.object`(dm5);
    if c9 then L135() else L136(dm5);
  D7():
    deopt 22 [c1, r9];
  D8():
    deopt 27 [];
  D12():
    deopt 42 [r17];
  D17():
    deopt 61 [r25];
  L11(dx1):
    st p = dx1;
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L138() else L139();
  L111():
    r10 = `>`(r9, 0);
    c4 = `as.logical`(r10);
    c5 = `||`(c1, c4);
    goto L4(c5);
  L114():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r12 = dyn row_names(p3);
    check L115() else D9();
  L123():
    goto L7(r17);
  L131():
    popenv;
    return r25;
  L135():
    dr = tryDispatchBuiltin.1("[", dm5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L137() else L136(dr);
  L136(dm7):
    __ = ldf `[` in base;
    r28 = dyn __(dm7, 2);
    goto L11(r28);
  D9():
    deopt 29 [r12];
  L12(r30):
    st pseq = r30;
    dm8 = ld dm;
    check L141() else D20();
  L115():
    goto L3(r12);
  L137():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L138():
    p6 = ld p;
    check L140() else D19();
  L139():
    r29 = dyn base4(<sym p>);
    goto L12(r29);
  D19():
    deopt 72 [p6];
  D20():
    deopt 76 [dm8];
  L140():
    p7 = force? p6;
    checkMissing(p7);
    r31 = seq_len(p7);
    goto L12(r31);
  L141():
    dm9 = force? dm8;
    checkMissing(dm9);
    c10 = `is.object`(dm9);
    if c10 then L142() else L143(dm9);
  L13(dx3):
    st n = dx3;
    sym5 = ldf unclass;
    base5 = ldf unclass in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L145() else L146();
  L142():
    dr2 = tryDispatchBuiltin.1("[", dm9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L144() else L143(dr2);
  L143(dm11):
    __1 = ldf `[` in base;
    r32 = dyn __1(dm11, 1);
    goto L13(r32);
  L14(r34):
    st X = r34;
    st `non.atomic` = FALSE;
    st `non.numeric` = FALSE;
    st `all.logical` = TRUE;
    pseq = ld pseq;
    check L149() else D23();
  L144():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L145():
    x9 = ld x;
    check L147() else D21();
  L146():
    r33 = dyn base5(<sym x>);
    goto L14(r33);
  D21():
    deopt 84 [x9];
  D23():
    deopt 96 [pseq];
  L147():
    x10 = force? x9;
    checkMissing(x10);
    unclass = ldf unclass in base;
    r35 = dyn unclass(x10);
    check L148() else D22();
  L149():
    pseq1 = force? pseq;
    checkMissing(pseq1);
    s = toForSeq(pseq1);
    l = length(s);
    i = 0;
    goto L15(i);
  D22():
    deopt 87 [r35];
  L15(i1):
    i2 = `+`.1(i1, 1);
    c11 = `<`.1(l, i2);
    if c11 then L150() else L43();
  L148():
    goto L14(r35);
  L43():
    x11 = `[[`(s, i2, NULL, TRUE);
    st j = x11;
    X = ld X;
    check L151() else D24();
  L150():
    non_atomic = ld `non.atomic`;
    check L225() else D50();
  D24():
    deopt 98 [i2, X];
  D50():
    deopt 218 [non_atomic];
  L151():
    X1 = force? X;
    checkMissing(X1);
    c12 = `is.object`(X1);
    if c12 then L152() else L153(i2, X1);
  L225():
    non_atomic1 = force? non_atomic;
    checkMissing(non_atomic1);
    c100 = `as.logical`(non_atomic1);
    if c100 then L226() else L44();
  L16(i8, dx5):
    st xj = dx5;
    sym6 = ldf inherits;
    base6 = ldf inherits in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L156() else L157();
  L44():
    all_logical2 = ld `all.logical`;
    check L247() else D59();
  L52():
    as_list1 = ldf `as.list`;
    check L301() else D82();
  L152():
    dr4 = tryDispatchBuiltin.1("[[", X1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L154() else L153(i2, dr4);
  L153(i6, X3):
    j = ld j;
    check L155() else D25();
  L226():
    pseq2 = ld pseq;
    check L227() else D51();
  D25():
    deopt 100 [i6, X3, j];
  D51():
    deopt 220 [pseq2];
  D59():
    deopt 249 [all_logical2];
  D82():
    deopt 325 [];
  L17(i11, r38):
    c13 = `as.logical`(r38);
    if c13 then L160() else L18();
  L154():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(i2, dx4);
  L155():
    j1 = force? j;
    __2 = ldf `[[` in base;
    r36 = dyn __2(X3, j1);
    goto L16(i6, r36);
  L156():
    xj = ld xj;
    check L158() else D26();
  L157():
    r37 = dyn base6(<sym xj>, "data.frame");
    goto L17(i8, r37);
  L227():
    pseq3 = force? pseq2;
    checkMissing(pseq3);
    s1 = toForSeq(pseq3);
    l4 = length(s1);
    i76 = 0;
    goto L45(i76);
  L247():
    all_logical3 = force? all_logical2;
    checkMissing(all_logical3);
    c105 = `as.logical`(all_logical3);
    if c105 then L248() else L53();
  L301():
    p17 = prom<V +>{
      dn2 = ld dn;
      dn3 = force? dn2;
      checkMissing(dn3);
      c116 = `is.object`(dn3);
      if c116 then L1() else L2(dn3);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", dn3);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(dn5):
      __6 = ldf `[[` in base;
      r129 = dyn __6(dn5, 2);
      goto L0(r129);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r131 = dyn as_list1(p17);
    check L302() else D83();
  D26():
    deopt 106 [i8, xj];
  D83():
    deopt 327 [r131];
  L18():
    goto L20(i11);
  L20(i18):
    sym7 = ldf `is.logical`;
    base7 = ldf `is.logical` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L168() else L169();
  L45(i77):
    i78 = `+`.1(i77, 1);
    c101 = `<`.1(l4, i78);
    if c101 then L228() else L51();
  L53():
    non_numeric = ld `non.numeric`;
    check L250() else D60();
  L158():
    xj1 = force? xj;
    checkMissing(xj1);
    inherits = ldf inherits in base;
    r39 = dyn inherits(xj1, "data.frame", FALSE);
    check L159() else D27();
  L160():
    as_matrix = ldf `as.matrix`;
    check L161() else D28();
  L248():
    goto L52();
  L302():
    st collabs = r131;
    pseq6 = ld pseq;
    check L303() else D84();
  D27():
    deopt 111 [i8, r39];
  D28():
    deopt 113 [i11];
  D60():
    deopt 253 [non_numeric];
  D84():
    deopt 329 [pseq6];
  L21(i21, r49):
    st `j.logic` = r49;
    all_logical = ld `all.logical`;
    check L171() else D32();
  L51():
    x12 = `[[`(s1, i78, NULL, TRUE);
    st j = x12;
    X4 = ld X;
    check L229() else D52();
  L159():
    goto L17(i8, r39);
  L161():
    p8 = prom<V +>{
      xj2 = ld xj;
      xj3 = force? xj2;
      checkMissing(xj3);
      return xj3;
    };
    r41 = dyn as_matrix(p8);
    check L162() else D29();
  L168():
    xj4 = ld xj;
    check L170() else D31();
  L169():
    r48 = dyn base7(<sym xj>);
    goto L21(i18, r48);
  L228():
    goto L52();
  L250():
    non_numeric1 = force? non_numeric;
    checkMissing(non_numeric1);
    c106 = `as.logical`(non_numeric1);
    if c106 then L251() else L54();
  L303():
    pseq7 = force? pseq6;
    checkMissing(pseq7);
    s3 = toForSeq(pseq7);
    l13 = length(s3);
    i137 = 0;
    goto L70(i137);
  D29():
    deopt 115 [i11, r41];
  D31():
    deopt 125 [i18, xj4];
  D32():
    deopt 129 [i21, all_logical];
  D52():
    deopt 222 [i78, X4];
  L54():
    goto L52();
  L70(i138):
    i139 = `+`.1(i138, 1);
    c117 = `<`.1(l13, i139);
    if c117 then L304() else L94();
  L162():
    st xj = r41;
    l1 = ld X;
    c14 = `is.object`(l1);
    if c14 then L163() else L164(i11, r41, l1);
  L170():
    xj5 = force? xj4;
    checkMissing(xj5);
    c15 = `is.logical`(xj5);
    goto L21(i18, c15);
  L171():
    all_logical1 = force? all_logical;
    checkMissing(all_logical1);
    c16 = `as.logical`(all_logical1);
    if c16 then L172() else L22(i21, c16);
  L229():
    X5 = force? X4;
    checkMissing(X5);
    c102 = `is.object`(X5);
    if c102 then L230() else L231(i78, X5);
  L251():
    pseq4 = ld pseq;
    check L252() else D61();
  D61():
    deopt 255 [pseq4];
  L19(i17, r45, dx7):
    st X = dx7;
    goto L20(i17);
  L22(i23, c18):
    c22 = `as.logical`(c18);
    if c22 then L175() else L23();
  L46(i84, dx9):
    st xj = dx9;
    sym17 = ldf `is.recursive`;
    base17 = ldf `is.recursive` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L234() else L235();
  L94():
    x14 = `[[`(s3, i139, NULL, TRUE);
    st j = x14;
    X16 = ld X;
    check L305() else D85();
  L163():
    dr6 = tryDispatchBuiltin.0("[[<-", l1, r41);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L165() else L164(i11, r41, dr6);
  L164(i15, r43, l3):
    j2 = ld j;
    check L166() else D30();
  L172():
    j_logic = ld `j.logic`;
    check L173() else D33();
  L230():
    dr8 = tryDispatchBuiltin.1("[[", X5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L232() else L231(i78, dr8);
  L231(i82, X7):
    j4 = ld j;
    check L233() else D53();
  L252():
    pseq5 = force? pseq4;
    checkMissing(pseq5);
    s2 = toForSeq(pseq5);
    l8 = length(s2);
    i96 = 0;
    goto L55(i96);
  L304():
    vapply = ldf vapply;
    check L373() else D108();
  D30():
    deopt 118 [i15, r43, l3, r41, j2];
  D33():
    deopt 131 [i21, c16, j_logic];
  D53():
    deopt 224 [i82, X7, j4];
  D85():
    deopt 331 [i139, X16];
  D108():
    deopt 427 [];
  L23():
    goto L24(i23);
  L24(i27):
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L177() else L178();
  L47(i87, r91):
    r93 = `!`(r91);
    c103 = `as.logical`(r93);
    if c103 then L238() else L48();
  L55(i97):
    i98 = `+`.1(i97, 1);
    c107 = `<`.1(l8, i98);
    if c107 then L253() else L69();
  L165():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L19(i11, r41, dx6);
  L166():
    j3 = force? j2;
    ____ = ldf `[[<-` in base;
    r46 = dyn ____(l3, r41, j3);
    goto L19(i15, r43, r46);
  L173():
    j_logic1 = force? j_logic;
    checkMissing(j_logic1);
    r50 = `!`(j_logic1);
    c19 = `as.logical`(r50);
    c20 = `&&`(c16, c19);
    goto L22(i21, c20);
  L175():
    st `all.logical` = FALSE;
    goto L24(i23);
  L232():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L46(i78, dx8);
  L233():
    j5 = force? j4;
    __3 = ldf `[[` in base;
    r89 = dyn __3(X7, j5);
    goto L46(i82, r89);
  L234():
    xj18 = ld xj;
    check L236() else D54();
  L235():
    r90 = dyn base17(<sym xj>);
    goto L47(i84, r90);
  L305():
    X17 = force? X16;
    checkMissing(X17);
    c118 = `is.object`(X17);
    if c118 then L306() else L307(i139, X17);
  L373():
    p21 = prom<V +>{
      X20 = ld X;
      X21 = force? X20;
      checkMissing(X21);
      return X21;
    };
    p22 = prom<V +>{
      NCOL = ld NCOL;
      NCOL1 = force? NCOL;
      checkMissing(NCOL1);
      return NCOL1;
    };
    p23 = prom<V +>{
      numeric = ldf numeric;
      r176 = dyn numeric(1.0);
      return r176;
    };
    r178 = dyn vapply[, , , `USE.NAMES`](p21, p22, p23, FALSE);
    check L374() else D109();
  D54():
    deopt 230 [i84, xj18];
  D109():
    deopt 433 [r178];
  L25(i30, r53):
    r57 = `>`(r53, 0);
    c23 = `as.logical`(r57);
    if c23 then L26(i30, c23) else L182();
  L48():
    goto L50(i87);
  L50(i94):
    goto L45(i94);
  L69():
    x13 = `[[`(s2, i98, NULL, TRUE);
    st j = x13;
    sym18 = ldf `is.character`;
    base18 = ldf `is.character` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L254() else L255();
  L71(i145, dx21):
    st xj = dx21;
    sym23 = ldf dim;
    base23 = ldf dim in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L310() else L311();
  L177():
    levels = ldf levels;
    check L179() else D34();
  L178():
    r52 = dyn base8(<lang levels(xj)>);
    goto L25(i27, r52);
  L236():
    xj19 = force? xj18;
    checkMissing(xj19);
    is_recursive = ldf `is.recursive` in base;
    r92 = dyn is_recursive(xj19);
    check L237() else D55();
  L238():
    as_list = ldf `as.list`;
    check L239() else D56();
  L253():
    goto L52();
  L306():
    dr20 = tryDispatchBuiltin.1("[[", X17);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L308() else L307(i139, dr20);
  L307(i143, X19):
    j14 = ld j;
    check L309() else D86();
  L374():
    st nc = r178;
    unlist = ldf unlist;
    check L375() else D110();
  D34():
    deopt 143 [i27];
  D55():
    deopt 233 [i84, r92];
  D56():
    deopt 236 [i87];
  D86():
    deopt 333 [i143, X19, j14];
  D110():
    deopt 436 [];
  L26(i31, c24):
    c60 = `as.logical`(c24);
    if c60 then L31(i31, c60) else L196();
  L56(i103, r105):
    c110 = `as.logical`(r105);
    if c110 then L261() else L58();
  L72(i148, r134):
    st dj = r134;
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L314() else L315();
  L179():
    p9 = prom<V +>{
      xj6 = ld xj;
      xj7 = force? xj6;
      checkMissing(xj7);
      return xj7;
    };
    r55 = dyn levels(p9);
    check L180() else D35();
  L182():
    j_logic2 = ld `j.logic`;
    check L183() else D37();
  L237():
    goto L47(i84, r92);
  L239():
    p13 = prom<V +>{
      as_vector = ldf `as.vector`;
      p12 = prom<V +>{
        xj20 = ld xj;
        xj21 = force? xj20;
        checkMissing(xj21);
        return xj21;
      };
      r95 = dyn as_vector(p12);
      return r95;
    };
    r97 = dyn as_list(p13);
    check L240() else D57();
  L254():
    X8 = ld X;
    check L256() else D62();
  L255():
    r104 = dyn base18(<lang `[[`(X, j)>);
    goto L56(i98, r104);
  L308():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L71(i139, dx20);
  L309():
    j15 = force? j14;
    __7 = ldf `[[` in base;
    r132 = dyn __7(X19, j15);
    goto L71(i143, r132);
  L310():
    xj38 = ld xj;
    check L312() else D87();
  L311():
    r133 = dyn base23(<sym xj>);
    goto L72(i145, r133);
  L375():
    p24 = prom<V +>{
      X22 = ld X;
      X23 = force? X22;
      checkMissing(X23);
      return X23;
    };
    r180 = dyn unlist[, recursive, `use.names`](p24, FALSE, FALSE);
    check L376() else D111();
  D35():
    deopt 145 [i27, r55];
  D37():
    deopt 150 [i30, c23, j_logic2];
  D57():
    deopt 238 [i87, r97];
  D62():
    deopt 258 [i98, X8];
  D87():
    deopt 339 [i145, xj38];
  D111():
    deopt 442 [r180];
  L31(i46, c61):
    c89 = `as.logical`(c61);
    if c89 then L211() else L36();
  L58():
    sym19 = ldf `is.logical`;
    base19 = ldf `is.logical` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L264() else L265();
  L73(i151, r137):
    r139 = `==`(r137, 2);
    c119 = `as.logical`(r139);
    if c119 then L318() else L74(i151, c119);
  L180():
    length = ldf length in base;
    r56 = dyn length(r55);
    check L181() else D36();
  L183():
    j_logic3 = force? j_logic2;
    checkMissing(j_logic3);
    c26 = `as.logical`(j_logic3);
    if c26 then L27(i30, c23, c26) else L184();
  L196():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L197() else L198();
  L240():
    l5 = ld X;
    c104 = `is.object`(l5);
    if c104 then L241() else L242(i87, r97, l5);
  L256():
    X9 = force? X8;
    checkMissing(X9);
    c108 = `is.object`(X9);
    if c108 then L257() else L258(i98, X9);
  L261():
    goto L55(i103);
  L312():
    xj39 = force? xj38;
    checkMissing(xj39);
    dim1 = ldf dim in base;
    r135 = dyn dim1(xj39);
    check L313() else D88();
  L314():
    dj = ld dj;
    check L316() else D89();
  L315():
    r136 = dyn base24(<sym dj>);
    goto L73(i148, r136);
  L376():
    st X = r180;
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L377() else L378();
  D36():
    deopt 147 [i27, r56];
  D88():
    deopt 342 [i145, r135];
  D89():
    deopt 346 [i148, dj];
  L27(i33, c27, c28):
    c41 = `as.logical`(c28);
    if c41 then L29(i33, c27, c41) else L190();
  L32(i50, c65, r65):
    r69 = `!`(r65);
    c70 = `as.logical`(r69);
    if c70 then L203() else L34(i50, c65, c70);
  L36():
    goto L37(i46);
  L37(i63):
    sym15 = ldf `is.atomic`;
    base15 = ldf `is.atomic` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L213() else L214();
  L49(i93, r101, dx11):
    st X = dx11;
    goto L50(i93);
  L57(i107, dx13):
    c109 = `is.character`(dx13);
    goto L56(i107, c109);
  L60(i114, r109):
    c113 = `as.logical`(r109);
    if c113 then L271() else L62();
  L74(i153, c121):
    c130 = `as.logical`(c121);
    if c130 then L324() else L76();
  L95(r182):
    l17 = ld X;
    dim__ = ldf `dim<-`;
    check L386() else D117();
  L181():
    goto L25(i27, r56);
  L184():
    sym9 = ldf `is.numeric`;
    base9 = ldf `is.numeric` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L185() else L186();
  L197():
    sym12 = ldf attr;
    base12 = ldf attr in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L199() else L200();
  L198():
    r64 = dyn base11(<lang `<-`(cl, attr(xj, "class"))>);
    goto L32(i31, c60, r64);
  L211():
    st `non.numeric` = TRUE;
    goto L37(i46);
  L241():
    dr10 = tryDispatchBuiltin.0("[[<-", l5, r97);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L243() else L242(i87, r97, dr10);
  L242(i91, r99, l7):
    j6 = ld j;
    check L244() else D58();
  L257():
    dr12 = tryDispatchBuiltin.1("[[", X9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L259() else L258(i98, dr12);
  L258(i105, X11):
    j8 = ld j;
    check L260() else D63();
  L264():
    X12 = ld X;
    check L266() else D64();
  L265():
    r108 = dyn base19(<lang `<-`(xj, `[[`(X, j))>);
    goto L60(i103, r108);
  L313():
    goto L72(i145, r135);
  L316():
    dj1 = force? dj;
    checkMissing(dj1);
    length2 = ldf length in base;
    r138 = dyn length2(dj1);
    check L317() else D90();
  L318():
    dj2 = ld dj;
    check L319() else D91();
  L377():
    n = ld n;
    check L379() else D112();
  L378():
    r181 = dyn base29(<sym n>, <lang `/`(length(X), n)>);
    goto L95(r181);
  D58():
    deopt 240 [i91, r99, l7, r97, j6];
  D63():
    deopt 260 [i105, X11, j8];
  D64():
    deopt 267 [i103, X12];
  D90():
    deopt 349 [i148, r138];
  D91():
    deopt 352 [i151, c119, dj2];
  D112():
    deopt 446 [n];
  D117():
    deopt 459 [r182, l17, r182];
  L28(i37, c35, c36, r59):
    c37 = `as.logical`(r59);
    c38 = `||`(c36, c37);
    goto L27(i37, c35, c38);
  L29(i39, c42, c43):
    r63 = `!`(c43);
    c57 = `as.logical`(r63);
    c58 = `||`(c42, c57);
    goto L26(i39, c58);
  L33(i53, c68, r67):
    st cl = r67;
    c69 = `==`(r67, NULL);
    goto L32(i53, c68, c69);
  L34(i55, c73, c74):
    c86 = `as.logical`(c74);
    c87 = `||`(c73, c86);
    goto L31(i55, c87);
  L38(i66, r81):
    r83 = `!`(r81);
    c90 = `as.logical`(r83);
    if c90 then L217() else L39(i66, c90);
  L59(i111):
    xj32 = ld xj;
    check L295() else D80();
  L62():
    sym21 = ldf `is.na`;
    base21 = ldf `is.na` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L277() else L278();
  L76():
    goto L93(i153);
  L93(i204):
    goto L70(i204);
  L185():
    xj8 = ld xj;
    check L187() else D38();
  L186():
    r58 = dyn base9(<sym xj>);
    goto L28(i30, c23, c26, r58);
  L190():
    sym10 = ldf `is.complex`;
    base10 = ldf `is.complex` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L191() else L192();
  L199():
    xj12 = ld xj;
    check L201() else D41();
  L200():
    r66 = dyn base12(<sym xj>, "class");
    goto L33(i31, c60, r66);
  L203():
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L204() else L205();
  L213():
    xj14 = ld xj;
    check L215() else D46();
  L214():
    r80 = dyn base15(<sym xj>);
    goto L38(i63, r80);
  L243():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L49(i87, r97, dx10);
  L244():
    j7 = force? j6;
    ____1 = ldf `[[<-` in base;
    r102 = dyn ____1(l7, r97, j7);
    goto L49(i91, r99, r102);
  L259():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L57(i98, dx12);
  L260():
    j9 = force? j8;
    __4 = ldf `[[` in base;
    r106 = dyn __4(X11, j9);
    goto L57(i105, r106);
  L266():
    X13 = force? X12;
    checkMissing(X13);
    c111 = `is.object`(X13);
    if c111 then L267() else L268(i103, X13);
  L271():
    sym20 = ldf `as.character`;
    base20 = ldf `as.character` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L272() else L273();
  L317():
    goto L73(i148, r138);
  L319():
    dj3 = force? dj2;
    checkMissing(dj3);
    c122 = `is.object`(dj3);
    if c122 then L320() else L321(i151, c119, dj3);
  L324():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L325() else L326();
  L379():
    n1 = force? n;
    checkMissing(n1);
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L380() else L381();
  L386():
    r188 = dyn dim__(l17, NULL, r182);
    check L387() else D118();
  D38():
    deopt 154 [i30, c23, c26, xj8];
  D41():
    deopt 169 [i31, c60, xj12];
  D46():
    deopt 195 [i63, xj14];
  D80():
    deopt 312 [i111, xj32];
  D118():
    deopt 461 [r182, r188];
  L30(i43, c50, c51, r62):
    c53 = `as.logical`(r62);
    c54 = `||`(c51, c53);
    goto L29(i43, c50, c54);
  L35(i58, c79, c80, r71):
    c82 = `as.logical`(r71);
    c83 = `&&`(c80, c82);
    goto L34(i58, c79, c83);
  L39(i68, c92):
    c99 = `as.logical`(c92);
    if c99 then L223() else L41();
  L61(i118, dx15):
    st xj = dx15;
    c112 = `is.logical`(dx15);
    goto L60(i118, c112);
  L63(i123, r112):
    st xj = r112;
    goto L59(i123);
  L64(i126, r115):
    st miss = r115;
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L281() else L282();
  L75(i157, c126, dx23):
    r141 = `>`(dx23, 0);
    c127 = `as.logical`(r141);
    c128 = `&&`(c126, c127);
    goto L74(i157, c128);
  L77(i163, r143):
    r147 = `!`(r143);
    c131 = `as.logical`(r147);
    if c131 then L330() else L78();
  L96(r184):
    n2 = ld n;
    check L384() else D115();
  L187():
    xj9 = force? xj8;
    checkMissing(xj9);
    is_numeric = ldf `is.numeric` in base;
    r60 = dyn is_numeric(xj9);
    check L188() else D39();
  L191():
    xj10 = ld xj;
    check L193() else D40();
  L192():
    r61 = dyn base10(<sym xj>);
    goto L30(i33, c27, c41, r61);
  L201():
    xj13 = force? xj12;
    checkMissing(xj13);
    attr = ldf attr in base;
    r68 = dyn attr(xj13, "class");
    check L202() else D42();
  L204():
    _in_2 = ldf `%in%`;
    check L206() else D43();
  L205():
    r70 = dyn base13(<lang `%in%`(cl, c("Date", "POSIXct", "POSIXlt"))>);
    goto L35(i50, c65, c70, r70);
  L215():
    xj15 = force? xj14;
    checkMissing(xj15);
    is_atomic = ldf `is.atomic` in base;
    r82 = dyn is_atomic(xj15);
    check L216() else D47();
  L217():
    sym16 = ldf inherits;
    base16 = ldf inherits in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L218() else L219();
  L267():
    dr14 = tryDispatchBuiltin.1("[[", X13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L269() else L268(i103, dr14);
  L268(i116, X15):
    j10 = ld j;
    check L270() else D65();
  L272():
    xj22 = ld xj;
    check L274() else D66();
  L273():
    r111 = dyn base20(<sym xj>);
    goto L63(i114, r111);
  L277():
    xj24 = ld xj;
    check L279() else D68();
  L278():
    r114 = dyn base21(<sym xj>);
    goto L64(i114, r114);
  L295():
    xj33 = force? xj32;
    checkMissing(xj33);
    l10 = ld X;
    c115 = `is.object`(l10);
    if c115 then L296() else L297(i111, xj33, l10);
  L320():
    dr22 = tryDispatchBuiltin.1("[", dj3);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L322() else L321(i151, c119, dr22);
  L321(i155, c124, dj5):
    __8 = ldf `[` in base;
    r140 = dyn __8(dj5, 2);
    goto L75(i155, c124, r140);
  L325():
    colnames = ldf colnames;
    check L327() else D92();
  L326():
    r142 = dyn base25(<lang `<-`(dnj, colnames(xj))>);
    goto L77(i153, r142);
  L380():
    X24 = ld X;
    check L382() else D113();
  L381():
    r183 = dyn base30(<sym X>);
    goto L96(r183);
  L387():
    st X = r188;
    sym31 = ldf list;
    base31 = ldf list in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L388() else L389();
  D39():
    deopt 157 [i30, c23, c26, r60];
  D40():
    deopt 160 [i33, c27, c41, xj10];
  D42():
    deopt 173 [i31, c60, r68];
  D43():
    deopt 180 [i50, c65, c70];
  D47():
    deopt 198 [i63, r82];
  D65():
    deopt 269 [i116, X15, j10];
  D66():
    deopt 276 [i114, xj22];
  D68():
    deopt 283 [i114, xj24];
  D92():
    deopt 363 [i153];
  D113():
    deopt 450 [X24];
  D115():
    deopt 453 [r184, n2];
  L40(i71, c95, r85):
    r87 = `!`(r85);
    c96 = `as.logical`(r87);
    c97 = `&&`(c95, c96);
    goto L39(i71, c97);
  L41():
    goto L42(i68);
  L42(i75):
    goto L15(i75);
  L65(i129, r118):
    c114 = `as.logical`(r118);
    if c114 then L286() else L66();
  L68(i136, dx17):
    st X = dx17;
    goto L55(i136);
  L78():
    goto L81(i163);
  L81(i173):
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L338() else L339();
  L97(r190):
    l18 = ld X;
    dimnames__ = ldf `dimnames<-`;
    check L397() else D123();
  L188():
    goto L28(i30, c23, c26, r60);
  L193():
    xj11 = force? xj10;
    checkMissing(xj11);
    c52 = `is.complex`(xj11);
    goto L30(i33, c27, c41, c52);
  L202():
    goto L33(i31, c60, r68);
  L206():
    p10 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p11 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r74):
      return r74;
    L1():
      c81 = ldf c in base;
      r75 = dyn c81("Date", "POSIXct", "POSIXlt");
      goto L0(r75);
    L2():
      r73 = dyn base14("Date", "POSIXct", "POSIXlt");
      goto L0(r73);
    };
    r77 = dyn _in_2(p10, p11);
    check L207() else D44();
  L216():
    goto L38(i63, r82);
  L218():
    xj16 = ld xj;
    check L220() else D48();
  L219():
    r84 = dyn base16(<sym xj>, "POSIXlt");
    goto L40(i66, c90, r84);
  L223():
    st `non.atomic` = TRUE;
    goto L42(i68);
  L269():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L61(i103, dx14);
  L270():
    j11 = force? j10;
    __5 = ldf `[[` in base;
    r110 = dyn __5(X15, j11);
    goto L61(i116, r110);
  L274():
    xj23 = force? xj22;
    checkMissing(xj23);
    as_character = ldf `as.character` in base;
    r113 = dyn as_character(xj23);
    check L275() else D67();
  L279():
    xj25 = force? xj24;
    checkMissing(xj25);
    is_na = ldf `is.na` in base;
    r116 = dyn is_na(xj25);
    check L280() else D69();
  L281():
    levels1 = ldf levels;
    check L283() else D70();
  L282():
    r117 = dyn base22(<lang levels(xj)>);
    goto L65(i126, r117);
  L296():
    dr16 = tryDispatchBuiltin.0("[[<-", l10, xj33);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L298() else L297(i111, xj33, dr16);
  L297(i134, xj35, l12):
    j12 = ld j;
    check L299() else D81();
  L322():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L75(i151, c119, dx22);
  L327():
    p18 = prom<V +>{
      xj40 = ld xj;
      xj41 = force? xj40;
      checkMissing(xj41);
      return xj41;
    };
    r145 = dyn colnames(p18);
    check L328() else D93();
  L330():
    sym26 = ldf seq_len;
    base26 = ldf seq_len in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L331() else L332();
  L382():
    X25 = force? X24;
    checkMissing(X25);
    length5 = ldf length in base;
    r185 = dyn length5(X25);
    check L383() else D114();
  L384():
    n3 = force? n2;
    checkMissing(n3);
    r186 = `/`(r184, n3);
    c142 = ldf c in base;
    r187 = dyn c142(n1, r186);
    check L385() else D116();
  L388():
    dn6 = ld dn;
    check L390() else D119();
  L389():
    r189 = dyn base31(<lang `[[`(dn, 1)>, <lang unlist(`[`(collabs, `>`(nc, 0.0)), use.names=FALSE)>);
    goto L97(r189);
  D44():
    deopt 183 [i50, c65, c70, r77];
  D48():
    deopt 202 [i66, c90, xj16];
  D67():
    deopt 279 [i114, r113];
  D69():
    deopt 286 [i114, r116];
  D70():
    deopt 291 [i126];
  D81():
    deopt 315 [i134, xj35, l12, xj33, j12];
  D93():
    deopt 365 [i153, r145];
  D114():
    deopt 453 [r185];
  D116():
    deopt 457 [r187];
  D119():
    deopt 465 [dn6];
  D123():
    deopt 479 [r190, l18, r190];
  L66():
    format = ldf format;
    check L290() else D75();
  L67(i132, r124):
    st xj = r124;
    miss = ld miss;
    check L292() else D77();
  L79(i168, r149):
    st dnj = r149;
    goto L81(i168);
  L82(i176, r154):
    c133 = `as.logical`(r154);
    if c133 then L342() else L83();
  L207():
    any1 = ldf any in base;
    r78 = dyn any1(r77);
    check L208() else D45();
  L220():
    xj17 = force? xj16;
    checkMissing(xj17);
    inherits1 = ldf inherits in base;
    r86 = dyn inherits1(xj17, "POSIXlt", FALSE);
    check L221() else D49();
  L275():
    goto L63(i114, r113);
  L280():
    goto L64(i114, r116);
  L283():
    p14 = prom<V +>{
      xj26 = ld xj;
      xj27 = force? xj26;
      checkMissing(xj27);
      return xj27;
    };
    r120 = dyn levels1(p14);
    check L284() else D71();
  L286():
    as_vector1 = ldf `as.vector`;
    check L287() else D73();
  L298():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L68(i111, dx16);
  L299():
    j13 = force? j12;
    ____2 = ldf `[[<-` in base;
    r128 = dyn ____2(l12, xj33, j13);
    goto L68(i134, r128);
  L328():
    st dnj = r145;
    length3 = ldf length in base;
    r146 = dyn length3(r145);
    check L329() else D94();
  L331():
    dj6 = ld dj;
    check L333() else D95();
  L332():
    r148 = dyn base26(<lang `[`(dj, 2)>);
    goto L79(i163, r148);
  L338():
    collabs = ld collabs;
    check L340() else D96();
  L339():
    r153 = dyn base27(<sym collabs>);
    goto L82(i173, r153);
  L383():
    goto L96(r185);
  L385():
    goto L95(r187);
  L390():
    dn7 = force? dn6;
    checkMissing(dn7);
    c143 = `is.object`(dn7);
    if c143 then L391() else L392(dn7);
  L397():
    r197 = dyn dimnames__(l18, NULL, r190);
    check L398() else D124();
  D45():
    deopt 185 [i50, c65, c70, r78];
  D49():
    deopt 207 [i66, c90, r86];
  D71():
    deopt 293 [i126, r120];
  D73():
    deopt 297 [i129];
  D75():
    deopt 301 [i129];
  D77():
    deopt 305 [i132, miss];
  D94():
    deopt 368 [i153, r146];
  D95():
    deopt 371 [i163, dj6];
  D96():
    deopt 382 [i173, collabs];
  D124():
    deopt 481 [r190, r197];
  L83():
    dnj4 = ld dnj;
    check L367() else D106();
  L91(i199, r167):
    l14 = ld collabs;
    c141 = `is.object`(l14);
    if c141 then L368() else L369(i199, r167, l14);
  L98(dx37):
    unlist1 = ldf unlist;
    check L394() else D120();
  L208():
    goto L35(i50, c65, c70, r78);
  L221():
    goto L40(i66, c90, r86);
  L284():
    length1 = ldf length in base;
    r121 = dyn length1(r120);
    check L285() else D72();
  L287():
    p15 = prom<V +>{
      xj28 = ld xj;
      xj29 = force? xj28;
      checkMissing(xj29);
      return xj29;
    };
    r123 = dyn as_vector1(p15);
    check L288() else D74();
  L290():
    p16 = prom<V +>{
      xj30 = ld xj;
      xj31 = force? xj30;
      checkMissing(xj31);
      return xj31;
    };
    r126 = dyn format(p16);
    check L291() else D76();
  L292():
    miss1 = force? miss;
    checkMissing(miss1);
    l9 = ld xj;
    is_na__ = ldf `is.na<-`;
    check L293() else D78();
  L329():
    goto L77(i153, r146);
  L333():
    dj7 = force? dj6;
    checkMissing(dj7);
    c132 = `is.object`(dj7);
    if c132 then L334() else L335(i163, dj7);
  L340():
    collabs1 = force? collabs;
    checkMissing(collabs1);
    length4 = ldf length in base;
    r155 = dyn length4(collabs1);
    check L341() else D97();
  L342():
    dj10 = ld dj;
    check L343() else D98();
  L391():
    dr36 = tryDispatchBuiltin.1("[[", dn7);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L393() else L392(dr36);
  L392(dn9):
    __14 = ldf `[[` in base;
    r191 = dyn __14(dn9, 1);
    goto L98(r191);
  L398():
    st X = r197;
    X26 = ld X;
    check L399() else D125();
  D72():
    deopt 295 [i126, r121];
  D74():
    deopt 299 [i129, r123];
  D76():
    deopt 303 [i129, r126];
  D78():
    deopt 308 [i132, miss1, l9, miss1];
  D97():
    deopt 385 [i173, r155];
  D98():
    deopt 386 [i176, dj10];
  D106():
    deopt 414 [i176, dnj4];
  D120():
    deopt 471 [];
  D125():
    deopt 483 [X26];
  L80(i172, dx25):
    r151 = seq_len(dx25);
    goto L79(i172, r151);
  L92(i203, r171, dx35):
    st collabs = dx35;
    goto L93(i203);
  L285():
    goto L65(i126, r121);
  L288():
    goto L67(i129, r123);
  L291():
    goto L67(i129, r126);
  L293():
    r127 = dyn is_na__(l9, NULL, miss1);
    check L294() else D79();
  L334():
    dr24 = tryDispatchBuiltin.1("[", dj7);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L336() else L335(i163, dr24);
  L335(i170, dj9):
    __9 = ldf `[` in base;
    r150 = dyn __9(dj9, 2);
    goto L80(i170, r150);
  L341():
    goto L82(i173, r155);
  L343():
    dj11 = force? dj10;
    checkMissing(dj11);
    c134 = `is.object`(dj11);
    if c134 then L344() else L345(i176, dj11);
  L367():
    dnj5 = force? dnj4;
    checkMissing(dnj5);
    goto L91(i176, dnj5);
  L368():
    dr34 = tryDispatchBuiltin.0("[[<-", l14, r167);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L370() else L369(i199, r167, dr34);
  L369(i201, r169, l16):
    j22 = ld j;
    check L371() else D107();
  L393():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L98(dx36);
  L394():
    p25 = prom<V +>{
      collabs14 = ld collabs;
      collabs15 = force? collabs14;
      checkMissing(collabs15);
      c144 = `is.object`(collabs15);
      if c144 then L1() else L2(collabs15);
    L0(dx39):
      return dx39;
    L1():
      dr38 = tryDispatchBuiltin.1("[", collabs15);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(collabs17):
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      r192 = `>`(nc1, 0.0);
      __15 = ldf `[` in base;
      r193 = dyn __15(collabs17, r192);
      goto L0(r193);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx38);
    };
    r195 = dyn unlist1[, `use.names`](p25, FALSE);
    check L395() else D121();
  L399():
    X27 = force? X26;
    checkMissing(X27);
    popenv;
    return X27;
  D79():
    deopt 310 [i132, miss1, r127];
  D107():
    deopt 417 [i201, r169, l16, r167, j22];
  D121():
    deopt 475 [r195];
  L84(i182, dx27):
    r157 = `>`(dx27, 1);
    c135 = `as.logical`(r157);
    if c135 then L347() else L85();
  L294():
    st xj = r127;
    goto L59(i132);
  L336():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L80(i163, dx24);
  L344():
    dr26 = tryDispatchBuiltin.1("[", dj11);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L346() else L345(i176, dr26);
  L345(i180, dj13):
    __10 = ldf `[` in base;
    r156 = dyn __10(dj13, 2);
    goto L84(i180, r156);
  L370():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L92(i199, r167, dx34);
  L371():
    j23 = force? j22;
    ____3 = ldf `[[<-` in base;
    r172 = dyn ____3(l16, r167, j23);
    goto L92(i201, r169, r172);
  L395():
    list1 = ldf list in base;
    r196 = dyn list1(dx37, r195);
    check L396() else D122();
  D122():
    deopt 477 [r196];
  L85():
    sym28 = ldf `is.character`;
    base28 = ldf `is.character` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L351() else L352();
  L86(i185, r162):
    goto L91(i185, r162);
  L346():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L84(i176, dx26);
  L347():
    paste = ldf paste;
    check L348() else D99();
  L396():
    goto L97(r196);
  D99():
    deopt 394 [i182];
  L87(i188, r164):
    c139 = `as.logical`(r164);
    if c139 then L358() else L89();
  L348():
    p19 = prom<V +>{
      collabs2 = ld collabs;
      collabs3 = force? collabs2;
      checkMissing(collabs3);
      c136 = `is.object`(collabs3);
      if c136 then L1() else L2(collabs3);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("[[", collabs3);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(collabs5):
      j16 = ld j;
      j17 = force? j16;
      __11 = ldf `[[` in base;
      r158 = dyn __11(collabs5, j17);
      goto L0(r158);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    p20 = prom<V +>{
      dnj = ld dnj;
      dnj1 = force? dnj;
      checkMissing(dnj1);
      return dnj1;
    };
    r161 = dyn paste[, , sep](p19, p20, ".");
    check L349() else D100();
  L351():
    collabs6 = ld collabs;
    check L353() else D101();
  L352():
    r163 = dyn base28(<lang `[[`(collabs, j)>);
    goto L87(i182, r163);
  D100():
    deopt 399 [i182, r161];
  D101():
    deopt 401 [i182, collabs6];
  L89():
    dnj2 = ld dnj;
    check L365() else D105();
  L349():
    goto L86(i182, r161);
  L353():
    collabs7 = force? collabs6;
    checkMissing(collabs7);
    c137 = `is.object`(collabs7);
    if c137 then L354() else L355(i182, collabs7);
  L358():
    collabs10 = ld collabs;
    check L359() else D103();
  D103():
    deopt 407 [i188, collabs10];
  D105():
    deopt 412 [i188, dnj2];
  L88(i192, dx31):
    c138 = `is.character`(dx31);
    goto L87(i192, c138);
  L354():
    dr30 = tryDispatchBuiltin.1("[[", collabs7);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L356() else L355(i182, dr30);
  L355(i190, collabs9):
    j18 = ld j;
    check L357() else D102();
  L359():
    collabs11 = force? collabs10;
    checkMissing(collabs11);
    c140 = `is.object`(collabs11);
    if c140 then L360() else L361(i188, collabs11);
  L365():
    dnj3 = force? dnj2;
    checkMissing(dnj3);
    goto L86(i188, dnj3);
  D102():
    deopt 403 [i190, collabs9, j18];
  L90(i198, dx33):
    goto L86(i198, dx33);
  L356():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L88(i182, dx30);
  L357():
    j19 = force? j18;
    __12 = ldf `[[` in base;
    r165 = dyn __12(collabs9, j19);
    goto L88(i190, r165);
  L360():
    dr32 = tryDispatchBuiltin.1("[[", collabs11);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L362() else L361(i188, dr32);
  L361(i196, collabs13):
    j20 = ld j;
    check L363() else D104();
  D104():
    deopt 409 [i196, collabs13, j20];
  L362():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L90(i188, dx32);
  L363():
    j21 = force? j20;
    __13 = ldf `[[` in base;
    r166 = dyn __13(collabs13, j21);
    goto L90(i196, r166);
  }
}