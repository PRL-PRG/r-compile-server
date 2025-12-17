fun main() {
  () -+> V { reg r:cls, reg LETTERS:*, reg LETTERS1:V, reg c:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg sample:cls, reg L3:*, reg L4:V, reg p:p(V +), reg r3:V, reg data_frame:cls, reg p1:p(V +), reg char:*, reg char1:V, reg p2:p(V +), reg r6:V, reg data_frame1:cls, reg p3:p(V +), reg sample1:cls, reg L5:*, reg L6:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg r11:V, reg is_data_frame:cls, reg d:*, reg d1:V, reg p6:p(V +), reg r13:V, reg data_frame2:cls, reg d2:*, reg d3:V, reg p7:p(V +), reg letters:*, reg letters1:V, reg c1:L, reg letters3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r15:V, reg p8:p(V +), reg r17:V, reg rbind:cls, reg sapply:cls, reg dd:*, reg dd1:V, reg p9:p(V +), reg class:*, reg class1:V, reg p10:p(V +), reg r20:V, reg p11:p(V +), reg sapply1:cls, reg dd2:*, reg dd3:V, reg p12:p(V +), reg mode:*, reg mode1:V, reg p13:p(V +), reg r24:V, reg p14:p(V +), reg r26:V, reg stopifnot:cls, reg row_names:cls, reg d4:*, reg d5:V, reg p15:p(V +), reg r28:V, reg r29:V, reg p16:p(V +), reg r31:V, reg d6:*, reg d7:V, reg c2:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r32:V, reg d10:*, reg d11:V, reg c3:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r33:V, reg d14:*, reg d15:V, reg c4:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r34:V |
    mkenv;
    r = clos inner1194524031;
    st `data.frame` = r;
    LETTERS = ld LETTERS;
    check L4() else D0();
  D0():
    deopt 3 [LETTERS];
  L4():
    LETTERS1 = force? LETTERS;
    checkMissing(LETTERS1);
    c = `is.object`(LETTERS1);
    if c then L5() else L6(LETTERS1);
  L0(dx1):
    st L3 = dx1;
    sample = ldf sample;
    check L8() else D1();
  L5():
    dr = tryDispatchBuiltin.1("[", LETTERS1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(LETTERS3):
    __ = ldf `[` in base;
    r1 = dyn __(LETTERS3, <int 1, 2, 3>);
    goto L0(r1);
  D1():
    deopt 10 [];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    p = prom<V +>{
      L3 = ld L3;
      L4 = force? L3;
      checkMissing(L4);
      return L4;
    };
    r3 = dyn sample[, , replace](p, 10.0, TRUE);
    check L9() else D2();
  D2():
    deopt 15 [r3];
  L9():
    st char = r3;
    data_frame = ldf `data.frame`;
    check L10() else D3();
  D3():
    deopt 18 [];
  L10():
    p1 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p2 = prom<V +>{
      char = ld char;
      char1 = force? char;
      checkMissing(char1);
      return char1;
    };
    r6 = dyn data_frame[x, y, char](1.0, p1, p2);
    check L11() else D4();
  D4():
    deopt 25 [r6];
  L11():
    st d = r6;
    data_frame1 = ldf `data.frame`;
    check L12() else D5();
  D5():
    deopt 28 [];
  L12():
    p3 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p5 = prom<V +>{
      sample1 = ldf sample;
      p4 = prom<V +>{
        L5 = ld L3;
        L6 = force? L5;
        checkMissing(L6);
        return L6;
      };
      r9 = dyn sample1[, , replace](p4, 10.0, TRUE);
      return r9;
    };
    r11 = dyn data_frame1(1.0, p3, p5);
    check L13() else D6();
  D6():
    deopt 32 [r11];
  L13():
    is_data_frame = ldf `is.data.frame`;
    check L14() else D7();
  D7():
    deopt 34 [];
  L14():
    p6 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    r13 = dyn is_data_frame(p6);
    check L15() else D8();
  D8():
    deopt 36 [r13];
  L15():
    data_frame2 = ldf `data.frame`;
    check L16() else D9();
  D9():
    deopt 38 [];
  L16():
    p7 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      return d3;
    };
    p8 = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      c1 = `is.object`(letters1);
      if c1 then L1() else L2(letters1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", letters1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(letters3):
      __1 = ldf `[` in base;
      r15 = dyn __1(letters3, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
      goto L0(r15);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r17 = dyn data_frame2[, fac, stringsAsFactors](p7, p8, TRUE);
    check L17() else D10();
  D10():
    deopt 44 [r17];
  L17():
    st dd = r17;
    rbind = ldf rbind;
    check L18() else D11();
  D11():
    deopt 47 [];
  L18():
    p11 = prom<V +>{
      sapply = ldf sapply;
      p9 = prom<V +>{
        dd = ld dd;
        dd1 = force? dd;
        checkMissing(dd1);
        return dd1;
      };
      p10 = prom<V +>{
        class = ld class;
        class1 = force? class;
        checkMissing(class1);
        return class1;
      };
      r20 = dyn sapply(p9, p10);
      return r20;
    };
    p14 = prom<V +>{
      sapply1 = ldf sapply;
      p12 = prom<V +>{
        dd2 = ld dd;
        dd3 = force? dd2;
        checkMissing(dd3);
        return dd3;
      };
      p13 = prom<V +>{
        mode = ld mode;
        mode1 = force? mode;
        checkMissing(mode1);
        return mode1;
      };
      r24 = dyn sapply1(p12, p13);
      return r24;
    };
    r26 = dyn rbind[class, mode](p11, p14);
    check L19() else D12();
  D12():
    deopt 52 [r26];
  L19():
    stopifnot = ldf stopifnot;
    check L20() else D13();
  D13():
    deopt 54 [];
  L20():
    p16 = prom<V +>{
      row_names = ldf `row.names`;
      p15 = prom<V +>{
        d4 = ld d;
        d5 = force? d4;
        checkMissing(d5);
        return d5;
      };
      r28 = dyn row_names(p15);
      r29 = `==`(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, r28);
      return r29;
    };
    r31 = dyn stopifnot(p16);
    check L21() else D14();
  D14():
    deopt 56 [r31];
  L21():
    d6 = ld d;
    check L22() else D15();
  D15():
    deopt 57 [d6];
  L22():
    d7 = force? d6;
    checkMissing(d7);
    c2 = `is.object`(d7);
    if c2 then L23() else L24();
  L1(dx5):
    st d0 = dx5;
    d10 = ld d;
    check L26() else D16();
  L23():
    dr4 = tryDispatchBuiltin.1("[", d7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L25() else L24();
  L24():
    __2 = ldf `[` in base;
    r32 = dyn __2(d7, <missing>, FALSE);
    goto L1(r32);
  D16():
    deopt 64 [d10];
  L25():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L1(dx4);
  L26():
    d11 = force? d10;
    checkMissing(d11);
    c3 = `is.object`(d11);
    if c3 then L27() else L28();
  L2(dx7):
    st `d.0` = dx7;
    d14 = ld d0;
    check L30() else D17();
  L27():
    dr6 = tryDispatchBuiltin.1("[", d11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L29() else L28();
  L28():
    __3 = ldf `[` in base;
    r33 = dyn __3(d11, FALSE, <missing>);
    goto L2(r33);
  D17():
    deopt 71 [d14];
  L29():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L2(dx6);
  L30():
    d15 = force? d14;
    checkMissing(d15);
    c4 = `is.object`(d15);
    if c4 then L31() else L32();
  L3(dx9):
    st d00 = dx9;
    visible.0();
    popenv;
    return dx9;
  L31():
    dr8 = tryDispatchBuiltin.1("[", d15);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L33() else L32();
  L32():
    __4 = ldf `[` in base;
    r34 = dyn __4(d15, FALSE, <missing>);
    goto L3(r34);
  L33():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L3(dx8);
  }
}
fun inner1194524031(`...`, `row.names`, `check.rows`, `check.names`, `fix.empty.names`, stringsAsFactors) {
  (reg ddd:dots, reg row_names:*, reg check_rows:*, reg check_names:*, reg fix_empty_names:*, reg stringsAsFactors:*) -+> V { var `...`:dots?, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var `check.rows`:*, reg check_rows_isMissing:L, reg check_rows_orDefault:*, var `check.names`:*, reg check_names_isMissing:L, reg check_names_orDefault:*, var `fix.empty.names`:*, reg fix_empty_names_isMissing:L, reg fix_empty_names_orDefault:*, var stringsAsFactors:*, reg stringsAsFactors_isMissing:L, reg stringsAsFactors_orDefault:*, reg check_rows1:*, reg check_rows2:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg c5:L, reg r1:V, reg row_names1:*, reg row_names2:V, reg c6:V, reg c7:L, reg c8:V, reg c10:L, reg r2:cls, reg r3:cls, reg r4:cls, reg as_list:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg substitute:cls, reg r7:V, reg p:p(V +), reg r9:V, reg c11:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg missing:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg row_names3:*, reg row_names4:V, reg c12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg list:cls, reg ddd1:dots?, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg x:*, reg x1:V, reg length:cls, reg r23:V, reg n:*, reg n1:V, reg r24:V, reg c13:L, reg mrn:*, reg mrn1:V, reg r25:V, reg c14:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg row_names5:*, reg row_names6:V, reg c15:L, reg c16:L, reg c17:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg c21:L, reg r29:V, reg row_names7:*, reg row_names8:V, reg c22:L, reg r30:V, reg c23:L, reg c24:V, reg c26:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg r32:V, reg row_names9:*, reg row_names10:V, reg as_character:cls, reg r33:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r35:V, reg r36:V, reg row_names11:*, reg row_names12:V, reg anyNA:cls, reg r37:V, reg c27:L, reg stop:cls, reg r38:V, reg anyDuplicated:cls, reg row_names13:*, reg row_names14:V, reg p1:p(V +), reg r41:V, reg c28:L, reg stop1:cls, reg gettextf:cls, reg paste:cls, reg unique:cls, reg row_names15:*, reg row_names16:V, reg c29:L, reg row_names18:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg duplicated:cls, reg row_names19:*, reg row_names20:V, reg p2:p(V +), reg r43:V, reg __1:cls, reg r44:V, reg p3:p(V +), reg r46:V, reg p4:p(V +), reg r48:V, reg p5:p(V +), reg r50:V, reg p6:p(V +), reg r52:V, reg r53:V, reg integer:cls, reg r55:V, reg structure:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg r57:V, reg list1:cls, reg r58:V, reg p7:p(V +), reg character:cls, reg r60:V, reg p8:p(V +), reg row_names21:*, reg row_names22:V, reg p9:p(V +), reg r63:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg r67:V, reg x2:*, reg x3:V, reg names:cls, reg r68:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r69:V, reg r70:V, reg vnames:*, reg vnames1:V, reg length1:cls, reg r71:V, reg n2:*, reg n3:V, reg r72:V, reg c30:L, reg character1:cls, reg n4:*, reg n5:V, reg p10:p(V +), reg r74:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r76:V, reg r77:V, reg vnames2:*, reg vnames3:V, reg nzchar:cls, reg r78:V, reg r79:V, reg as_list1:cls, reg vnames4:*, reg vnames5:V, reg p11:p(V +), reg r81:V, reg integer1:cls, reg n6:*, reg n7:V, reg p12:p(V +), reg r83:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r84:V, reg r85:V, reg n8:*, reg n9:V, reg r86:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c31:L, reg x4:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r87:V, reg i7:I, reg r88:V, reg x5:*, reg x6:V, reg c32:L, reg i9:I, reg x8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i11:I, reg dx5:V, reg i12:*, reg i13:V, reg __2:cls, reg r89:V, reg c33:L, reg c34:L, reg i14:I, reg c35:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r90:V, reg i18:I, reg c39:L, reg r91:V, reg x9:*, reg x10:V, reg c40:L, reg i20:I, reg c42:L, reg x12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i22:I, reg c44:L, reg dx7:V, reg i23:*, reg i24:V, reg __3:cls, reg r92:V, reg is_list:cls, reg r93:V, reg c45:L, reg c46:V, reg c48:L, reg as_data_frame:cls, reg x13:*, reg x14:V, reg c49:L, reg x16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i28:*, reg i29:V, reg __4:cls, reg r94:V, reg p13:p(V +), reg stringsAsFactors1:*, reg stringsAsFactors2:V, reg p14:p(V +), reg r97:V, reg i30:I, reg r98:V, reg as_data_frame1:cls, reg x17:*, reg x18:V, reg c50:L, reg x20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i31:*, reg i32:V, reg __5:cls, reg r99:V, reg p15:p(V +), reg r101:V, reg _row_names_info:cls, reg xi:*, reg xi1:V, reg p16:p(V +), reg r103:V, reg l1:*, reg c51:L, reg i34:I, reg r105:V, reg l3:*, reg dr12:V, reg dc6:L, reg dx12:V, reg i36:I, reg dx13:V, reg i37:*, reg i38:V, reg ___:cls, reg r108:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r109:V, reg i41:I, reg r110:V, reg xi2:*, reg xi3:V, reg length2:cls, reg r111:V, reg l4:*, reg c52:L, reg i43:I, reg r113:V, reg l6:*, reg dr14:V, reg dc7:L, reg dx14:V, reg i45:I, reg dx15:V, reg i46:*, reg i47:V, reg ___1:cls, reg r116:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r117:V, reg i50:I, reg r118:V, reg xi4:*, reg xi5:V, reg names1:cls, reg r119:V, reg ncols:*, reg ncols1:V, reg c53:L, reg i52:I, reg ncols3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i54:I, reg dx17:V, reg i55:*, reg i56:V, reg __6:cls, reg r120:V, reg r121:V, reg c54:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r122:V, reg i61:I, reg r123:V, reg namesi:*, reg namesi1:V, reg length3:cls, reg r124:V, reg r125:V, reg c55:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r126:V, reg i66:I, reg r127:V, reg ncols4:*, reg ncols5:V, reg c56:L, reg i68:I, reg ncols7:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i70:I, reg dx19:V, reg i71:*, reg i72:V, reg __7:cls, reg r128:V, reg r129:I, reg i73:I, reg no_vn:*, reg no_vn1:V, reg c57:L, reg i75:I, reg no_vn3:V, reg dr20:V, reg dc10:L, reg dx20:V, reg i77:I, reg dx21:V, reg i78:*, reg i79:V, reg __8:cls, reg r131:V, reg c58:L, reg namesi2:*, reg namesi3:V, reg i82:I, reg namesi4:V, reg paste1:cls, reg vnames6:*, reg vnames7:V, reg c59:L, reg vnames9:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg i83:*, reg i84:V, reg __9:cls, reg r132:V, reg p17:p(V +), reg namesi5:*, reg namesi6:V, reg p18:p(V +), reg r135:V, reg l7:*, reg c60:L, reg i86:I, reg namesi8:V, reg l9:*, reg dr24:V, reg dc12:L, reg dx24:V, reg i88:I, reg namesi10:V, reg dx25:V, reg i89:*, reg i90:V, reg ____:cls, reg r136:V, reg i91:I, reg sym21:cls, reg base21:cls, reg guard21:L, reg r137:V, reg i94:I, reg r138:V, reg namesi12:*, reg namesi13:V, reg length4:cls, reg r139:V, reg c61:L, reg namesi14:*, reg namesi15:V, reg l10:*, reg c62:L, reg i98:I, reg namesi17:V, reg l12:*, reg dr26:V, reg dc13:L, reg dx26:V, reg i100:I, reg namesi19:V, reg dx27:V, reg i101:*, reg i102:V, reg ____1:cls, reg r140:V, reg fix_empty_names1:*, reg fix_empty_names2:V, reg c63:L, reg i104:I, reg c65:V, reg no_vn4:*, reg no_vn5:V, reg c66:L, reg i106:I, reg c68:L, reg no_vn7:V, reg dr28:V, reg dc14:L, reg dx28:V, reg i108:I, reg c70:L, reg dx29:V, reg i109:*, reg i110:V, reg __10:cls, reg r141:V, reg c71:L, reg c72:V, reg c74:L, reg deparse:cls, reg object:*, reg object1:V, reg c75:L, reg object3:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg i114:*, reg i115:V, reg __11:cls, reg r142:V, reg p19:p(V +), reg r144:V, reg c76:L, reg i117:I, reg r146:V, reg dr32:V, reg dc16:L, reg dx32:V, reg i119:I, reg dx33:V, reg __12:cls, reg r147:V, reg startsWith:cls, reg tmpname:*, reg tmpname1:V, reg p20:p(V +), reg r149:V, reg c77:L, reg i121:I, reg c79:V, reg endsWith:cls, reg tmpname2:*, reg tmpname3:V, reg p21:p(V +), reg r151:V, reg c80:L, reg c81:V, reg c83:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r152:V, reg i127:I, reg r153:V, reg tmpname4:*, reg tmpname5:V, reg nchar:cls, reg r154:V, reg substr:cls, reg tmpname6:*, reg tmpname7:V, reg p22:p(V +), reg ntmpn:*, reg ntmpn1:V, reg r156:V, reg p23:p(V +), reg r158:V, reg i128:I, reg tmpname8:*, reg tmpname9:V, reg l13:*, reg c84:L, reg i130:I, reg tmpname11:V, reg l15:*, reg dr34:V, reg dc17:L, reg dx34:V, reg i132:I, reg tmpname13:V, reg dx35:V, reg i133:*, reg i134:V, reg ____2:cls, reg r160:V, reg mirn:*, reg mirn1:V, reg c85:L, reg i136:I, reg c87:V, reg nrows:*, reg nrows1:V, reg c88:L, reg i138:I, reg c90:L, reg nrows3:V, reg dr36:V, reg dc18:L, reg dx36:V, reg i140:I, reg c92:L, reg dx37:V, reg i141:*, reg i142:V, reg __13:cls, reg r161:V, reg r162:V, reg c93:L, reg c94:V, reg c96:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r163:V, reg i148:I, reg r164:V, reg xi6:*, reg xi7:V, reg attr:cls, reg r165:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r166:V, reg i151:I, reg r167:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r168:V, reg i154:I, reg r169:V, reg rowsi:*, reg rowsi1:V, reg nzchar1:cls, reg r170:V, reg any:cls, reg r171:V, reg c97:L, reg data_row_names:cls, reg row_names23:*, reg row_names24:V, reg p24:p(V +), reg rowsi2:*, reg rowsi3:V, reg p25:p(V +), reg i157:*, reg i158:V, reg p26:p(V +), reg r175:V, reg i159:I, reg r176:V, reg i160:I, reg sym26:cls, reg base26:cls, reg guard26:L, reg r178:V, reg i163:I, reg r179:V, reg nrows4:*, reg nrows5:V, reg c98:L, reg i165:I, reg nrows7:V, reg dr38:V, reg dc19:L, reg dx38:V, reg i167:I, reg dx39:V, reg i168:*, reg i169:V, reg __14:cls, reg r180:V, reg abs:cls, reg r181:V, reg l16:*, reg c99:L, reg i171:I, reg r183:V, reg l18:*, reg dr40:V, reg dc20:L, reg dx40:V, reg i173:I, reg dx41:V, reg i174:*, reg i175:V, reg ___2:cls, reg r186:V, reg xi8:*, reg xi9:V, reg l19:*, reg c100:L, reg i177:I, reg xi11:V, reg l21:*, reg dr42:V, reg dc21:L, reg dx42:V, reg i179:I, reg dx43:V, reg i180:*, reg i181:V, reg ____3:cls, reg r187:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r188:V, reg r189:V, reg nrows8:*, reg nrows9:V, reg max:cls, reg r190:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r191:V, reg r192:V, reg n10:*, reg n11:V, reg r193:I, reg c101:L, reg r195:V, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg nrows10:*, reg nrows11:V, reg nr:*, reg nr1:V, reg r196:V, reg __15:cls, reg r197:V, reg s1:V, reg l22:I, reg i182:I, reg i183:I, reg i184:I, reg c102:L, reg x21:V, reg vlist:*, reg vlist1:V, reg c103:L, reg i188:I, reg vlist3:V, reg dr46:V, reg dc23:L, reg dx46:V, reg i190:I, reg dx47:V, reg i191:*, reg i192:V, reg __16:cls, reg r198:V, reg nrows12:*, reg nrows13:V, reg c104:L, reg i194:I, reg nrows15:V, reg dr48:V, reg dc24:L, reg dx48:V, reg i196:I, reg dx49:V, reg i197:*, reg i198:V, reg __17:cls, reg r199:V, reg r200:V, reg c105:L, reg i200:I, reg c107:V, reg nr2:*, reg nr3:V, reg nrows16:*, reg nrows17:V, reg c108:L, reg i202:I, reg c110:L, reg nrows19:V, reg dr50:V, reg dc25:L, reg dx50:V, reg i204:I, reg c112:L, reg dx51:V, reg i205:*, reg i206:V, reg __18:cls, reg r201:V, reg __19:cls, reg r202:V, reg r203:V, reg c113:L, reg c114:V, reg c116:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r204:V, reg i212:I, reg r205:V, reg xi14:*, reg xi15:V, reg unclass:cls, reg r206:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r207:V, reg i215:I, reg r208:V, reg xi16:*, reg xi17:V, reg r209:I, reg s2:V, reg l23:I, reg i216:I, reg i217:I, reg i218:I, reg i219:I, reg c117:L, reg x22:V, reg xi18:*, reg xi19:V, reg c118:L, reg i226:I, reg i227:I, reg xi21:V, reg dr52:V, reg dc26:L, reg dx52:V, reg i230:I, reg i231:I, reg dx53:V, reg j:*, reg j1:V, reg __20:cls, reg r210:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r211:V, reg i236:I, reg i237:I, reg r212:V, reg xi22:*, reg xi23:V, reg is_vector:cls, reg r213:V, reg c119:L, reg i238:I, reg i239:I, reg c120:V, reg is_factor:cls, reg xi24:*, reg xi25:V, reg p27:p(V +), reg r215:V, reg c122:L, reg c123:V, reg c125:L, reg sym32:cls, reg base32:cls, reg guard32:L, reg r216:V, reg i252:I, reg i253:I, reg r217:V, reg rep:cls, reg r218:V, reg l24:*, reg c126:L, reg i256:I, reg i257:I, reg r220:V, reg l26:*, reg dr54:V, reg dc27:L, reg dx54:V, reg i260:I, reg i261:I, reg r222:V, reg dx55:V, reg j2:*, reg j3:V, reg ____4:cls, reg r223:V, reg i262:I, reg i263:I, reg sym33:cls, reg base33:cls, reg guard33:L, reg r225:V, reg i268:I, reg i269:I, reg r226:V, reg xi26:*, reg xi27:V, reg c127:L, reg c128:L, reg i272:I, reg i273:I, reg c130:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r227:V, reg i278:I, reg i279:I, reg c133:L, reg r228:V, reg xi28:*, reg xi29:V, reg inherits:cls, reg r229:V, reg c134:L, reg c135:V, reg c137:L, reg structure1:cls, reg sym35:cls, reg base35:cls, reg guard35:L, reg r230:V, reg r231:V, reg rep1:cls, reg r232:V, reg p28:p(V +), reg sym36:cls, reg base36:cls, reg guard36:L, reg r234:V, reg r235:V, reg xi30:*, reg xi31:V, reg class:cls, reg r236:V, reg p29:p(V +), reg r238:V, reg l27:*, reg c138:L, reg i288:I, reg i289:I, reg r240:V, reg l29:*, reg dr56:V, reg dc28:L, reg dx56:V, reg i292:I, reg i293:I, reg r242:V, reg dx57:V, reg j4:*, reg j5:V, reg ____5:cls, reg r243:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r244:V, reg i298:I, reg i299:I, reg r245:V, reg xi32:*, reg xi33:V, reg inherits1:cls, reg r246:V, reg c139:L, reg i300:I, reg i301:I, reg c140:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r247:V, reg i308:I, reg i309:I, reg c144:L, reg r248:V, reg xi34:*, reg xi35:V, reg inherits2:cls, reg r249:V, reg c145:L, reg c146:V, reg c148:L, reg sym39:cls, reg base39:cls, reg guard39:L, reg r250:V, reg i320:I, reg i321:I, reg r251:V, reg rep2:cls, reg r252:V, reg l30:*, reg c149:L, reg i324:I, reg i325:I, reg r254:V, reg l32:*, reg dr58:V, reg dc29:L, reg dx58:V, reg i328:I, reg i329:I, reg r256:V, reg dx59:V, reg j6:*, reg j7:V, reg ____6:cls, reg r257:V, reg i330:I, reg fixed:*, reg fixed1:V, reg c150:L, reg xi36:*, reg xi37:V, reg l33:*, reg c151:L, reg i335:I, reg xi39:V, reg l35:*, reg dr60:V, reg dc30:L, reg dx60:V, reg i337:I, reg dx61:V, reg i338:*, reg i339:V, reg ____7:cls, reg r258:V, reg i342:I, reg stop2:cls, reg gettextf1:cls, reg paste2:cls, reg unique1:cls, reg nrows20:*, reg nrows21:V, reg p30:p(V +), reg r262:V, reg p31:p(V +), reg r264:V, reg p32:p(V +), reg r266:V, reg p33:p(V +), reg r268:V, reg unlist:cls, reg vlist4:*, reg vlist5:V, reg p34:p(V +), reg r270:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r271:V, reg r272:V, reg unlist1:cls, reg vnames10:*, reg vnames11:V, reg c152:L, reg vnames13:V, reg dr62:V, reg dc31:L, reg dx62:V, reg dx63:V, reg ncols8:*, reg ncols9:V, reg r273:V, reg __21:cls, reg r274:V, reg p35:p(V +), reg r276:V, reg as_character1:cls, reg r277:V, reg fix_empty_names3:*, reg fix_empty_names4:V, reg c153:L, reg c155:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r278:V, reg c158:L, reg r279:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r280:V, reg c161:L, reg r281:V, reg vnames14:*, reg vnames15:V, reg nzchar2:cls, reg r282:V, reg r283:V, reg any1:cls, reg r284:V, reg c162:L, reg c163:V, reg c165:L, reg paste3:cls, reg sym43:cls, reg base43:cls, reg guard43:L, reg r285:V, reg r286:V, reg vnames16:*, reg vnames17:V, reg r287:I, reg p36:p(V +), reg r289:V, reg c166:L, reg r291:V, reg dr64:V, reg dc32:L, reg dx64:V, reg dx65:V, reg noname:*, reg noname1:V, reg __22:cls, reg r292:V, reg l36:*, reg c167:L, reg dx67:V, reg l38:*, reg dr66:V, reg dc33:L, reg dx69:V, reg dx70:V, reg dx71:V, reg noname2:*, reg noname3:V, reg ___3:cls, reg r293:V, reg check_names1:*, reg check_names2:V, reg c168:L, reg fix_empty_names5:*, reg fix_empty_names6:V, reg c169:L, reg make_names:cls, reg vnames18:*, reg vnames19:V, reg p37:p(V +), reg r295:V, reg r296:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r297:V, reg r298:V, reg vnames20:*, reg vnames21:V, reg nzchar3:cls, reg r299:V, reg make_names1:cls, reg vnames22:*, reg vnames23:V, reg c170:L, reg vnames25:V, reg dr68:V, reg dc34:L, reg dx73:V, reg dx74:V, reg nz:*, reg nz1:V, reg __23:cls, reg r300:V, reg p38:p(V +), reg r302:V, reg l39:*, reg c171:L, reg r304:V, reg l41:*, reg dr70:V, reg dc35:L, reg dx75:V, reg r306:V, reg dx76:V, reg nz2:*, reg nz3:V, reg ___4:cls, reg r307:V, reg vnames26:*, reg vnames27:V, reg l42:*, reg names__:cls, reg r309:V, reg mrn2:*, reg mrn3:V, reg r310:V, reg c172:L, reg sym45:cls, reg base45:cls, reg guard45:L, reg r311:V, reg r312:V, reg row_names25:*, reg row_names26:V, reg length5:cls, reg r313:V, reg r314:V, reg c173:L, reg c175:V, reg nr4:*, reg nr5:V, reg r315:V, reg c176:L, reg c177:V, reg c179:L, reg sym46:cls, reg base46:cls, reg guard46:L, reg r316:V, reg r317:V, reg row_names27:*, reg row_names28:V, reg c180:L, reg c181:L, reg sym47:cls, reg base47:cls, reg guard47:L, reg r318:V, reg r319:V, reg row_names29:*, reg row_names30:V, reg vnames28:*, reg vnames29:V, reg match:cls, reg r320:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r322:V, reg r323:V, reg row_names31:*, reg row_names32:V, reg length6:cls, reg r324:V, reg r325:V, reg c182:L, reg c183:V, reg row_names33:*, reg row_names34:V, reg r326:V, reg c185:L, reg c186:V, reg c188:L, reg c189:V, reg row_names35:*, reg row_names36:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r327:V, reg c193:L, reg row_names39:V, reg r328:V, reg vnames30:*, reg vnames31:V, reg length7:cls, reg r329:V, reg r330:V, reg c194:L, reg c195:V, reg c197:L, reg stop3:cls, reg r331:V, reg row_names40:*, reg row_names41:V, reg value:*, reg value1:V, reg c198:L, reg value3:V, reg dr72:V, reg dc36:L, reg dx77:V, reg dx78:V, reg i343:*, reg i344:V, reg __24:cls, reg r333:V, reg value4:*, reg value5:V, reg c199:L, reg value7:V, reg dr74:V, reg dc37:L, reg dx79:V, reg dx80:V, reg i345:*, reg i346:V, reg r334:V, reg __25:cls, reg r335:V, reg dx81:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r336:V, reg r337:V, reg row_names42:*, reg row_names43:V, reg c200:V, reg r338:V, reg c201:L, reg c203:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r339:V, reg c206:L, reg r340:V, reg row_names44:*, reg row_names45:V, reg length8:cls, reg r341:V, reg nr6:*, reg nr7:V, reg r342:V, reg c207:L, reg c208:V, reg c210:L, reg stop4:cls, reg r343:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r344:V, reg r345:V, reg row_names46:*, reg row_names47:V, reg c211:V, reg r346:V, reg c212:L, reg c214:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r347:V, reg c217:L, reg r348:V, reg row_names48:*, reg row_names49:V, reg length9:cls, reg r349:V, reg nr8:*, reg nr9:V, reg r350:V, reg c218:L, reg c219:V, reg c221:L, reg warning:cls, reg r351:V, reg l43:*, reg class__:cls, reg r352:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r353:V, reg r354:V, reg row_names50:*, reg row_names51:V, reg c222:V, reg c223:L, reg _set_row_names:cls, reg nr10:*, reg nr11:V, reg p39:p(V +), reg r356:V, reg l44:*, reg attr__:cls, reg r357:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r359:V, reg r360:V, reg row_names52:*, reg row_names53:V, reg c224:L, reg c225:L, reg c226:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r361:V, reg c230:L, reg r362:V, reg row_names54:*, reg row_names55:V, reg c231:L, reg r363:V, reg c232:L, reg c233:V, reg c235:L, reg sym57:cls, reg base57:cls, reg guard57:L, reg r364:V, reg r365:V, reg row_names56:*, reg row_names57:V, reg as_character2:cls, reg r366:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r368:V, reg r369:V, reg row_names58:*, reg row_names59:V, reg anyNA1:cls, reg r370:V, reg c236:L, reg stop5:cls, reg r371:V, reg anyDuplicated1:cls, reg row_names60:*, reg row_names61:V, reg p40:p(V +), reg r374:V, reg c237:L, reg stop6:cls, reg gettextf2:cls, reg paste4:cls, reg unique2:cls, reg row_names62:*, reg row_names63:V, reg c238:L, reg row_names65:V, reg dr76:V, reg dc38:L, reg dx83:V, reg dx84:V, reg duplicated1:cls, reg row_names66:*, reg row_names67:V, reg p41:p(V +), reg r376:V, reg __26:cls, reg r377:V, reg p42:p(V +), reg r379:V, reg p43:p(V +), reg r381:V, reg p44:p(V +), reg r383:V, reg p45:p(V +), reg r385:V, reg row_names68:*, reg row_names69:V, reg l45:*, reg row_names__:cls, reg r387:V, reg value8:*, reg value9:V |
    mkenv;
    st `...` = ddd;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L0(NULL) else L0(row_names);
  L0(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    check_rows_isMissing = missing.0(check_rows);
    if check_rows_isMissing then L1(FALSE) else L1(check_rows);
  L1(check_rows_orDefault):
    st `check.rows` = check_rows_orDefault;
    check_names_isMissing = missing.0(check_names);
    if check_names_isMissing then L2(TRUE) else L2(check_names);
  L2(check_names_orDefault):
    st `check.names` = check_names_orDefault;
    fix_empty_names_isMissing = missing.0(fix_empty_names);
    if fix_empty_names_isMissing then L3(TRUE) else L3(fix_empty_names);
  L3(fix_empty_names_orDefault):
    st `fix.empty.names` = fix_empty_names_orDefault;
    stringsAsFactors_isMissing = missing.0(stringsAsFactors);
    if stringsAsFactors_isMissing then L4(FALSE) else L4(stringsAsFactors);
  L4(stringsAsFactors_orDefault):
    st stringsAsFactors = stringsAsFactors_orDefault;
    check_rows1 = ld `check.rows`;
    check L176() else D0();
  D0():
    deopt 0 [check_rows1];
  L176():
    check_rows2 = force? check_rows1;
    checkMissing(check_rows2);
    c = `as.logical`(check_rows2);
    if c then L177() else L5(c);
  L5(c2):
    c10 = `as.logical`(c2);
    if c10 then L182() else L7();
  L177():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L178() else L179();
  L6(c5, r1):
    c7 = `as.logical`(r1);
    c8 = `&&`(c5, c7);
    goto L5(c8);
  L7():
    r4 = clos inner2099841854;
    goto L8(r4);
  L8(r3):
    st `data.row.names` = r3;
    as_list = ldf `as.list`;
    check L184() else D2();
  L178():
    row_names1 = ld `row.names`;
    check L180() else D1();
  L179():
    r = dyn base(<sym row.names>);
    goto L6(c, r);
  L182():
    r2 = clos inner2099841854;
    goto L8(r2);
  D1():
    deopt 3 [c, row_names1];
  D2():
    deopt 13 [];
  L180():
    row_names2 = force? row_names1;
    checkMissing(row_names2);
    c6 = `==`(row_names2, NULL);
    goto L6(c, c6);
  L184():
    p = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      substitute = ldf substitute in base;
      r7 = dyn substitute(<lang list(...)>);
      goto L0(r7);
    L2():
      r5 = dyn base1(<lang list(...)>);
      goto L0(r5);
    };
    r9 = dyn as_list(p);
    check L185() else D3();
  D3():
    deopt 15 [r9];
  L185():
    c11 = `is.object`(r9);
    if c11 then L186() else L187(r9);
  L9(dx1):
    st object = dx1;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L189() else L190();
  L186():
    dr = tryDispatchBuiltin.1("[", r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L188() else L187(dr);
  L187(r11):
    __ = ldf `[` in base;
    r12 = dyn __(r11, -1);
    goto L9(r12);
  L10(r14):
    st mirn = r14;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L191() else L192();
  L188():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L189():
    missing = ldf missing in base;
    r15 = dyn missing(<sym row.names>);
    goto L10(r15);
  L190():
    r13 = dyn base2(<sym row.names>);
    goto L10(r13);
  L11(r17):
    st mrn = r17;
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L194() else L195();
  L191():
    row_names3 = ld `row.names`;
    check L193() else D4();
  L192():
    r16 = dyn base3(<sym row.names>);
    goto L11(r16);
  D4():
    deopt 25 [row_names3];
  L12(r19):
    st x = r19;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L198() else L199();
  L193():
    row_names4 = force? row_names3;
    checkMissing(row_names4);
    c12 = `==`(row_names4, NULL);
    goto L11(c12);
  L194():
    list = ldf list;
    check L196() else D5();
  L195():
    r18 = dyn base4(<sym ...>);
    goto L12(r18);
  D5():
    deopt 31 [];
  L13(r22):
    st n = r22;
    n = ld n;
    check L202() else D9();
  L196():
    ddd1 = ld `...`;
    r20 = dyn list[`...`](ddd1);
    check L197() else D6();
  L198():
    x = ld x;
    check L200() else D7();
  L199():
    r21 = dyn base5(<sym x>);
    goto L13(r21);
  D6():
    deopt 33 [r20];
  D7():
    deopt 37 [x];
  D9():
    deopt 42 [n];
  L197():
    goto L12(r20);
  L200():
    x1 = force? x;
    checkMissing(x1);
    length = ldf length in base;
    r23 = dyn length(x1);
    check L201() else D8();
  L202():
    n1 = force? n;
    checkMissing(n1);
    r24 = `<`(n1, 1);
    c13 = `as.logical`(r24);
    if c13 then L203() else L14();
  D8():
    deopt 40 [r23];
  L14():
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L241() else L242();
  L201():
    goto L13(r23);
  L203():
    mrn = ld mrn;
    check L204() else D10();
  D10():
    deopt 46 [mrn];
  L29(r67):
    st vnames = r67;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L245() else L246();
  L204():
    mrn1 = force? mrn;
    checkMissing(mrn1);
    r25 = `!`(mrn1);
    c14 = `as.logical`(r25);
    if c14 then L205() else L15();
  L241():
    x2 = ld x;
    check L243() else D27();
  L242():
    r66 = dyn base11(<sym x>);
    goto L29(r66);
  D27():
    deopt 111 [x2];
  L15():
    integer = ldf integer;
    check L235() else D23();
  L27():
    structure = ldf structure;
    check L237() else D25();
  L30(r70):
    n2 = ld n;
    check L249() else D31();
  L205():
    sym6 = ldf `is.object`;
    base6 = ldf `is.object` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L206() else L207();
  L243():
    x3 = force? x2;
    checkMissing(x3);
    names = ldf names in base;
    r68 = dyn names(x3);
    check L244() else D28();
  L245():
    vnames = ld vnames;
    check L247() else D29();
  L246():
    r69 = dyn base12(<sym vnames>);
    goto L30(r69);
  D23():
    deopt 93 [];
  D25():
    deopt 97 [];
  D28():
    deopt 114 [r68];
  D29():
    deopt 118 [vnames];
  D31():
    deopt 121 [r70, n2];
  L16(r27):
    c16 = `as.logical`(r27);
    if c16 then L17(c16) else L209();
  L206():
    row_names5 = ld `row.names`;
    check L208() else D11();
  L207():
    r26 = dyn base6(<sym row.names>);
    goto L16(r26);
  L235():
    r55 = dyn integer();
    check L236() else D24();
  L237():
    p7 = prom<V +>{
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r57):
      return r57;
    L1():
      list1 = ldf list in base;
      r58 = dyn list1();
      goto L0(r58);
    L2():
      r56 = dyn base10();
      goto L0(r56);
    };
    p8 = prom<V +>{
      character = ldf character;
      r60 = dyn character();
      return r60;
    };
    p9 = prom<V +>{
      row_names21 = ld `row.names`;
      row_names22 = force? row_names21;
      checkMissing(row_names22);
      return row_names22;
    };
    r63 = dyn structure[, names, `row.names`, class](p7, p8, p9, "data.frame");
    check L238() else D26();
  L244():
    goto L29(r68);
  L247():
    vnames1 = force? vnames;
    checkMissing(vnames1);
    length1 = ldf length in base;
    r71 = dyn length1(vnames1);
    check L248() else D30();
  L249():
    n3 = force? n2;
    checkMissing(n3);
    r72 = `!=`(r70, n3);
    c30 = `as.logical`(r72);
    if c30 then L250() else L31();
  D11():
    deopt 50 [row_names5];
  D24():
    deopt 94 [r55];
  D26():
    deopt 105 [r63];
  D30():
    deopt 121 [r71];
  L17(c17):
    c26 = `as.logical`(c17);
    if c26 then L214() else L19();
  L31():
    goto L32();
  L32():
    sym13 = ldf nzchar;
    base13 = ldf nzchar in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L254() else L255();
  L208():
    row_names6 = force? row_names5;
    checkMissing(row_names6);
    c15 = `is.object`(row_names6);
    goto L16(c15);
  L209():
    sym7 = ldf `is.integer`;
    base7 = ldf `is.integer` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L210() else L211();
  L236():
    st `row.names` = r55;
    goto L27();
  L238():
    popenv;
    return r63;
  L248():
    goto L30(r71);
  L250():
    character1 = ldf character;
    check L251() else D32();
  D32():
    deopt 125 [];
  L18(c21, r29):
    r30 = `!`(r29);
    c23 = `as.logical`(r30);
    c24 = `||`(c21, c23);
    goto L17(c24);
  L19():
    goto L21();
  L21():
    sym9 = ldf anyNA;
    base9 = ldf anyNA in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L220() else L221();
  L33(r77):
    r79 = `!`(r77);
    st `no.vn` = r79;
    as_list1 = ldf `as.list`;
    check L258() else D36();
  L210():
    row_names7 = ld `row.names`;
    check L212() else D12();
  L211():
    r28 = dyn base7(<sym row.names>);
    goto L18(c16, r28);
  L214():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L215() else L216();
  L251():
    p10 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    r74 = dyn character1(p10);
    check L252() else D33();
  L254():
    vnames2 = ld vnames;
    check L256() else D34();
  L255():
    r76 = dyn base13(<sym vnames>);
    goto L33(r76);
  D12():
    deopt 54 [c16, row_names7];
  D33():
    deopt 127 [r74];
  D34():
    deopt 133 [vnames2];
  D36():
    deopt 140 [];
  L20(r32):
    st `row.names` = r32;
    goto L21();
  L22(r36):
    c27 = `as.logical`(r36);
    if c27 then L224() else L23();
  L212():
    row_names8 = force? row_names7;
    checkMissing(row_names8);
    c22 = `is.integer`(row_names8);
    goto L18(c16, c22);
  L215():
    row_names9 = ld `row.names`;
    check L217() else D13();
  L216():
    r31 = dyn base8(<sym row.names>);
    goto L20(r31);
  L220():
    row_names11 = ld `row.names`;
    check L222() else D15();
  L221():
    r35 = dyn base9(<sym row.names>);
    goto L22(r35);
  L252():
    st vnames = r74;
    goto L32();
  L256():
    vnames3 = force? vnames2;
    checkMissing(vnames3);
    nzchar = ldf nzchar in base;
    r78 = dyn nzchar(vnames3);
    check L257() else D35();
  L258():
    p11 = prom<V +>{
      vnames4 = ld vnames;
      vnames5 = force? vnames4;
      checkMissing(vnames5);
      return vnames5;
    };
    r81 = dyn as_list1(p11);
    check L259() else D37();
  D13():
    deopt 61 [row_names9];
  D15():
    deopt 70 [row_names11];
  D35():
    deopt 136 [r78];
  D37():
    deopt 142 [r81];
  L23():
    goto L24();
  L24():
    anyDuplicated = ldf anyDuplicated;
    check L228() else D19();
  L217():
    row_names10 = force? row_names9;
    checkMissing(row_names10);
    as_character = ldf `as.character` in base;
    r33 = dyn as_character(row_names10);
    check L218() else D14();
  L222():
    row_names12 = force? row_names11;
    checkMissing(row_names12);
    anyNA = ldf anyNA in base;
    r37 = dyn anyNA(row_names12);
    check L223() else D16();
  L224():
    stop = ldf stop;
    check L225() else D17();
  L257():
    goto L33(r78);
  L259():
    st vnames = r81;
    st vlist = r81;
    integer1 = ldf integer;
    check L260() else D38();
  D14():
    deopt 64 [r33];
  D16():
    deopt 73 [r37];
  D17():
    deopt 75 [];
  D19():
    deopt 81 [];
  D38():
    deopt 146 [];
  L218():
    goto L20(r33);
  L223():
    goto L22(r37);
  L225():
    r38 = dyn stop("row names contain missing values");
    check L226() else D18();
  L228():
    p1 = prom<V +>{
      row_names13 = ld `row.names`;
      row_names14 = force? row_names13;
      checkMissing(row_names14);
      return row_names14;
    };
    r41 = dyn anyDuplicated(p1);
    check L229() else D20();
  L260():
    p12 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      return n7;
    };
    r83 = dyn integer1(p12);
    check L261() else D39();
  D18():
    deopt 77 [r38];
  D20():
    deopt 83 [r41];
  D39():
    deopt 148 [r83];
  L226():
    goto L24();
  L229():
    c28 = `as.logical`(r41);
    if c28 then L230() else L25();
  L261():
    st ncols = r83;
    st nrows = r83;
    sym14 = ldf seq_len;
    base14 = ldf seq_len in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L262() else L263();
  L25():
    goto L26(NULL);
  L26(r53):
    goto L27();
  L34(r85):
    s = toForSeq(r85);
    l = length(s);
    i = 0;
    goto L35(i);
  L230():
    stop1 = ldf stop;
    check L231() else D21();
  L262():
    n8 = ld n;
    check L264() else D40();
  L263():
    r84 = dyn base14(<sym n>);
    goto L34(r84);
  D21():
    deopt 85 [];
  D40():
    deopt 152 [n8];
  L35(i1):
    i2 = `+`.1(i1, 1);
    c31 = `<`.1(l, i2);
    if c31 then L265() else L84();
  L231():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        paste = ldf paste;
        p4 = prom<V +>{
          unique = ldf unique;
          p3 = prom<V +>{
            row_names15 = ld `row.names`;
            row_names16 = force? row_names15;
            checkMissing(row_names16);
            c29 = `is.object`(row_names16);
            if c29 then L1() else L2(row_names16);
          L0(dx3):
            return dx3;
          L1():
            dr2 = tryDispatchBuiltin.1("[", row_names16);
            dc1 = getTryDispatchBuiltinDispatched(dr2);
            if dc1 then L3() else L2(dr2);
          L2(row_names18):
            duplicated = ldf duplicated;
            p2 = prom<V +>{
              row_names19 = ld `row.names`;
              row_names20 = force? row_names19;
              checkMissing(row_names20);
              return row_names20;
            };
            r43 = dyn duplicated(p2);
            __1 = ldf `[` in base;
            r44 = dyn __1(row_names18, r43);
            goto L0(r44);
          L3():
            dx2 = getTryDispatchBuiltinValue(dr2);
            goto L0(dx2);
          };
          r46 = dyn unique(p3);
          return r46;
        };
        r48 = dyn paste[, collapse](p4, ", ");
        return r48;
      };
      r50 = dyn gettextf("duplicate row.names: %s", p5);
      return r50;
    };
    r52 = dyn stop1[, domain](p6, NA_LGL);
    check L232() else D22();
  L264():
    n9 = force? n8;
    checkMissing(n9);
    r86 = seq_len(n9);
    goto L34(r86);
  D22():
    deopt 89 [r52];
  L84():
    x4 = `[[`(s, i2, NULL, TRUE);
    st i = x4;
    sym15 = ldf `is.character`;
    base15 = ldf `is.character` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L266() else L267();
  L232():
    goto L26(r52);
  L265():
    sym27 = ldf max;
    base27 = ldf max in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L428() else L429();
  L36(i7, r88):
    c34 = `as.logical`(r88);
    if c34 then L38(i7, c34) else L273();
  L85(r189):
    st nr = r189;
    sym28 = ldf seq_len;
    base28 = ldf seq_len in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L432() else L433();
  L266():
    x5 = ld x;
    check L268() else D41();
  L267():
    r87 = dyn base15(<lang `[[`(x, i)>);
    goto L36(i2, r87);
  L428():
    nrows8 = ld nrows;
    check L430() else D105();
  L429():
    r188 = dyn base27(<sym nrows>);
    goto L85(r188);
  D41():
    deopt 156 [i2, x5];
  D105():
    deopt 393 [nrows8];
  L38(i14, c35):
    c48 = `as.logical`(c35);
    if c48 then L283() else L41();
  L86(r192):
    c101 = `is.object`(r192);
    if c101 then L435() else L436(r192);
  L268():
    x6 = force? x5;
    checkMissing(x6);
    c32 = `is.object`(x6);
    if c32 then L269() else L270(i2, x6);
  L273():
    sym16 = ldf `is.list`;
    base16 = ldf `is.list` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L274() else L275();
  L430():
    nrows9 = force? nrows8;
    checkMissing(nrows9);
    max = ldf max in base;
    r190 = dyn max(nrows9);
    check L431() else D106();
  L432():
    n10 = ld n;
    check L434() else D107();
  L433():
    r191 = dyn base28(<sym n>);
    goto L86(r191);
  D106():
    deopt 396 [r190];
  D107():
    deopt 399 [n10];
  L37(i11, dx5):
    c33 = `is.character`(dx5);
    goto L36(i11, c33);
  L39(i18, c39, r91):
    c45 = `as.logical`(r91);
    c46 = `||`(c39, c45);
    goto L38(i18, c46);
  L41():
    as_data_frame1 = ldf `as.data.frame`;
    check L287() else D48();
  L42(i30, r98):
    st xi = r98;
    _row_names_info = ldf `.row_names_info`;
    check L289() else D50();
  L87(dx45):
    s1 = toForSeq(dx45);
    l22 = length(s1);
    i182 = 0;
    goto L88(i182);
  L269():
    dr4 = tryDispatchBuiltin.1("[[", x6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L271() else L270(i2, dr4);
  L270(i9, x8):
    i12 = ld i;
    check L272() else D42();
  L274():
    x9 = ld x;
    check L276() else D43();
  L275():
    r90 = dyn base16(<lang `[[`(x, i)>);
    goto L39(i7, c34, r90);
  L283():
    as_data_frame = ldf `as.data.frame`;
    check L284() else D46();
  L431():
    goto L85(r190);
  L434():
    n11 = force? n10;
    checkMissing(n11);
    r193 = seq_len(n11);
    goto L86(r193);
  L435():
    dr44 = tryDispatchBuiltin.1("[", r192);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L437() else L436(dr44);
  L436(r195):
    nrows10 = ld nrows;
    check L438() else D108();
  D42():
    deopt 158 [i9, x8, i12];
  D43():
    deopt 164 [i7, c34, x9];
  D46():
    deopt 173 [i14];
  D48():
    deopt 181 [i14];
  D50():
    deopt 188 [i30];
  D108():
    deopt 402 [r195, nrows10];
  L88(i183):
    i184 = `+`.1(i183, 1);
    c102 = `<`.1(l22, i184);
    if c102 then L440() else L121();
  L271():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L37(i2, dx4);
  L272():
    i13 = force? i12;
    __2 = ldf `[[` in base;
    r89 = dyn __2(x8, i13);
    goto L37(i9, r89);
  L276():
    x10 = force? x9;
    checkMissing(x10);
    c40 = `is.object`(x10);
    if c40 then L277() else L278(i7, c34, x10);
  L284():
    p13 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c49 = `is.object`(x14);
      if c49 then L1() else L2(x14);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", x14);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x16):
      i28 = ld i;
      i29 = force? i28;
      __4 = ldf `[[` in base;
      r94 = dyn __4(x16, i29);
      goto L0(r94);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p14 = prom<V +>{
      stringsAsFactors1 = ld stringsAsFactors;
      stringsAsFactors2 = force? stringsAsFactors1;
      checkMissing(stringsAsFactors2);
      return stringsAsFactors2;
    };
    r97 = dyn as_data_frame[, optional, stringsAsFactors](p13, TRUE, p14);
    check L285() else D47();
  L287():
    p15 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c50 = `is.object`(x18);
      if c50 then L1() else L2(x18);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", x18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x20):
      i31 = ld i;
      i32 = force? i31;
      __5 = ldf `[[` in base;
      r99 = dyn __5(x20, i32);
      goto L0(r99);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r101 = dyn as_data_frame1[, optional](p15, TRUE);
    check L288() else D49();
  L289():
    p16 = prom<V +>{
      xi = ld xi;
      xi1 = force? xi;
      checkMissing(xi1);
      return xi1;
    };
    r103 = dyn _row_names_info(p16);
    check L290() else D51();
  L437():
    dx44 = getTryDispatchBuiltinValue(dr44);
    goto L87(dx44);
  L438():
    nrows11 = force? nrows10;
    checkMissing(nrows11);
    nr = ld nr;
    check L439() else D109();
  D47():
    deopt 179 [i14, r97];
  D49():
    deopt 185 [i14, r101];
  D51():
    deopt 190 [i30, r103];
  D109():
    deopt 403 [r195, nrows11, nr];
  L40(i22, c44, dx7):
    is_list = ldf `is.list` in base;
    r93 = dyn is_list(dx7);
    check L281() else D45();
  L121():
    x21 = `[[`(s1, i184, NULL, TRUE);
    st i = x21;
    vlist = ld vlist;
    check L441() else D110();
  L277():
    dr6 = tryDispatchBuiltin.1("[[", x10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L279() else L278(i7, c34, dr6);
  L278(i20, c42, x12):
    i23 = ld i;
    check L280() else D44();
  L285():
    goto L42(i14, r97);
  L288():
    goto L42(i14, r101);
  L290():
    l1 = ld nrows;
    c51 = `is.object`(l1);
    if c51 then L291() else L292(i30, r103, l1);
  L439():
    nr1 = force? nr;
    checkMissing(nr1);
    r196 = `<`(nrows11, nr1);
    __15 = ldf `[` in base;
    r197 = dyn __15(r195, r196);
    goto L87(r197);
  L440():
    unlist = ldf unlist;
    check L538() else D144();
  D44():
    deopt 166 [i20, c42, x12, i23];
  D45():
    deopt 170 [i22, c44, r93];
  D110():
    deopt 407 [i184, vlist];
  D144():
    deopt 555 [];
  L43(i36, dx13):
    st nrows = dx13;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L295() else L296();
  L279():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L40(i7, c34, dx6);
  L280():
    i24 = force? i23;
    __3 = ldf `[[` in base;
    r92 = dyn __3(x12, i24);
    goto L40(i20, c42, r92);
  L281():
    goto L39(i22, c44, r93);
  L291():
    dr12 = tryDispatchBuiltin.0("[<-", l1, r103);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L293() else L292(i30, r103, dr12);
  L292(i34, r105, l3):
    i37 = ld i;
    check L294() else D52();
  L441():
    vlist1 = force? vlist;
    checkMissing(vlist1);
    c103 = `is.object`(vlist1);
    if c103 then L442() else L443(i184, vlist1);
  L538():
    p34 = prom<V +>{
      vlist4 = ld vlist;
      vlist5 = force? vlist4;
      checkMissing(vlist5);
      return vlist5;
    };
    r270 = dyn unlist[, recursive, `use.names`](p34, FALSE, FALSE);
    check L539() else D145();
  D52():
    deopt 192 [i34, r105, l3, r103, i37];
  D145():
    deopt 561 [r270];
  L44(i41, r110):
    l4 = ld ncols;
    c52 = `is.object`(l4);
    if c52 then L299() else L300(i41, r110, l4);
  L89(i190, dx47):
    st xi = dx47;
    nrows12 = ld nrows;
    check L446() else D112();
  L293():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L43(i30, dx12);
  L294():
    i38 = force? i37;
    ___ = ldf `[<-` in base;
    r108 = dyn ___(l3, r103, i38);
    goto L43(i34, r108);
  L295():
    xi2 = ld xi;
    check L297() else D53();
  L296():
    r109 = dyn base17(<sym xi>);
    goto L44(i36, r109);
  L442():
    dr46 = tryDispatchBuiltin.1("[[", vlist1);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L444() else L443(i184, dr46);
  L443(i188, vlist3):
    i191 = ld i;
    check L445() else D111();
  L539():
    st value = r270;
    sym40 = ldf `as.character`;
    base40 = ldf `as.character` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L540() else L541();
  D53():
    deopt 198 [i36, xi2];
  D111():
    deopt 409 [i188, vlist3, i191];
  D112():
    deopt 413 [i190, nrows12];
  L45(i45, dx15):
    st ncols = dx15;
    sym18 = ldf names;
    base18 = ldf names in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L303() else L304();
  L122(r272):
    st vnames = r272;
    fix_empty_names3 = ld `fix.empty.names`;
    check L545() else D149();
  L297():
    xi3 = force? xi2;
    checkMissing(xi3);
    length2 = ldf length in base;
    r111 = dyn length2(xi3);
    check L298() else D54();
  L299():
    dr14 = tryDispatchBuiltin.0("[<-", l4, r110);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L301() else L300(i41, r110, dr14);
  L300(i43, r113, l6):
    i46 = ld i;
    check L302() else D55();
  L444():
    dx46 = getTryDispatchBuiltinValue(dr46);
    goto L89(i184, dx46);
  L445():
    i192 = force? i191;
    __16 = ldf `[[` in base;
    r198 = dyn __16(vlist3, i192);
    goto L89(i188, r198);
  L446():
    nrows13 = force? nrows12;
    checkMissing(nrows13);
    c104 = `is.object`(nrows13);
    if c104 then L447() else L448(i190, nrows13);
  L540():
    unlist1 = ldf unlist;
    check L542() else D146();
  L541():
    r271 = dyn base40(<lang unlist(`[`(vnames, `>`(ncols, 0)))>);
    goto L122(r271);
  D54():
    deopt 201 [i36, r111];
  D55():
    deopt 203 [i43, r113, l6, r110, i46];
  D146():
    deopt 566 [];
  D149():
    deopt 572 [fix_empty_names3];
  L46(i50, r118):
    st namesi = r118;
    ncols = ld ncols;
    check L307() else D58();
  L90(i196, dx49):
    r200 = `>`(dx49, 0);
    c105 = `as.logical`(r200);
    if c105 then L451() else L91(i196, c105);
  L298():
    goto L44(i36, r111);
  L301():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L45(i41, dx14);
  L302():
    i47 = force? i46;
    ___1 = ldf `[<-` in base;
    r116 = dyn ___1(l6, r110, i47);
    goto L45(i43, r116);
  L303():
    xi4 = ld xi;
    check L305() else D56();
  L304():
    r117 = dyn base18(<sym xi>);
    goto L46(i45, r117);
  L447():
    dr48 = tryDispatchBuiltin.1("[", nrows13);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L449() else L448(i190, dr48);
  L448(i194, nrows15):
    i197 = ld i;
    check L450() else D113();
  L542():
    p35 = prom<V +>{
      vnames10 = ld vnames;
      vnames11 = force? vnames10;
      checkMissing(vnames11);
      c152 = `is.object`(vnames11);
      if c152 then L1() else L2(vnames11);
    L0(dx63):
      return dx63;
    L1():
      dr62 = tryDispatchBuiltin.1("[", vnames11);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L3() else L2(dr62);
    L2(vnames13):
      ncols8 = ld ncols;
      ncols9 = force? ncols8;
      checkMissing(ncols9);
      r273 = `>`(ncols9, 0);
      __21 = ldf `[` in base;
      r274 = dyn __21(vnames13, r273);
      goto L0(r274);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx62);
    };
    r276 = dyn unlist1(p35);
    check L543() else D147();
  L545():
    fix_empty_names4 = force? fix_empty_names3;
    checkMissing(fix_empty_names4);
    c153 = `as.logical`(fix_empty_names4);
    if c153 then L546() else L123(c153);
  D56():
    deopt 209 [i45, xi4];
  D58():
    deopt 214 [i50, ncols];
  D113():
    deopt 415 [i194, nrows15, i197];
  D147():
    deopt 568 [r276];
  L91(i200, c107):
    c116 = `as.logical`(c107);
    if c116 then L460() else L93();
  L123(c155):
    c165 = `as.logical`(c155);
    if c165 then L555() else L126();
  L305():
    xi5 = force? xi4;
    checkMissing(xi5);
    names1 = ldf names in base;
    r119 = dyn names1(xi5);
    check L306() else D57();
  L307():
    ncols1 = force? ncols;
    checkMissing(ncols1);
    c53 = `is.object`(ncols1);
    if c53 then L308() else L309(i50, ncols1);
  L449():
    dx48 = getTryDispatchBuiltinValue(dr48);
    goto L90(i190, dx48);
  L450():
    i198 = force? i197;
    __17 = ldf `[` in base;
    r199 = dyn __17(nrows15, i198);
    goto L90(i194, r199);
  L451():
    nr2 = ld nr;
    check L452() else D114();
  L543():
    as_character1 = ldf `as.character` in base;
    r277 = dyn as_character1(r276);
    check L544() else D148();
  L546():
    sym41 = ldf any;
    base41 = ldf any in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L547() else L548();
  D57():
    deopt 212 [i45, r119];
  D114():
    deopt 421 [i196, c105, nr2];
  D148():
    deopt 570 [r277];
  L47(i54, dx17):
    r121 = `>`(dx17, 1);
    c54 = `as.logical`(r121);
    if c54 then L312() else L48();
  L93():
    goto L120(i200);
  L120(i342):
    stop2 = ldf stop;
    check L536() else D142();
  L124(c158, r279):
    c162 = `as.logical`(r279);
    c163 = `&&`(c158, c162);
    goto L123(c163);
  L126():
    goto L129();
  L129():
    check_names1 = ld `check.names`;
    check L567() else D157();
  L306():
    goto L46(i45, r119);
  L308():
    dr16 = tryDispatchBuiltin.1("[", ncols1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L310() else L309(i50, dr16);
  L309(i52, ncols3):
    i55 = ld i;
    check L311() else D59();
  L452():
    nr3 = force? nr2;
    checkMissing(nr3);
    nrows16 = ld nrows;
    check L453() else D115();
  L460():
    sym29 = ldf unclass;
    base29 = ldf unclass in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L461() else L462();
  L544():
    goto L122(r277);
  L547():
    sym42 = ldf nzchar;
    base42 = ldf nzchar in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L549() else L550();
  L548():
    r278 = dyn base41(<lang `<-`(noname, `!`(nzchar(vnames)))>);
    goto L124(c153, r278);
  L555():
    paste3 = ldf paste0;
    check L556() else D153();
  D59():
    deopt 216 [i52, ncols3, i55];
  D115():
    deopt 423 [i196, c105, nrows16];
  D142():
    deopt 546 [i342];
  D153():
    deopt 588 [];
  D157():
    deopt 602 [check_names1];
  L48():
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L341() else L342();
  L58(i91):
    mirn = ld mirn;
    check L386() else D89();
  L94(i212, r205):
    st xi = r205;
    st fixed = TRUE;
    sym30 = ldf seq_along;
    base30 = ldf seq_along in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L465() else L466();
  L125(c161, r281):
    r283 = `!`(r281);
    st noname = r283;
    any1 = ldf any in base;
    r284 = dyn any1(r283);
    check L553() else D152();
  L310():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L47(i50, dx16);
  L311():
    i56 = force? i55;
    __6 = ldf `[` in base;
    r120 = dyn __6(ncols3, i56);
    goto L47(i52, r120);
  L312():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L313() else L314();
  L453():
    nrows17 = force? nrows16;
    checkMissing(nrows17);
    c108 = `is.object`(nrows17);
    if c108 then L454() else L455(i196, c105, nrows17);
  L461():
    xi14 = ld xi;
    check L463() else D118();
  L462():
    r204 = dyn base29(<sym xi>);
    goto L94(i200, r204);
  L536():
    p33 = prom<V +>{
      gettextf1 = ldf gettextf;
      p32 = prom<V +>{
        paste2 = ldf paste;
        p31 = prom<V +>{
          unique1 = ldf unique;
          p30 = prom<V +>{
            nrows20 = ld nrows;
            nrows21 = force? nrows20;
            checkMissing(nrows21);
            return nrows21;
          };
          r262 = dyn unique1(p30);
          return r262;
        };
        r264 = dyn paste2[, collapse](p31, ", ");
        return r264;
      };
      r266 = dyn gettextf1("arguments imply differing number of rows: %s", p32);
      return r266;
    };
    r268 = dyn stop2[, domain](p33, NA_LGL);
    check L537() else D143();
  L549():
    vnames14 = ld vnames;
    check L551() else D150();
  L550():
    r280 = dyn base42(<sym vnames>);
    goto L125(c153, r280);
  L556():
    p36 = prom<V +>{
      sym43 = ldf seq_along;
      base43 = ldf seq_along in base;
      guard43 = `==`.4(sym43, base43);
      if guard43 then L1() else L2();
    L0(r286):
      return r286;
    L1():
      vnames16 = ld vnames;
      vnames17 = force? vnames16;
      checkMissing(vnames17);
      r287 = seq_along(vnames17);
      goto L0(r287);
    L2():
      r285 = dyn base43(<sym vnames>);
      goto L0(r285);
    };
    r289 = dyn paste3("Var.", p36);
    check L557() else D154();
  L567():
    check_names2 = force? check_names1;
    checkMissing(check_names2);
    c168 = `as.logical`(check_names2);
    if c168 then L568() else L130();
  D89():
    deopt 328 [i91, mirn];
  D118():
    deopt 435 [i200, xi14];
  D143():
    deopt 550 [i342, r268];
  D150():
    deopt 578 [c153, vnames14];
  D152():
    deopt 585 [c161, r284];
  D154():
    deopt 591 [r289];
  L49(i61, r123):
    r125 = `==`(r123, 0);
    c55 = `as.logical`(r125);
    if c55 then L317() else L50();
  L59(i94, r138):
    c61 = `as.logical`(r138);
    if c61 then L345() else L60();
  L92(i204, c112, dx51):
    __19 = ldf `%%` in base;
    r202 = dyn __19(nr3, dx51);
    check L458() else D117();
  L95(i215, r208):
    s2 = toForSeq(r208);
    l23 = length(s2);
    i216 = 0;
    goto L96(i215, i216);
  L130():
    goto L135();
  L135():
    vnames26 = ld vnames;
    check L585() else D166();
  L313():
    namesi = ld namesi;
    check L315() else D60();
  L314():
    r122 = dyn base19(<sym namesi>);
    goto L49(i54, r122);
  L341():
    namesi12 = ld namesi;
    check L343() else D70();
  L342():
    r137 = dyn base21(<sym namesi>);
    goto L59(i54, r137);
  L386():
    mirn1 = force? mirn;
    checkMissing(mirn1);
    c85 = `as.logical`(mirn1);
    if c85 then L387() else L71(i91, c85);
  L454():
    dr50 = tryDispatchBuiltin.1("[", nrows17);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L456() else L455(i196, c105, dr50);
  L455(i202, c110, nrows19):
    i205 = ld i;
    check L457() else D116();
  L463():
    xi15 = force? xi14;
    checkMissing(xi15);
    unclass = ldf unclass in base;
    r206 = dyn unclass(xi15);
    check L464() else D119();
  L465():
    xi16 = ld xi;
    check L467() else D120();
  L466():
    r207 = dyn base30(<sym xi>);
    goto L95(i212, r207);
  L537():
    goto L88(i342);
  L551():
    vnames15 = force? vnames14;
    checkMissing(vnames15);
    nzchar2 = ldf nzchar in base;
    r282 = dyn nzchar2(vnames15);
    check L552() else D151();
  L553():
    goto L124(c161, r284);
  L557():
    c166 = `is.object`(r289);
    if c166 then L558() else L559(r289);
  L568():
    fix_empty_names5 = ld `fix.empty.names`;
    check L569() else D158();
  D60():
    deopt 223 [i54, namesi];
  D70():
    deopt 260 [i54, namesi12];
  D116():
    deopt 425 [i202, c110, nrows19, i205];
  D117():
    deopt 429 [i204, c112, r202];
  D119():
    deopt 438 [i200, r206];
  D120():
    deopt 444 [i212, xi16];
  D151():
    deopt 581 [c153, r282];
  D158():
    deopt 604 [fix_empty_names5];
  D166():
    deopt 633 [vnames26];
  L50():
    goto L53(i61);
  L53(i73):
    no_vn = ld `no.vn`;
    check L326() else D64();
  L60():
    fix_empty_names1 = ld `fix.empty.names`;
    check L352() else D74();
  L71(i136, c87):
    c96 = `as.logical`(c87);
    if c96 then L394() else L73();
  L96(i217, i218):
    i219 = `+`.1(i218, 1);
    c117 = `<`.1(l23, i219);
    if c117 then L468() else L116();
  L127(dx65):
    l36 = ld vnames;
    c167 = `is.object`(l36);
    if c167 then L562() else L563(dx65, l36);
  L315():
    namesi1 = force? namesi;
    checkMissing(namesi1);
    length3 = ldf length in base;
    r124 = dyn length3(namesi1);
    check L316() else D61();
  L317():
    sym20 = ldf seq_len;
    base20 = ldf seq_len in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L318() else L319();
  L343():
    namesi13 = force? namesi12;
    checkMissing(namesi13);
    length4 = ldf length in base;
    r139 = dyn length4(namesi13);
    check L344() else D71();
  L345():
    namesi14 = ld namesi;
    check L346() else D72();
  L387():
    nrows = ld nrows;
    check L388() else D90();
  L456():
    dx50 = getTryDispatchBuiltinValue(dr50);
    goto L92(i196, c105, dx50);
  L457():
    i206 = force? i205;
    __18 = ldf `[` in base;
    r201 = dyn __18(nrows19, i206);
    goto L92(i202, c110, r201);
  L458():
    r203 = `==`(r202, 0);
    c113 = `as.logical`(r203);
    c114 = `&&`(c112, c113);
    goto L91(i204, c114);
  L464():
    goto L94(i200, r206);
  L467():
    xi17 = force? xi16;
    checkMissing(xi17);
    r209 = seq_along(xi17);
    goto L95(i212, r209);
  L552():
    goto L125(c153, r282);
  L558():
    dr64 = tryDispatchBuiltin.1("[", r289);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L560() else L559(dr64);
  L559(r291):
    noname = ld noname;
    check L561() else D155();
  L569():
    fix_empty_names6 = force? fix_empty_names5;
    checkMissing(fix_empty_names6);
    c169 = `as.logical`(fix_empty_names6);
    if c169 then L570() else L131();
  L585():
    vnames27 = force? vnames26;
    checkMissing(vnames27);
    l42 = ld value;
    names__ = ldf `names<-`;
    check L586() else D167();
  D61():
    deopt 226 [i54, r124];
  D64():
    deopt 239 [i73, no_vn];
  D71():
    deopt 263 [i54, r139];
  D72():
    deopt 264 [i94, namesi14];
  D74():
    deopt 271 [i94, fix_empty_names1];
  D90():
    deopt 330 [i91, c85, nrows];
  D155():
    deopt 592 [r291, noname];
  D167():
    deopt 636 [vnames27, l42, vnames27];
  L51(i66, r127):
    st namesi = r127;
    goto L53(i66);
  L73():
    goto L79(i136);
  L79(i160):
    sym26 = ldf abs;
    base26 = ldf abs in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L411() else L412();
  L115(i330):
    fixed = ld fixed;
    check L526() else D139();
  L116():
    x22 = `[[`(s2, i219, NULL, TRUE);
    st j = x22;
    xi18 = ld xi;
    check L469() else D121();
  L128(dx70, dx71):
    st vnames = dx71;
    goto L129();
  L131():
    sym44 = ldf nzchar;
    base44 = ldf nzchar in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L574() else L575();
  L132(r296):
    goto L135();
  L316():
    goto L49(i54, r124);
  L318():
    ncols4 = ld ncols;
    check L320() else D62();
  L319():
    r126 = dyn base20(<lang `[`(ncols, i)>);
    goto L51(i61, r126);
  L326():
    no_vn1 = force? no_vn;
    checkMissing(no_vn1);
    c57 = `is.object`(no_vn1);
    if c57 then L327() else L328(i73, no_vn1);
  L344():
    goto L59(i54, r139);
  L346():
    namesi15 = force? namesi14;
    checkMissing(namesi15);
    l10 = ld vnames;
    c62 = `is.object`(l10);
    if c62 then L347() else L348(i94, namesi15, l10);
  L352():
    fix_empty_names2 = force? fix_empty_names1;
    checkMissing(fix_empty_names2);
    c63 = `as.logical`(fix_empty_names2);
    if c63 then L353() else L62(i94, c63);
  L388():
    nrows1 = force? nrows;
    checkMissing(nrows1);
    c88 = `is.object`(nrows1);
    if c88 then L389() else L390(i91, c85, nrows1);
  L394():
    sym23 = ldf attr;
    base23 = ldf attr in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L395() else L396();
  L468():
    goto L115(i217);
  L560():
    dx64 = getTryDispatchBuiltinValue(dr64);
    goto L127(dx64);
  L561():
    noname1 = force? noname;
    __22 = ldf `[` in base;
    r292 = dyn __22(r291, noname1);
    goto L127(r292);
  L562():
    dr66 = tryDispatchBuiltin.0("[<-", l36, dx65);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L564() else L563(dx65, dr66);
  L563(dx67, l38):
    noname2 = ld noname;
    check L565() else D156();
  L570():
    make_names = ldf `make.names`;
    check L571() else D159();
  L586():
    r309 = dyn names__(l42, NULL, vnames27);
    check L587() else D168();
  D62():
    deopt 230 [i61, ncols4];
  D121():
    deopt 447 [i217, i219, xi18];
  D139():
    deopt 530 [i330, fixed];
  D156():
    deopt 596 [dx67, l38, dx65, noname2];
  D159():
    deopt 607 [];
  D168():
    deopt 638 [vnames27, r309];
  L54(i77, dx21):
    c58 = `as.logical`(dx21);
    if c58 then L331() else L55();
  L61(i100, namesi19, dx27):
    st vnames = dx27;
    goto L58(i100);
  L62(i104, c65):
    c74 = `as.logical`(c65);
    if c74 then L360() else L64();
  L72(i140, c92, dx37):
    r162 = `>`(dx37, 0);
    c93 = `as.logical`(r162);
    c94 = `&&`(c92, c93);
    goto L71(i140, c94);
  L74(i148, r164):
    st rowsi = r164;
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L399() else L400();
  L80(i163, r179):
    l16 = ld nrows;
    c99 = `is.object`(l16);
    if c99 then L419() else L420(i163, r179, l16);
  L133(r298):
    st nz = r298;
    make_names1 = ldf `make.names`;
    check L578() else D163();
  L320():
    ncols5 = force? ncols4;
    checkMissing(ncols5);
    c56 = `is.object`(ncols5);
    if c56 then L321() else L322(i61, ncols5);
  L327():
    dr20 = tryDispatchBuiltin.1("[", no_vn1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L329() else L328(i73, dr20);
  L328(i75, no_vn3):
    i78 = ld i;
    check L330() else D65();
  L347():
    dr26 = tryDispatchBuiltin.0("[[<-", l10, namesi15);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L349() else L348(i94, namesi15, dr26);
  L348(i98, namesi17, l12):
    i101 = ld i;
    check L350() else D73();
  L353():
    no_vn4 = ld `no.vn`;
    check L354() else D75();
  L389():
    dr36 = tryDispatchBuiltin.1("[", nrows1);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L391() else L390(i91, c85, dr36);
  L390(i138, c90, nrows3):
    i141 = ld i;
    check L392() else D91();
  L395():
    xi6 = ld xi;
    check L397() else D92();
  L396():
    r163 = dyn base23(<sym xi>, "row.names");
    goto L74(i136, r163);
  L411():
    nrows4 = ld nrows;
    check L413() else D99();
  L412():
    r178 = dyn base26(<lang `[`(nrows, i)>);
    goto L80(i160, r178);
  L469():
    xi19 = force? xi18;
    checkMissing(xi19);
    c118 = `is.object`(xi19);
    if c118 then L470() else L471(i217, i219, xi19);
  L526():
    fixed1 = force? fixed;
    checkMissing(fixed1);
    c150 = `as.logical`(fixed1);
    if c150 then L527() else L117();
  L564():
    dx69 = getTryDispatchBuiltinValue(dr66);
    goto L128(dx65, dx69);
  L565():
    noname3 = force? noname2;
    ___3 = ldf `[<-` in base;
    r293 = dyn ___3(l38, dx65, noname3);
    goto L128(dx67, r293);
  L571():
    p37 = prom<V +>{
      vnames18 = ld vnames;
      vnames19 = force? vnames18;
      checkMissing(vnames19);
      return vnames19;
    };
    r295 = dyn make_names[, unique](p37, TRUE);
    check L572() else D160();
  L574():
    vnames20 = ld vnames;
    check L576() else D161();
  L575():
    r297 = dyn base44(<sym vnames>);
    goto L133(r297);
  L587():
    st value = r309;
    mrn2 = ld mrn;
    check L588() else D169();
  D65():
    deopt 241 [i75, no_vn3, i78];
  D73():
    deopt 267 [i98, namesi17, l12, namesi15, i101];
  D75():
    deopt 273 [i94, c63, no_vn4];
  D91():
    deopt 332 [i138, c90, nrows3, i141];
  D92():
    deopt 340 [i136, xi6];
  D99():
    deopt 369 [i160, nrows4];
  D160():
    deopt 611 [r295];
  D161():
    deopt 615 [vnames20];
  D163():
    deopt 621 [];
  D169():
    deopt 640 [mrn2];
  L52(i70, dx19):
    r129 = seq_len(dx19);
    goto L51(i70, r129);
  L55():
    paste1 = ldf paste;
    check L334() else D67();
  L56(i82, namesi4):
    l7 = ld vnames;
    c60 = `is.object`(l7);
    if c60 then L336() else L337(i82, namesi4, l7);
  L64():
    goto L58(i104);
  L75(i151, r167):
    c97 = `as.logical`(r167);
    if c97 then L406() else L77();
  L82(i173, dx41):
    st nrows = dx41;
    xi8 = ld xi;
    check L423() else D103();
  L97(i230, i231, dx53):
    st xi1 = dx53;
    sym31 = ldf `is.vector`;
    base31 = ldf `is.vector` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L474() else L475();
  L117():
    goto L120(i330);
  L321():
    dr18 = tryDispatchBuiltin.1("[", ncols5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L323() else L322(i61, dr18);
  L322(i68, ncols7):
    i71 = ld i;
    check L324() else D63();
  L329():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L54(i73, dx20);
  L330():
    i79 = force? i78;
    __8 = ldf `[` in base;
    r131 = dyn __8(no_vn3, i79);
    goto L54(i75, r131);
  L331():
    namesi2 = ld namesi;
    check L332() else D66();
  L349():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L61(i94, namesi15, dx26);
  L350():
    i102 = force? i101;
    ____1 = ldf `[[<-` in base;
    r140 = dyn ____1(l12, namesi15, i102);
    goto L61(i98, namesi17, r140);
  L354():
    no_vn5 = force? no_vn4;
    checkMissing(no_vn5);
    c66 = `is.object`(no_vn5);
    if c66 then L355() else L356(i94, c63, no_vn5);
  L360():
    deparse = ldf deparse;
    check L361() else D77();
  L391():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L72(i91, c85, dx36);
  L392():
    i142 = force? i141;
    __13 = ldf `[` in base;
    r161 = dyn __13(nrows3, i142);
    goto L72(i138, c90, r161);
  L397():
    xi7 = force? xi6;
    checkMissing(xi7);
    attr = ldf attr in base;
    r165 = dyn attr(xi7, "row.names");
    check L398() else D93();
  L399():
    sym25 = ldf nzchar;
    base25 = ldf nzchar in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L401() else L402();
  L400():
    r166 = dyn base24(<lang nzchar(rowsi)>);
    goto L75(i148, r166);
  L413():
    nrows5 = force? nrows4;
    checkMissing(nrows5);
    c98 = `is.object`(nrows5);
    if c98 then L414() else L415(i160, nrows5);
  L419():
    dr40 = tryDispatchBuiltin.0("[<-", l16, r179);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L421() else L420(i163, r179, dr40);
  L420(i171, r183, l18):
    i174 = ld i;
    check L422() else D102();
  L470():
    dr52 = tryDispatchBuiltin.1("[[", xi19);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L472() else L471(i217, i219, dr52);
  L471(i226, i227, xi21):
    j = ld j;
    check L473() else D122();
  L527():
    xi36 = ld xi;
    check L528() else D140();
  L572():
    st vnames = r295;
    goto L132(r295);
  L576():
    vnames21 = force? vnames20;
    checkMissing(vnames21);
    nzchar3 = ldf nzchar in base;
    r299 = dyn nzchar3(vnames21);
    check L577() else D162();
  L578():
    p38 = prom<V +>{
      vnames22 = ld vnames;
      vnames23 = force? vnames22;
      checkMissing(vnames23);
      c170 = `is.object`(vnames23);
      if c170 then L1() else L2(vnames23);
    L0(dx74):
      return dx74;
    L1():
      dr68 = tryDispatchBuiltin.1("[", vnames23);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2(dr68);
    L2(vnames25):
      nz = ld nz;
      nz1 = force? nz;
      __23 = ldf `[` in base;
      r300 = dyn __23(vnames25, nz1);
      goto L0(r300);
    L3():
      dx73 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx73);
    };
    r302 = dyn make_names1[, unique](p38, TRUE);
    check L579() else D164();
  L588():
    mrn3 = force? mrn2;
    checkMissing(mrn3);
    r310 = `!`(mrn3);
    c172 = `as.logical`(r310);
    if c172 then L589() else L136();
  D63():
    deopt 232 [i68, ncols7, i71];
  D66():
    deopt 244 [i77, namesi2];
  D67():
    deopt 247 [i77];
  D77():
    deopt 280 [i104];
  D93():
    deopt 344 [i136, r165];
  D102():
    deopt 377 [i171, r183, l18, r179, i174];
  D103():
    deopt 381 [i173, xi8];
  D122():
    deopt 449 [i226, i227, xi21, j];
  D140():
    deopt 532 [i330, xi36];
  D162():
    deopt 618 [r299];
  D164():
    deopt 625 [r302];
  L57(i88, namesi10, dx25):
    st vnames = dx25;
    goto L58(i88);
  L63(i108, c70, dx29):
    c71 = `as.logical`(dx29);
    c72 = `&&`(c70, c71);
    goto L62(i108, c72);
  L76(i154, r169):
    any = ldf any in base;
    r171 = dyn any(r169);
    check L405() else D96();
  L77():
    goto L78(i151, NULL);
  L78(i159, r176):
    goto L79(i159);
  L81(i167, dx39):
    abs = ldf abs in base;
    r181 = dyn abs(dx39);
    check L418() else D101();
  L98(i236, i237, r212):
    c119 = `as.logical`(r212);
    if c119 then L99(i236, i237, c119) else L478();
  L136():
    sym52 = ldf `is.null`;
    base52 = ldf `is.null` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L653() else L654();
  L157():
    l43 = ld value;
    class__ = ldf `class<-`;
    check L667() else D202();
  L323():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L52(i61, dx18);
  L324():
    i72 = force? i71;
    __7 = ldf `[` in base;
    r128 = dyn __7(ncols7, i72);
    goto L52(i68, r128);
  L332():
    namesi3 = force? namesi2;
    checkMissing(namesi3);
    goto L56(i77, namesi3);
  L334():
    p17 = prom<V +>{
      vnames6 = ld vnames;
      vnames7 = force? vnames6;
      checkMissing(vnames7);
      c59 = `is.object`(vnames7);
      if c59 then L1() else L2(vnames7);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[[", vnames7);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(vnames9):
      i83 = ld i;
      i84 = force? i83;
      __9 = ldf `[[` in base;
      r132 = dyn __9(vnames9, i84);
      goto L0(r132);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    p18 = prom<V +>{
      namesi5 = ld namesi;
      namesi6 = force? namesi5;
      checkMissing(namesi6);
      return namesi6;
    };
    r135 = dyn paste1[, , sep](p17, p18, ".");
    check L335() else D68();
  L336():
    dr24 = tryDispatchBuiltin.0("[[<-", l7, namesi4);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L338() else L337(i82, namesi4, dr24);
  L337(i86, namesi8, l9):
    i89 = ld i;
    check L339() else D69();
  L355():
    dr28 = tryDispatchBuiltin.1("[[", no_vn5);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L357() else L356(i94, c63, dr28);
  L356(i106, c68, no_vn7):
    i109 = ld i;
    check L358() else D76();
  L361():
    p19 = prom<V +>{
      object = ld object;
      object1 = force? object;
      checkMissing(object1);
      c75 = `is.object`(object1);
      if c75 then L1() else L2(object1);
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("[[", object1);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(object3):
      i114 = ld i;
      i115 = force? i114;
      __11 = ldf `[[` in base;
      r142 = dyn __11(object3, i115);
      goto L0(r142);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    r144 = dyn deparse[, nlines](p19, 1);
    check L362() else D78();
  L398():
    goto L74(i136, r165);
  L401():
    rowsi = ld rowsi;
    check L403() else D94();
  L402():
    r168 = dyn base25(<sym rowsi>);
    goto L76(i148, r168);
  L406():
    data_row_names = ldf `data.row.names`;
    check L407() else D97();
  L414():
    dr38 = tryDispatchBuiltin.1("[", nrows5);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L416() else L415(i160, dr38);
  L415(i165, nrows7):
    i168 = ld i;
    check L417() else D100();
  L421():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L82(i163, dx40);
  L422():
    i175 = force? i174;
    ___2 = ldf `[<-` in base;
    r186 = dyn ___2(l18, r179, i175);
    goto L82(i171, r186);
  L423():
    xi9 = force? xi8;
    checkMissing(xi9);
    l19 = ld vlist;
    c100 = `is.object`(l19);
    if c100 then L424() else L425(i173, xi9, l19);
  L472():
    dx52 = getTryDispatchBuiltinValue(dr52);
    goto L97(i217, i219, dx52);
  L473():
    j1 = force? j;
    __20 = ldf `[[` in base;
    r210 = dyn __20(xi21, j1);
    goto L97(i226, i227, r210);
  L474():
    xi22 = ld xi1;
    check L476() else D123();
  L475():
    r211 = dyn base31(<sym xi1>);
    goto L98(i230, i231, r211);
  L528():
    xi37 = force? xi36;
    checkMissing(xi37);
    l33 = ld vlist;
    c151 = `is.object`(l33);
    if c151 then L529() else L530(i330, xi37, l33);
  L577():
    goto L133(r299);
  L579():
    l39 = ld vnames;
    c171 = `is.object`(l39);
    if c171 then L580() else L581(r302, l39);
  L589():
    sym45 = ldf length;
    base45 = ldf length in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L590() else L591();
  D68():
    deopt 252 [i77, r135];
  D69():
    deopt 254 [i86, namesi8, l9, namesi4, i89];
  D76():
    deopt 275 [i106, c68, no_vn7, i109];
  D78():
    deopt 284 [i104, r144];
  D94():
    deopt 350 [i148, rowsi];
  D96():
    deopt 355 [i154, r171];
  D97():
    deopt 357 [i151];
  D100():
    deopt 371 [i165, nrows7, i168];
  D101():
    deopt 375 [i167, r181];
  D123():
    deopt 455 [i230, i231, xi22];
  D202():
    deopt 763 ["data.frame", l43, "data.frame"];
  L83(i179, dx43):
    st vlist = dx43;
    goto L35(i179);
  L99(i238, i239, c120):
    c125 = `as.logical`(c120);
    if c125 then L482() else L100();
  L118(i337, dx61):
    st vlist = dx61;
    goto L88(i337);
  L134(r306, dx76):
    st vnames = dx76;
    goto L132(r306);
  L137(r312):
    r314 = `==`(r312, 1);
    c173 = `as.logical`(r314);
    if c173 then L594() else L138(c173);
  L158(r345):
    r346 = `!`(r345);
    c212 = `as.logical`(r346);
    if c212 then L656() else L159(c212);
  L335():
    goto L56(i77, r135);
  L338():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L57(i82, namesi4, dx24);
  L339():
    i90 = force? i89;
    ____ = ldf `[[<-` in base;
    r136 = dyn ____(l9, namesi4, i90);
    goto L57(i86, namesi8, r136);
  L357():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L63(i94, c63, dx28);
  L358():
    i110 = force? i109;
    __10 = ldf `[[` in base;
    r141 = dyn __10(no_vn7, i110);
    goto L63(i106, c68, r141);
  L362():
    c76 = `is.object`(r144);
    if c76 then L363() else L364(i104, r144);
  L403():
    rowsi1 = force? rowsi;
    checkMissing(rowsi1);
    nzchar1 = ldf nzchar in base;
    r170 = dyn nzchar1(rowsi1);
    check L404() else D95();
  L405():
    goto L75(i154, r171);
  L407():
    p24 = prom<V +>{
      row_names23 = ld `row.names`;
      row_names24 = force? row_names23;
      checkMissing(row_names24);
      return row_names24;
    };
    p25 = prom<V +>{
      rowsi2 = ld rowsi;
      rowsi3 = force? rowsi2;
      checkMissing(rowsi3);
      return rowsi3;
    };
    p26 = prom<V +>{
      i157 = ld i;
      i158 = force? i157;
      checkMissing(i158);
      return i158;
    };
    r175 = dyn data_row_names(p24, p25, p26);
    check L408() else D98();
  L416():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L81(i160, dx38);
  L417():
    i169 = force? i168;
    __14 = ldf `[` in base;
    r180 = dyn __14(nrows7, i169);
    goto L81(i165, r180);
  L418():
    goto L80(i167, r181);
  L424():
    dr42 = tryDispatchBuiltin.0("[[<-", l19, xi9);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L426() else L425(i173, xi9, dr42);
  L425(i177, xi11, l21):
    i180 = ld i;
    check L427() else D104();
  L476():
    xi23 = force? xi22;
    checkMissing(xi23);
    is_vector = ldf `is.vector` in base;
    r213 = dyn is_vector(xi23, "any");
    check L477() else D124();
  L478():
    is_factor = ldf `is.factor`;
    check L479() else D125();
  L529():
    dr60 = tryDispatchBuiltin.0("[[<-", l33, xi37);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L531() else L530(i330, xi37, dr60);
  L530(i335, xi39, l35):
    i338 = ld i;
    check L532() else D141();
  L580():
    dr70 = tryDispatchBuiltin.0("[<-", l39, r302);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L582() else L581(r302, dr70);
  L581(r304, l41):
    nz2 = ld nz;
    check L583() else D165();
  L590():
    row_names25 = ld `row.names`;
    check L592() else D170();
  L591():
    r311 = dyn base45(<sym row.names>);
    goto L137(r311);
  L653():
    row_names46 = ld `row.names`;
    check L655() else D196();
  L654():
    r344 = dyn base52(<sym row.names>);
    goto L158(r344);
  L667():
    r352 = dyn class__(l43, NULL, "data.frame");
    check L668() else D203();
  D95():
    deopt 353 [i148, r170];
  D98():
    deopt 361 [i151, r175];
  D104():
    deopt 384 [i177, xi11, l21, xi9, i180];
  D124():
    deopt 459 [i230, i231, r213];
  D125():
    deopt 461 [i236, i237, c119];
  D141():
    deopt 535 [i335, xi39, l35, xi37, i338];
  D165():
    deopt 627 [r304, l41, r302, nz2];
  D170():
    deopt 645 [row_names25];
  D196():
    deopt 738 [row_names46];
  D203():
    deopt 765 ["data.frame", r352];
  L65(i119, dx33):
    st tmpname = dx33;
    startsWith = ldf startsWith;
    check L366() else D79();
  L100():
    sym33 = ldf `is.character`;
    base33 = ldf `is.character` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L490() else L491();
  L103(i262, i263):
    goto L96(i262, i263);
  L138(c175):
    c179 = `as.logical`(c175);
    if c179 then L597() else L139();
  L159(c214):
    c221 = `as.logical`(c214);
    if c221 then L663() else L161();
  L363():
    dr32 = tryDispatchBuiltin.1("[", r144);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L365() else L364(i104, dr32);
  L364(i117, r146):
    __12 = ldf `[` in base;
    r147 = dyn __12(r146, 1);
    goto L65(i117, r147);
  L404():
    goto L76(i148, r170);
  L408():
    st `row.names` = r175;
    goto L78(i151, r175);
  L426():
    dx42 = getTryDispatchBuiltinValue(dr42);
    goto L83(i173, dx42);
  L427():
    i181 = force? i180;
    ____3 = ldf `[[<-` in base;
    r187 = dyn ____3(l21, xi9, i181);
    goto L83(i177, r187);
  L477():
    goto L98(i230, i231, r213);
  L479():
    p27 = prom<V +>{
      xi24 = ld xi1;
      xi25 = force? xi24;
      checkMissing(xi25);
      return xi25;
    };
    r215 = dyn is_factor(p27);
    check L480() else D126();
  L482():
    sym32 = ldf rep;
    base32 = ldf rep in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L483() else L484();
  L531():
    dx60 = getTryDispatchBuiltinValue(dr60);
    goto L118(i330, dx60);
  L532():
    i339 = force? i338;
    ____7 = ldf `[[<-` in base;
    r258 = dyn ____7(l35, xi37, i339);
    goto L118(i335, r258);
  L582():
    dx75 = getTryDispatchBuiltinValue(dr70);
    goto L134(r302, dx75);
  L583():
    nz3 = force? nz2;
    ___4 = ldf `[<-` in base;
    r307 = dyn ___4(l41, r302, nz3);
    goto L134(r304, r307);
  L592():
    row_names26 = force? row_names25;
    checkMissing(row_names26);
    length5 = ldf length in base;
    r313 = dyn length5(row_names26);
    check L593() else D171();
  L594():
    nr4 = ld nr;
    check L595() else D172();
  L655():
    row_names47 = force? row_names46;
    checkMissing(row_names47);
    c211 = `==`(row_names47, NULL);
    goto L158(c211);
  L656():
    sym53 = ldf length;
    base53 = ldf length in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L657() else L658();
  L668():
    st value = r352;
    sym54 = ldf `is.null`;
    base54 = ldf `is.null` in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L669() else L670();
  D79():
    deopt 290 [i119];
  D126():
    deopt 463 [i236, i237, c119, r215];
  D171():
    deopt 648 [r313];
  D172():
    deopt 651 [c173, nr4];
  L101(i252, i253, r217):
    l24 = ld xi;
    c126 = `is.object`(l24);
    if c126 then L485() else L486(i252, i253, r217, l24);
  L104(i268, i269, r226):
    c128 = `as.logical`(r226);
    if c128 then L493() else L105(i268, i269, c128);
  L139():
    sym50 = ldf `is.null`;
    base50 = ldf `is.null` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L638() else L639();
  L152(dx81):
    goto L157();
  L160(c217, r348):
    nr8 = ld nr;
    check L661() else D199();
  L161():
    goto L157();
  L162(r354):
    c223 = `as.logical`(r354);
    if c223 then L672() else L163();
  L365():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L65(i104, dx32);
  L366():
    p20 = prom<V +>{
      tmpname = ld tmpname;
      tmpname1 = force? tmpname;
      checkMissing(tmpname1);
      return tmpname1;
    };
    r149 = dyn startsWith(p20, "I(");
    check L367() else D80();
  L480():
    c122 = `as.logical`(r215);
    c123 = `||`(c119, c122);
    goto L99(i236, i237, c123);
  L483():
    rep = ldf rep in base;
    r218 = dyn rep(<sym xi1>, <sym nr>);
    goto L101(i238, i239, r218);
  L484():
    r216 = dyn base32[, `length.out`](<sym xi1>, <sym nr>);
    goto L101(i238, i239, r216);
  L490():
    xi26 = ld xi1;
    check L492() else D128();
  L491():
    r225 = dyn base33(<sym xi1>);
    goto L104(i238, i239, r225);
  L593():
    goto L137(r313);
  L595():
    nr5 = force? nr4;
    checkMissing(nr5);
    r315 = `!=`(nr5, 1);
    c176 = `as.logical`(r315);
    c177 = `&&`(c173, c176);
    goto L138(c177);
  L597():
    sym46 = ldf `is.character`;
    base46 = ldf `is.character` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L598() else L599();
  L657():
    row_names48 = ld `row.names`;
    check L659() else D197();
  L658():
    r347 = dyn base53(<sym row.names>);
    goto L160(c212, r347);
  L663():
    warning = ldf warning;
    check L664() else D200();
  L669():
    row_names50 = ld `row.names`;
    check L671() else D204();
  L670():
    r353 = dyn base54(<sym row.names>);
    goto L162(r353);
  D80():
    deopt 293 [i119, r149];
  D128():
    deopt 474 [i238, i239, xi26];
  D197():
    deopt 744 [c212, row_names48];
  D199():
    deopt 747 [c217, r348, nr8];
  D200():
    deopt 752 [];
  D204():
    deopt 768 [row_names50];
  L102(i260, i261, r222, dx55):
    st xi = dx55;
    goto L103(i260, i261);
  L105(i272, i273, c130):
    c137 = `as.logical`(c130);
    if c137 then L499() else L107();
  L140(r317):
    c181 = `as.logical`(r317);
    if c181 then L601() else L141();
  L153(r337):
    r338 = `!`(r337);
    c201 = `as.logical`(r338);
    if c201 then L641() else L154(c201);
  L163():
    sym55 = ldf `is.object`;
    base55 = ldf `is.object` in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L678() else L679();
  L164():
    value8 = ld value;
    check L709() else D224();
  L367():
    c77 = `as.logical`(r149);
    if c77 then L368() else L66(i119, c77);
  L485():
    dr54 = tryDispatchBuiltin.0("[[<-", l24, r217);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L487() else L486(i252, i253, r217, dr54);
  L486(i256, i257, r220, l26):
    j2 = ld j;
    check L488() else D127();
  L492():
    xi27 = force? xi26;
    checkMissing(xi27);
    c127 = `is.character`(xi27);
    goto L104(i238, i239, c127);
  L493():
    sym34 = ldf inherits;
    base34 = ldf inherits in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L494() else L495();
  L598():
    row_names27 = ld `row.names`;
    check L600() else D173();
  L599():
    r316 = dyn base46(<sym row.names>);
    goto L140(r316);
  L638():
    row_names42 = ld `row.names`;
    check L640() else D190();
  L639():
    r336 = dyn base50(<sym row.names>);
    goto L153(r336);
  L659():
    row_names49 = force? row_names48;
    checkMissing(row_names49);
    length9 = ldf length in base;
    r349 = dyn length9(row_names49);
    check L660() else D198();
  L661():
    nr9 = force? nr8;
    checkMissing(nr9);
    r350 = `!=`(r348, nr9);
    c218 = `as.logical`(r350);
    c219 = `&&`(c217, c218);
    goto L159(c219);
  L664():
    r351 = dyn warning("row names were found from a short variable and have been discarded");
    check L665() else D201();
  L671():
    row_names51 = force? row_names50;
    checkMissing(row_names51);
    c222 = `==`(row_names51, NULL);
    goto L162(c222);
  L672():
    _set_row_names = ldf `.set_row_names`;
    check L673() else D205();
  D127():
    deopt 469 [i256, i257, r220, l26, r217, j2];
  D173():
    deopt 657 [row_names27];
  D190():
    deopt 718 [row_names42];
  D198():
    deopt 747 [c212, r349];
  D201():
    deopt 754 [r351];
  D205():
    deopt 772 [];
  D224():
    deopt 831 [value8];
  L66(i121, c79):
    c83 = `as.logical`(c79);
    if c83 then L372() else L67();
  L106(i278, i279, c133, r228):
    c134 = `as.logical`(r228);
    c135 = `&&`(c133, c134);
    goto L105(i278, i279, c135);
  L107():
    sym37 = ldf inherits;
    base37 = ldf inherits in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L507() else L508();
  L141():
    goto L143();
  L143():
    sym48 = ldf length;
    base48 = ldf length in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L608() else L609();
  L154(c203):
    c210 = `as.logical`(c203);
    if c210 then L648() else L156();
  L165(r360):
    c225 = `as.logical`(r360);
    if c225 then L166(c225) else L681();
  L368():
    endsWith = ldf endsWith;
    check L369() else D81();
  L487():
    dx54 = getTryDispatchBuiltinValue(dr54);
    goto L102(i252, i253, r217, dx54);
  L488():
    j3 = force? j2;
    ____4 = ldf `[[<-` in base;
    r223 = dyn ____4(l26, r217, j3);
    goto L102(i256, i257, r220, r223);
  L494():
    xi28 = ld xi1;
    check L496() else D129();
  L495():
    r227 = dyn base34(<sym xi1>, "AsIs");
    goto L106(i268, i269, c128, r227);
  L499():
    structure1 = ldf structure;
    check L500() else D131();
  L600():
    row_names28 = force? row_names27;
    checkMissing(row_names28);
    c180 = `is.character`(row_names28);
    goto L140(c180);
  L601():
    sym47 = ldf match;
    base47 = ldf match in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L602() else L603();
  L640():
    row_names43 = force? row_names42;
    checkMissing(row_names43);
    c200 = `==`(row_names43, NULL);
    goto L153(c200);
  L641():
    sym51 = ldf length;
    base51 = ldf length in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L642() else L643();
  L660():
    goto L160(c212, r349);
  L665():
    st `row.names` = NULL;
    goto L157();
  L673():
    p39 = prom<V +>{
      nr10 = ld nr;
      nr11 = force? nr10;
      checkMissing(nr11);
      return nr11;
    };
    r356 = dyn _set_row_names(p39);
    check L674() else D206();
  L678():
    row_names52 = ld `row.names`;
    check L680() else D209();
  L679():
    r359 = dyn base55(<sym row.names>);
    goto L165(r359);
  L709():
    value9 = force? value8;
    checkMissing(value9);
    popenv;
    return value9;
  D81():
    deopt 295 [i119, c77];
  D129():
    deopt 479 [i268, i269, c128, xi28];
  D131():
    deopt 487 [i272, i273];
  D206():
    deopt 774 [r356];
  D209():
    deopt 782 [row_names52];
  L67():
    goto L69(i121);
  L69(i128):
    tmpname8 = ld tmpname;
    check L380() else D87();
  L109(i298, i299, r245):
    c139 = `as.logical`(r245);
    if c139 then L110(i298, i299, c139) else L511();
  L142(r319):
    st `row.names` = r319;
    goto L143();
  L144(r323):
    r325 = `!=`(r323, 1);
    c182 = `as.logical`(r325);
    if c182 then L145(c182) else L612();
  L155(c206, r340):
    nr6 = ld nr;
    check L646() else D193();
  L156():
    goto L152(NULL);
  L166(c226):
    c235 = `as.logical`(c226);
    if c235 then L686() else L168();
  L369():
    p21 = prom<V +>{
      tmpname2 = ld tmpname;
      tmpname3 = force? tmpname2;
      checkMissing(tmpname3);
      return tmpname3;
    };
    r151 = dyn endsWith(p21, ")");
    check L370() else D82();
  L372():
    sym22 = ldf nchar;
    base22 = ldf nchar in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L373() else L374();
  L496():
    xi29 = force? xi28;
    checkMissing(xi29);
    inherits = ldf inherits in base;
    r229 = dyn inherits(xi29, "AsIs", FALSE);
    check L497() else D130();
  L500():
    p28 = prom<V +>{
      sym35 = ldf rep;
      base35 = ldf rep in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L1() else L2();
    L0(r231):
      return r231;
    L1():
      rep1 = ldf rep in base;
      r232 = dyn rep1(<sym xi1>, <sym nr>);
      goto L0(r232);
    L2():
      r230 = dyn base35[, `length.out`](<sym xi1>, <sym nr>);
      goto L0(r230);
    };
    p29 = prom<V +>{
      sym36 = ldf class;
      base36 = ldf class in base;
      guard36 = `==`.4(sym36, base36);
      if guard36 then L1() else L2();
    L0(r235):
      return r235;
    L1():
      xi30 = ld xi1;
      xi31 = force? xi30;
      checkMissing(xi31);
      class = ldf class in base;
      r236 = dyn class(xi31);
      goto L0(r236);
    L2():
      r234 = dyn base36(<sym xi1>);
      goto L0(r234);
    };
    r238 = dyn structure1[, class](p28, p29);
    check L501() else D132();
  L507():
    xi32 = ld xi1;
    check L509() else D134();
  L508():
    r244 = dyn base37(<sym xi1>, "Date");
    goto L109(i272, i273, r244);
  L602():
    row_names29 = ld `row.names`;
    check L604() else D174();
  L603():
    r318 = dyn base47(<sym row.names>, <sym vnames>, 0);
    goto L142(r318);
  L608():
    row_names31 = ld `row.names`;
    check L610() else D177();
  L609():
    r322 = dyn base48(<sym row.names>);
    goto L144(r322);
  L642():
    row_names44 = ld `row.names`;
    check L644() else D191();
  L643():
    r339 = dyn base51(<sym row.names>);
    goto L155(c201, r339);
  L648():
    stop4 = ldf stop;
    check L649() else D194();
  L674():
    l44 = ld value;
    attr__ = ldf `attr<-`;
    check L675() else D207();
  L680():
    row_names53 = force? row_names52;
    checkMissing(row_names53);
    c224 = `is.object`(row_names53);
    goto L165(c224);
  L681():
    sym56 = ldf `is.integer`;
    base56 = ldf `is.integer` in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L682() else L683();
  D82():
    deopt 298 [i119, c77, r151];
  D87():
    deopt 319 [i128, tmpname8];
  D130():
    deopt 484 [i268, i269, c128, r229];
  D132():
    deopt 491 [i272, i273, r238];
  D134():
    deopt 499 [i272, i273, xi32];
  D174():
    deopt 662 [row_names29];
  D177():
    deopt 675 [row_names31];
  D191():
    deopt 724 [c201, row_names44];
  D193():
    deopt 727 [c206, r340, nr6];
  D194():
    deopt 732 [];
  D207():
    deopt 776 [r356, l44, r356];
  L68(i127, r153):
    st ntmpn = r153;
    substr = ldf substr;
    check L377() else D85();
  L110(i300, i301, c140):
    c148 = `as.logical`(c140);
    if c148 then L517() else L112();
  L145(c183):
    c188 = `as.logical`(c183);
    if c188 then L146(c188) else L615();
  L167(c230, r362):
    r363 = `!`(r362);
    c232 = `as.logical`(r363);
    c233 = `||`(c230, c232);
    goto L166(c233);
  L168():
    goto L170();
  L170():
    sym58 = ldf anyNA;
    base58 = ldf anyNA in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L692() else L693();
  L370():
    c80 = `as.logical`(r151);
    c81 = `&&`(c77, c80);
    goto L66(i119, c81);
  L373():
    tmpname4 = ld tmpname;
    check L375() else D83();
  L374():
    r152 = dyn base22(<sym tmpname>, "c");
    goto L68(i121, r152);
  L380():
    tmpname9 = force? tmpname8;
    checkMissing(tmpname9);
    l13 = ld vnames;
    c84 = `is.object`(l13);
    if c84 then L381() else L382(i128, tmpname9, l13);
  L497():
    goto L106(i268, i269, c128, r229);
  L501():
    l27 = ld xi;
    c138 = `is.object`(l27);
    if c138 then L502() else L503(i272, i273, r238, l27);
  L509():
    xi33 = force? xi32;
    checkMissing(xi33);
    inherits1 = ldf inherits in base;
    r246 = dyn inherits1(xi33, "Date", FALSE);
    check L510() else D135();
  L511():
    sym38 = ldf inherits;
    base38 = ldf inherits in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L512() else L513();
  L604():
    row_names30 = force? row_names29;
    checkMissing(row_names30);
    vnames28 = ld vnames;
    check L605() else D175();
  L610():
    row_names32 = force? row_names31;
    checkMissing(row_names32);
    length6 = ldf length in base;
    r324 = dyn length6(row_names32);
    check L611() else D178();
  L612():
    row_names33 = ld `row.names`;
    check L613() else D179();
  L644():
    row_names45 = force? row_names44;
    checkMissing(row_names45);
    length8 = ldf length in base;
    r341 = dyn length8(row_names45);
    check L645() else D192();
  L646():
    nr7 = force? nr6;
    checkMissing(nr7);
    r342 = `!=`(r340, nr7);
    c207 = `as.logical`(r342);
    c208 = `&&`(c206, c207);
    goto L154(c208);
  L649():
    r343 = dyn stop4("row names supplied are of the wrong length");
    check L650() else D195();
  L675():
    r357 = dyn attr__(l44, NULL, "row.names", r356);
    check L676() else D208();
  L682():
    row_names54 = ld `row.names`;
    check L684() else D210();
  L683():
    r361 = dyn base56(<sym row.names>);
    goto L167(c225, r361);
  L686():
    sym57 = ldf `as.character`;
    base57 = ldf `as.character` in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L687() else L688();
  D83():
    deopt 302 [i121, tmpname4];
  D85():
    deopt 311 [i127];
  D135():
    deopt 504 [i272, i273, r246];
  D175():
    deopt 664 [vnames28];
  D178():
    deopt 678 [r324];
  D179():
    deopt 681 [c182, row_names33];
  D192():
    deopt 727 [c201, r341];
  D195():
    deopt 734 [r343];
  D208():
    deopt 779 [r356, r357];
  D210():
    deopt 786 [c225, row_names54];
  L70(i132, tmpname13, dx35):
    st vnames = dx35;
    goto L58(i132);
  L108(i292, i293, r242, dx57):
    st xi = dx57;
    goto L103(i292, i293);
  L111(i308, i309, c144, r248):
    c145 = `as.logical`(r248);
    c146 = `||`(c144, c145);
    goto L110(i308, i309, c146);
  L112():
    st fixed = FALSE;
    goto L115(i300);
  L146(c189):
    c197 = `as.logical`(c189);
    if c197 then L622() else L148();
  L169(r365):
    st `row.names` = r365;
    goto L170();
  L171(r369):
    c236 = `as.logical`(r369);
    if c236 then L696() else L172();
  L375():
    tmpname5 = force? tmpname4;
    checkMissing(tmpname5);
    nchar = ldf nchar in base;
    r154 = dyn nchar(tmpname5, "c", FALSE, NA_LGL);
    check L376() else D84();
  L377():
    p22 = prom<V +>{
      tmpname6 = ld tmpname;
      tmpname7 = force? tmpname6;
      checkMissing(tmpname7);
      return tmpname7;
    };
    p23 = prom<V +>{
      ntmpn = ld ntmpn;
      ntmpn1 = force? ntmpn;
      checkMissing(ntmpn1);
      r156 = `-`(ntmpn1, 1);
      return r156;
    };
    r158 = dyn substr(p22, 3, p23);
    check L378() else D86();
  L381():
    dr34 = tryDispatchBuiltin.0("[[<-", l13, tmpname9);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L383() else L382(i128, tmpname9, dr34);
  L382(i130, tmpname11, l15):
    i133 = ld i;
    check L384() else D88();
  L502():
    dr56 = tryDispatchBuiltin.0("[[<-", l27, r238);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L504() else L503(i272, i273, r238, dr56);
  L503(i288, i289, r240, l29):
    j4 = ld j;
    check L505() else D133();
  L510():
    goto L109(i272, i273, r246);
  L512():
    xi34 = ld xi1;
    check L514() else D136();
  L513():
    r247 = dyn base38(<sym xi1>, "POSIXct");
    goto L111(i298, i299, c139, r247);
  L517():
    sym39 = ldf rep;
    base39 = ldf rep in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L518() else L519();
  L605():
    vnames29 = force? vnames28;
    checkMissing(vnames29);
    match = ldf match in base;
    r320 = dyn match(row_names30, vnames29, 0, NULL);
    check L606() else D176();
  L611():
    goto L144(r324);
  L613():
    row_names34 = force? row_names33;
    checkMissing(row_names34);
    r326 = `<`(row_names34, 1);
    c185 = `as.logical`(r326);
    c186 = `||`(c182, c185);
    goto L145(c186);
  L615():
    row_names35 = ld `row.names`;
    check L616() else D180();
  L645():
    goto L155(c201, r341);
  L650():
    goto L152(r343);
  L676():
    st value = r357;
    goto L164();
  L684():
    row_names55 = force? row_names54;
    checkMissing(row_names55);
    c231 = `is.integer`(row_names55);
    goto L167(c225, c231);
  L687():
    row_names56 = ld `row.names`;
    check L689() else D211();
  L688():
    r364 = dyn base57(<sym row.names>);
    goto L169(r364);
  L692():
    row_names58 = ld `row.names`;
    check L694() else D213();
  L693():
    r368 = dyn base58(<sym row.names>);
    goto L171(r368);
  D84():
    deopt 308 [i121, r154];
  D86():
    deopt 315 [i127, r158];
  D88():
    deopt 322 [i130, tmpname11, l15, tmpname9, i133];
  D133():
    deopt 493 [i288, i289, r240, l29, r238, j4];
  D136():
    deopt 507 [i298, i299, c139, xi34];
  D176():
    deopt 669 [r320];
  D180():
    deopt 686 [c188, row_names35];
  D211():
    deopt 793 [row_names56];
  D213():
    deopt 802 [row_names58];
  L113(i320, i321, r251):
    l30 = ld xi;
    c149 = `is.object`(l30);
    if c149 then L520() else L521(i320, i321, r251, l30);
  L148():
    goto L149();
  L149():
    row_names40 = ld `row.names`;
    check L626() else D185();
  L172():
    goto L173();
  L173():
    anyDuplicated1 = ldf anyDuplicated;
    check L700() else D217();
  L376():
    goto L68(i121, r154);
  L378():
    st tmpname = r158;
    goto L69(i127);
  L383():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L70(i128, tmpname9, dx34);
  L384():
    i134 = force? i133;
    ____2 = ldf `[[<-` in base;
    r160 = dyn ____2(l15, tmpname9, i134);
    goto L70(i130, tmpname11, r160);
  L504():
    dx56 = getTryDispatchBuiltinValue(dr56);
    goto L108(i272, i273, r238, dx56);
  L505():
    j5 = force? j4;
    ____5 = ldf `[[<-` in base;
    r243 = dyn ____5(l29, r238, j5);
    goto L108(i288, i289, r240, r243);
  L514():
    xi35 = force? xi34;
    checkMissing(xi35);
    inherits2 = ldf inherits in base;
    r249 = dyn inherits2(xi35, "POSIXct", FALSE);
    check L515() else D137();
  L518():
    rep2 = ldf rep in base;
    r252 = dyn rep2(<sym xi1>, <sym nr>);
    goto L113(i300, i301, r252);
  L519():
    r250 = dyn base39[, `length.out`](<sym xi1>, <sym nr>);
    goto L113(i300, i301, r250);
  L606():
    goto L142(r320);
  L616():
    row_names36 = force? row_names35;
    checkMissing(row_names36);
    sym49 = ldf length;
    base49 = ldf length in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L617() else L618();
  L622():
    stop3 = ldf stop;
    check L623() else D183();
  L689():
    row_names57 = force? row_names56;
    checkMissing(row_names57);
    as_character2 = ldf `as.character` in base;
    r366 = dyn as_character2(row_names57);
    check L690() else D212();
  L694():
    row_names59 = force? row_names58;
    checkMissing(row_names59);
    anyNA1 = ldf anyNA in base;
    r370 = dyn anyNA1(row_names59);
    check L695() else D214();
  L696():
    stop5 = ldf stop;
    check L697() else D215();
  D137():
    deopt 512 [i298, i299, c139, r249];
  D183():
    deopt 696 [];
  D185():
    deopt 701 [row_names40];
  D212():
    deopt 796 [r366];
  D214():
    deopt 805 [r370];
  D215():
    deopt 807 [];
  D217():
    deopt 813 [];
  L114(i328, i329, r256, dx59):
    st xi = dx59;
    goto L103(i328, i329);
  L147(c193, row_names39, r328):
    r330 = `>`(row_names39, r328);
    c194 = `as.logical`(r330);
    c195 = `||`(c193, c194);
    goto L146(c195);
  L515():
    goto L111(i298, i299, c139, r249);
  L520():
    dr58 = tryDispatchBuiltin.0("[[<-", l30, r251);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L522() else L521(i320, i321, r251, dr58);
  L521(i324, i325, r254, l32):
    j6 = ld j;
    check L523() else D138();
  L617():
    vnames30 = ld vnames;
    check L619() else D181();
  L618():
    r327 = dyn base49(<sym vnames>);
    goto L147(c188, row_names36, r327);
  L623():
    r331 = dyn stop3("'row.names' should specify one of the variables");
    check L624() else D184();
  L626():
    row_names41 = force? row_names40;
    checkMissing(row_names41);
    st i = row_names41;
    value = ld value;
    check L627() else D186();
  L690():
    goto L169(r366);
  L695():
    goto L171(r370);
  L697():
    r371 = dyn stop5("row names contain missing values");
    check L698() else D216();
  L700():
    p40 = prom<V +>{
      row_names60 = ld `row.names`;
      row_names61 = force? row_names60;
      checkMissing(row_names61);
      return row_names61;
    };
    r374 = dyn anyDuplicated1(p40);
    check L701() else D218();
  D138():
    deopt 518 [i324, i325, r254, l32, r251, j6];
  D181():
    deopt 689 [c188, row_names36, vnames30];
  D184():
    deopt 698 [r331];
  D186():
    deopt 704 [value];
  D216():
    deopt 809 [r371];
  D218():
    deopt 815 [r374];
  L522():
    dx58 = getTryDispatchBuiltinValue(dr58);
    goto L114(i320, i321, r251, dx58);
  L523():
    j7 = force? j6;
    ____6 = ldf `[[<-` in base;
    r257 = dyn ____6(l32, r251, j7);
    goto L114(i324, i325, r254, r257);
  L619():
    vnames31 = force? vnames30;
    checkMissing(vnames31);
    length7 = ldf length in base;
    r329 = dyn length7(vnames31);
    check L620() else D182();
  L624():
    goto L149();
  L627():
    value1 = force? value;
    checkMissing(value1);
    c198 = `is.object`(value1);
    if c198 then L628() else L629(value1);
  L698():
    goto L173();
  L701():
    c237 = `as.logical`(r374);
    if c237 then L702() else L174();
  D182():
    deopt 692 [c188, row_names36, r329];
  L150(dx78):
    st `row.names` = dx78;
    value4 = ld value;
    check L632() else D188();
  L174():
    goto L175();
  L175():
    row_names68 = ld `row.names`;
    check L706() else D221();
  L620():
    goto L147(c188, row_names36, r329);
  L628():
    dr72 = tryDispatchBuiltin.1("[[", value1);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L630() else L629(dr72);
  L629(value3):
    i343 = ld i;
    check L631() else D187();
  L702():
    stop6 = ldf stop;
    check L703() else D219();
  D187():
    deopt 706 [value3, i343];
  D188():
    deopt 710 [value4];
  D219():
    deopt 817 [];
  D221():
    deopt 824 [row_names68];
  L630():
    dx77 = getTryDispatchBuiltinValue(dr72);
    goto L150(dx77);
  L631():
    i344 = force? i343;
    __24 = ldf `[[` in base;
    r333 = dyn __24(value3, i344);
    goto L150(r333);
  L632():
    value5 = force? value4;
    checkMissing(value5);
    c199 = `is.object`(value5);
    if c199 then L633() else L634(value5);
  L703():
    p45 = prom<V +>{
      gettextf2 = ldf gettextf;
      p44 = prom<V +>{
        paste4 = ldf paste;
        p43 = prom<V +>{
          unique2 = ldf unique;
          p42 = prom<V +>{
            row_names62 = ld `row.names`;
            row_names63 = force? row_names62;
            checkMissing(row_names63);
            c238 = `is.object`(row_names63);
            if c238 then L1() else L2(row_names63);
          L0(dx84):
            return dx84;
          L1():
            dr76 = tryDispatchBuiltin.1("[", row_names63);
            dc38 = getTryDispatchBuiltinDispatched(dr76);
            if dc38 then L3() else L2(dr76);
          L2(row_names65):
            duplicated1 = ldf duplicated;
            p41 = prom<V +>{
              row_names66 = ld `row.names`;
              row_names67 = force? row_names66;
              checkMissing(row_names67);
              return row_names67;
            };
            r376 = dyn duplicated1(p41);
            __26 = ldf `[` in base;
            r377 = dyn __26(row_names65, r376);
            goto L0(r377);
          L3():
            dx83 = getTryDispatchBuiltinValue(dr76);
            goto L0(dx83);
          };
          r379 = dyn unique2(p42);
          return r379;
        };
        r381 = dyn paste4[, collapse](p43, ", ");
        return r381;
      };
      r383 = dyn gettextf2("duplicate row.names: %s", p44);
      return r383;
    };
    r385 = dyn stop6[, domain](p45, NA_LGL);
    check L704() else D220();
  L706():
    row_names69 = force? row_names68;
    checkMissing(row_names69);
    l45 = ld value;
    row_names__ = ldf `row.names<-`;
    check L707() else D222();
  D220():
    deopt 821 [r385];
  D222():
    deopt 827 [row_names69, l45, row_names69];
  L151(dx80):
    st value = dx80;
    goto L152(dx80);
  L633():
    dr74 = tryDispatchBuiltin.1("[", value5);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L635() else L634(dr74);
  L634(value7):
    i345 = ld i;
    check L636() else D189();
  L704():
    goto L175();
  L707():
    r387 = dyn row_names__(l45, NULL, row_names69);
    check L708() else D223();
  D189():
    deopt 712 [value7, i345];
  D223():
    deopt 829 [row_names69, r387];
  L635():
    dx79 = getTryDispatchBuiltinValue(dr74);
    goto L151(dx79);
  L636():
    i346 = force? i345;
    checkMissing(i346);
    r334 = `-`(<missing>, i346);
    __25 = ldf `[` in base;
    r335 = dyn __25(value7, r334);
    goto L151(r335);
  L708():
    st value = r387;
    goto L164();
  }
}
fun inner2099841854(current, new, i) {
  (reg current:*, reg new:*, reg i:*) -+> V { var current:*, var new:*, var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg current1:*, reg current2:V, reg c:L, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg new1:*, reg new2:V, reg as_character:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg new3:*, reg new4:V, reg c2:L, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg current3:*, reg current4:V, reg as_character1:cls, reg r10:V, reg anyDuplicated:cls, reg new5:*, reg new6:V, reg p:p(V +), reg r13:V, reg c4:L, reg current5:*, reg current6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg current7:*, reg current8:V, reg c5:V, reg c6:L, reg new7:*, reg new8:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg current9:*, reg current10:V, reg new9:*, reg new10:V, reg r22:V, reg all:cls, reg r23:V, reg c7:L, reg c8:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg c12:L, reg r25:V, reg current11:*, reg current12:V, reg r26:V, reg all1:cls, reg r27:V, reg c13:L, reg c14:V, reg c16:L, reg new11:*, reg new12:V, reg stop:cls, reg gettextf:cls, reg i1:*, reg i2:V, reg p1:p(V +), reg r31:V, reg p2:p(V +), reg r33:V |
    mkenv;
    st current = current;
    st new = new;
    st i = i;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L21() else L1();
  L18():
    current1 = ld current;
    check L20() else D0();
  L19():
    r = dyn base(<sym current>);
    goto L0(r);
  D0():
    deopt 1 [current1];
  L1():
    goto L3();
  L3():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L20():
    current2 = force? current1;
    checkMissing(current2);
    c = `is.character`(current2);
    goto L0(c);
  L21():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L2(r3):
    st new = r3;
    goto L3();
  L4(r7):
    c3 = `as.logical`(r7);
    if c3 then L30() else L5();
  L22():
    new1 = ld new;
    check L24() else D1();
  L23():
    r2 = dyn base1(<sym new>);
    goto L2(r2);
  L27():
    new3 = ld new;
    check L29() else D3();
  L28():
    r6 = dyn base2(<sym new>);
    goto L4(r6);
  D1():
    deopt 6 [new1];
  D3():
    deopt 14 [new3];
  L5():
    goto L7();
  L7():
    anyDuplicated = ldf anyDuplicated;
    check L36() else D6();
  L24():
    new2 = force? new1;
    checkMissing(new2);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(new2);
    check L25() else D2();
  L29():
    new4 = force? new3;
    checkMissing(new4);
    c2 = `is.character`(new4);
    goto L4(c2);
  L30():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  D2():
    deopt 9 [r4];
  D6():
    deopt 27 [];
  L6(r9):
    st current = r9;
    goto L7();
  L25():
    goto L2(r4);
  L31():
    current3 = ld current;
    check L33() else D4();
  L32():
    r8 = dyn base3(<sym current>);
    goto L6(r8);
  L36():
    p = prom<V +>{
      new5 = ld new;
      new6 = force? new5;
      checkMissing(new6);
      return new6;
    };
    r13 = dyn anyDuplicated(p);
    check L37() else D7();
  D4():
    deopt 19 [current3];
  D7():
    deopt 29 [r13];
  L33():
    current4 = force? current3;
    checkMissing(current4);
    as_character1 = ldf `as.character` in base;
    r10 = dyn as_character1(current4);
    check L34() else D5();
  L37():
    c4 = `as.logical`(r13);
    if c4 then L38() else L8();
  D5():
    deopt 22 [r10];
  L8():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L34():
    goto L6(r10);
  L38():
    current5 = ld current;
    check L39() else D8();
  D8():
    deopt 30 [current5];
  L10(r17):
    c6 = `as.logical`(r17);
    if c6 then L45() else L11();
  L39():
    current6 = force? current5;
    checkMissing(current6);
    popenv;
    return current6;
  L42():
    current7 = ld current;
    check L44() else D9();
  L43():
    r16 = dyn base4(<sym current>);
    goto L10(r16);
  D9():
    deopt 36 [current7];
  L11():
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  L44():
    current8 = force? current7;
    checkMissing(current8);
    c5 = `==`(current8, NULL);
    goto L10(c5);
  L45():
    new7 = ld new;
    check L46() else D10();
  D10():
    deopt 39 [new7];
  L13(r21):
    c7 = `as.logical`(r21);
    if c7 then L14(c7) else L54();
  L46():
    new8 = force? new7;
    checkMissing(new8);
    popenv;
    return new8;
  L49():
    current9 = ld current;
    check L51() else D11();
  L50():
    r20 = dyn base5(<lang `==`(current, new)>);
    goto L13(r20);
  D11():
    deopt 46 [current9];
  L14(c8):
    c16 = `as.logical`(c8);
    if c16 then L60() else L16();
  L51():
    current10 = force? current9;
    checkMissing(current10);
    new9 = ld new;
    check L52() else D12();
  L54():
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  D12():
    deopt 47 [current10, new9];
  L15(c12, r25):
    c13 = `as.logical`(r25);
    c14 = `||`(c12, c13);
    goto L14(c14);
  L16():
    stop = ldf stop;
    check L64() else D17();
  L52():
    new10 = force? new9;
    checkMissing(new10);
    r22 = `==`(current10, new10);
    all = ldf all in base;
    r23 = dyn all(r22);
    check L53() else D13();
  L55():
    current11 = ld current;
    check L57() else D14();
  L56():
    r24 = dyn base6(<lang `==`(current, "")>);
    goto L15(c7, r24);
  L60():
    new11 = ld new;
    check L61() else D16();
  D13():
    deopt 51 [r23];
  D14():
    deopt 54 [c7, current11];
  D16():
    deopt 61 [new11];
  D17():
    deopt 67 [];
  L53():
    goto L13(r23);
  L57():
    current12 = force? current11;
    checkMissing(current12);
    r26 = `==`(current12, "");
    all1 = ldf all in base;
    r27 = dyn all1(r26);
    check L58() else D15();
  L61():
    new12 = force? new11;
    checkMissing(new12);
    popenv;
    return new12;
  L64():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        i1 = ld i;
        i2 = force? i1;
        checkMissing(i2);
        return i2;
      };
      r31 = dyn gettextf("mismatch of row names in arguments of 'data.frame', item %d", p1);
      return r31;
    };
    r33 = dyn stop[, domain](p2, NA_LGL);
    check L65() else D18();
  D15():
    deopt 59 [c7, r27];
  D18():
    deopt 71 [r33];
  L58():
    goto L15(c7, r27);
  L65():
    popenv;
    return r33;
  }
}