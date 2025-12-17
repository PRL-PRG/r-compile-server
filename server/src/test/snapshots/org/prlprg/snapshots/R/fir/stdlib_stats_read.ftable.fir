fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3463660685;
    st `read.ftable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3463660685(file, sep, quote, `row.var.names`, `col.vars`, skip) {
  (reg file:*, reg sep:*, reg quote:*, reg row_var_names:*, reg col_vars:*, reg skip:*) -+> V { var file:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var `row.var.names`:*, var `col.vars`:*, var skip:*, reg skip_isMissing:L, reg skip_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg file3:cls, reg file4:*, reg file5:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg on_exit:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg file6:*, reg file7:V, reg inherits:cls, reg r10:V, reg r11:V, reg c2:L, reg stop:cls, reg r12:V, reg isSeekable:cls, reg file8:*, reg file9:V, reg p1:p(V +), reg r15:V, reg r16:V, reg c3:L, reg tempfile:cls, reg r17:V, reg cat:cls, reg readLines:cls, reg file10:*, reg file11:V, reg p2:p(V +), reg r19:V, reg p3:p(V +), reg tmpf:*, reg tmpf1:V, reg p4:p(V +), reg r22:V, reg file12:cls, reg tmpf2:*, reg tmpf3:V, reg p5:p(V +), reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg on_exit1:cls, reg r27:V, reg count_fields:cls, reg file13:*, reg file14:V, reg p6:p(V +), reg sep1:*, reg sep2:V, reg p7:p(V +), reg quote1:*, reg quote2:V, reg p8:p(V +), reg skip1:*, reg skip2:V, reg p9:p(V +), reg r33:V, reg z:*, reg z1:V, reg c4:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg z6:V, reg r35:V, reg which:cls, reg z7:*, reg z8:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg z11:V, reg r37:V, reg z12:*, reg z13:V, reg max:cls, reg r38:V, reg r39:V, reg p10:p(V +), reg r41:V, reg max1:cls, reg r42:V, reg __:cls, reg r43:V, reg z14:*, reg z15:V, reg c5:L, reg dx3:V, reg z17:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg dx10:V, reg z20:V, reg r45:V, reg z21:*, reg z22:V, reg length:cls, reg r46:V, reg __1:cls, reg r47:V, reg r48:V, reg r49:V, reg seek:cls, reg file15:*, reg file16:V, reg p11:p(V +), reg r51:V, reg skip3:*, reg skip4:V, reg r52:V, reg c6:L, reg readLines1:cls, reg file17:*, reg file18:V, reg p12:p(V +), reg skip5:*, reg skip6:V, reg p13:p(V +), reg r55:V, reg readLines2:cls, reg file19:*, reg file20:V, reg p14:p(V +), reg r58:V, reg seek1:cls, reg file21:*, reg file22:V, reg p15:p(V +), reg r60:V, reg skip7:*, reg skip8:V, reg r61:V, reg c7:L, reg readLines3:cls, reg file23:*, reg file24:V, reg p16:p(V +), reg skip9:*, reg skip10:V, reg p17:p(V +), reg r64:V, reg which1:cls, reg z23:*, reg z24:V, reg n_row_vars:*, reg n_row_vars1:V, reg r66:V, reg p18:p(V +), reg r68:V, reg i:*, reg i1:V, reg c8:L, reg i3:V, reg dr4:V, reg dc2:L, reg dx11:V, reg dx12:V, reg grep:cls, reg lines:*, reg lines1:V, reg c9:L, reg lines3:V, reg dr6:V, reg dc3:L, reg dx13:V, reg dx14:V, reg i4:*, reg i5:V, reg __2:cls, reg r69:V, reg p19:p(V +), reg r71:V, reg __3:cls, reg r72:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r73:V, reg r74:V, reg j:*, reg j1:V, reg length1:cls, reg r75:V, reg r76:V, reg c10:L, reg c12:V, reg j2:*, reg j3:V, reg r77:V, reg c13:L, reg c14:V, reg c16:L, reg j4:*, reg j5:V, reg r78:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r79:V, reg r80:V, reg n_col_vars:*, reg n_col_vars1:V, reg vector:cls, reg r81:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r82:V, reg r83:V, reg z25:*, reg z26:V, reg c17:L, reg z28:V, reg dr8:V, reg dc4:L, reg dx15:V, reg dx16:V, reg n_col_vars2:*, reg n_col_vars3:V, reg r84:V, reg __4:cls, reg r85:V, reg r86:V, reg c18:cls, reg r87:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r88:V, reg r89:V, reg n_col_vars4:*, reg n_col_vars5:V, reg seq_int:cls, reg r90:V, reg s:V, reg l:I, reg i6:I, reg i7:I, reg i8:I, reg c19:L, reg x:V, reg scan:cls, reg file25:*, reg file26:V, reg p20:p(V +), reg sep3:*, reg sep4:V, reg p21:p(V +), reg quote3:*, reg quote4:V, reg p22:p(V +), reg r94:V, reg s1:*, reg s2:V, reg c20:L, reg i12:I, reg s4:V, reg dr10:V, reg dc5:L, reg dx17:V, reg i14:I, reg dx18:V, reg __5:cls, reg r95:V, reg l1:*, reg c21:L, reg i16:I, reg dx20:V, reg l3:*, reg dr12:V, reg dc6:L, reg dx22:V, reg i18:I, reg dx24:V, reg k:*, reg k1:V, reg ____:cls, reg r96:V, reg s5:*, reg s6:V, reg c22:L, reg i20:I, reg s8:V, reg dr14:V, reg dc7:L, reg dx25:V, reg i22:I, reg dx26:V, reg __6:cls, reg r97:V, reg l4:*, reg names:cls, reg r98:V, reg c23:L, reg i24:I, reg dx28:V, reg l6:*, reg r100:V, reg dr16:V, reg dc8:L, reg dx30:V, reg i26:I, reg dx31:V, reg l8:*, reg dx32:V, reg k2:*, reg k3:V, reg ___:cls, reg r101:V, reg names__:cls, reg r102:V, reg setNames:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r103:V, reg r104:V, reg n_row_vars2:*, reg n_row_vars3:V, reg vector1:cls, reg r105:V, reg p23:p(V +), reg scan1:cls, reg file27:*, reg file28:V, reg p24:p(V +), reg sep5:*, reg sep6:V, reg p25:p(V +), reg quote5:*, reg quote6:V, reg p26:p(V +), reg r110:V, reg p27:p(V +), reg r112:V, reg z29:*, reg z30:V, reg c24:L, reg z32:V, reg dr18:V, reg dc9:L, reg dx33:V, reg dx34:V, reg n_col_vars6:*, reg n_col_vars7:V, reg r113:V, reg r114:V, reg r115:V, reg __7:cls, reg r116:V, reg z33:*, reg z34:V, reg c25:L, reg z36:V, reg dr20:V, reg dc10:L, reg dx36:V, reg dx37:V, reg __8:cls, reg r117:V, reg r118:V, reg c26:L, reg c28:V, reg z37:*, reg z38:V, reg c29:L, reg c31:L, reg z40:V, reg dr22:V, reg dc11:L, reg dx38:V, reg c33:L, reg dx39:V, reg __9:cls, reg r119:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r120:V, reg c36:L, reg dx42:V, reg r121:V, reg z41:*, reg z42:V, reg max2:cls, reg r122:V, reg r123:V, reg c37:L, reg c38:V, reg c40:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r124:V, reg r125:V, reg n_col_vars8:*, reg n_col_vars9:V, reg vector2:cls, reg r126:V, reg scan2:cls, reg file29:*, reg file30:V, reg p28:p(V +), reg sep7:*, reg sep8:V, reg p29:p(V +), reg quote7:*, reg quote8:V, reg p30:p(V +), reg r130:V, reg s9:*, reg s10:V, reg c41:L, reg s12:V, reg dr24:V, reg dc12:L, reg dx43:V, reg dx44:V, reg __10:cls, reg r131:V, reg l9:*, reg names__1:cls, reg r132:V, reg s13:*, reg s14:V, reg c42:L, reg s16:V, reg dr26:V, reg dc13:L, reg dx45:V, reg dx46:V, reg __11:cls, reg r133:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r134:V, reg r135:V, reg n_row_vars4:*, reg n_row_vars5:V, reg vector3:cls, reg r136:V, reg n_row_vars6:*, reg n_row_vars7:V, reg r137:V, reg s17:*, reg s18:V, reg c43:L, reg s20:V, reg dr28:V, reg dc14:L, reg dx47:V, reg dx48:V, reg i27:*, reg i28:V, reg __12:cls, reg r138:V, reg l10:*, reg names__2:cls, reg r139:V, reg s21:*, reg s22:V, reg c44:L, reg s24:V, reg dr30:V, reg dc15:L, reg dx49:V, reg dx50:V, reg i29:*, reg i30:V, reg r140:V, reg __13:cls, reg r141:V, reg l11:*, reg c45:L, reg dx52:V, reg l13:*, reg dr32:V, reg dc16:L, reg dx54:V, reg dx56:V, reg ____1:cls, reg r142:V, reg z43:*, reg z44:V, reg c46:L, reg z46:V, reg dr34:V, reg dc17:L, reg dx57:V, reg dx58:V, reg __14:cls, reg r143:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r144:V, reg r145:V, reg missing:cls, reg r146:V, reg c47:L, reg stop1:cls, reg r147:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r149:V, reg r150:V, reg row_var_names1:*, reg row_var_names2:V, reg length2:cls, reg r151:V, reg setNames1:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r152:V, reg r153:V, reg n_row_vars8:*, reg n_row_vars9:V, reg vector4:cls, reg r154:V, reg p31:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r156:V, reg r157:V, reg row_var_names3:*, reg row_var_names4:V, reg as_character:cls, reg r158:V, reg p32:p(V +), reg r160:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r161:V, reg r162:V, reg missing1:cls, reg r163:V, reg c48:L, reg c49:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r164:V, reg c53:L, reg r165:V, reg col_vars1:*, reg col_vars2:V, reg is_list:cls, reg r166:V, reg r167:V, reg c54:L, reg c55:V, reg c57:L, reg stop2:cls, reg r168:V, reg lapply:cls, reg col_vars3:*, reg col_vars4:V, reg p33:p(V +), reg as_character1:*, reg as_character2:V, reg p34:p(V +), reg r172:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r173:V, reg r174:V, reg col_vars5:*, reg col_vars6:V, reg length3:cls, reg r175:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r176:V, reg r177:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r178:V, reg r179:V, reg col_vars7:*, reg col_vars8:V, reg names1:cls, reg r180:V, reg c58:V, reg c59:L, reg paste0:cls, reg sym24:cls, reg base24:cls, reg guard24:L, reg r181:V, reg r182:V, reg col_vars9:*, reg col_vars10:V, reg r183:I, reg p35:p(V +), reg r185:V, reg l14:*, reg names__3:cls, reg r186:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r187:V, reg r188:V, reg col_vars11:*, reg col_vars12:V, reg names2:cls, reg r189:V, reg which2:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r190:V, reg r191:V, reg nam:*, reg nam1:V, reg nzchar:cls, reg r192:V, reg r193:V, reg p36:p(V +), reg r195:V, reg paste1:cls, reg ind:*, reg ind1:V, reg p37:p(V +), reg r197:V, reg l15:*, reg names3:cls, reg r198:V, reg c60:L, reg r201:V, reg l17:*, reg r202:V, reg dr36:V, reg dc18:L, reg dx59:V, reg r204:V, reg l19:*, reg dx60:V, reg ind2:*, reg ind3:V, reg ___1:cls, reg r205:V, reg names__4:cls, reg r206:V, reg integer:cls, reg n_row_vars10:*, reg n_row_vars11:V, reg p38:p(V +), reg r208:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r209:V, reg r210:V, reg n_row_vars12:*, reg n_row_vars13:V, reg seq_int1:cls, reg r211:V, reg s25:V, reg l20:I, reg i31:I, reg i32:I, reg i33:I, reg c61:L, reg x1:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r212:V, reg i38:I, reg r213:V, reg z47:*, reg z48:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r214:V, reg i41:I, reg z51:V, reg r215:V, reg z52:*, reg z53:V, reg max3:cls, reg r216:V, reg k4:*, reg k5:V, reg r217:V, reg r218:V, reg r219:V, reg sum:cls, reg r220:V, reg p39:*, reg p40:V, reg r221:V, reg l21:*, reg c62:L, reg i43:I, reg r223:V, reg l23:*, reg dr38:V, reg dc19:L, reg dx61:V, reg i45:I, reg dx62:V, reg k6:*, reg k7:V, reg ___2:cls, reg r226:V, reg p41:*, reg p42:V, reg n:*, reg n1:V, reg c63:L, reg i47:I, reg p44:V, reg n3:V, reg dr40:V, reg dc20:L, reg dx63:V, reg i49:I, reg p46:V, reg dx64:V, reg k8:*, reg k9:V, reg __15:cls, reg r227:V, reg r228:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r229:V, reg r230:V, reg rep:cls, reg r231:V, reg scan3:cls, reg file31:*, reg file32:V, reg p47:p(V +), reg sep9:*, reg sep10:V, reg p48:p(V +), reg quote9:*, reg quote10:V, reg p49:p(V +), reg r235:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r236:V, reg r237:V, reg s26:*, reg s27:V, reg c64:L, reg s29:V, reg dr42:V, reg dc21:L, reg dx65:V, reg dx66:V, reg is_row_lab:*, reg is_row_lab1:V, reg r238:V, reg __16:cls, reg r239:V, reg as_numeric:cls, reg r240:V, reg s30:*, reg s31:V, reg c65:L, reg s33:V, reg dr44:V, reg dc22:L, reg dx67:V, reg dx68:V, reg is_row_lab2:*, reg is_row_lab3:V, reg __17:cls, reg r241:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r242:V, reg r243:V, reg tmp:*, reg tmp1:V, reg length4:cls, reg r244:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r245:V, reg r246:V, reg n_row_vars14:*, reg n_row_vars15:V, reg seq_int2:cls, reg r247:V, reg s34:V, reg l24:I, reg i50:I, reg i51:I, reg i52:I, reg c66:L, reg x2:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r248:V, reg i57:I, reg r249:V, reg len:*, reg len1:V, reg len2:*, reg len3:V, reg n4:*, reg n5:V, reg c67:L, reg i59:I, reg len5:V, reg n7:V, reg dr46:V, reg dc23:L, reg dx69:V, reg i61:I, reg len7:V, reg dx70:V, reg k10:*, reg k11:V, reg __18:cls, reg r250:V, reg r251:V, reg seq_int3:cls, reg r252:V, reg unique:cls, reg tmp2:*, reg tmp3:V, reg c68:L, reg tmp5:V, reg dr48:V, reg dc24:L, reg dx71:V, reg dx72:V, reg i62:*, reg i63:V, reg __19:cls, reg r253:V, reg p50:p(V +), reg r255:V, reg l25:*, reg c69:L, reg i65:I, reg r257:V, reg l27:*, reg dr50:V, reg dc25:L, reg dx73:V, reg i67:I, reg dx74:V, reg k12:*, reg k13:V, reg ____2:cls, reg r260:V, reg tmp6:*, reg tmp7:V, reg c70:L, reg i69:I, reg tmp9:V, reg dr52:V, reg dc26:L, reg dx75:V, reg i71:I, reg dx76:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r261:V, reg i74:I, reg tmp12:V, reg r262:V, reg len8:*, reg len9:V, reg n8:*, reg n9:V, reg c71:L, reg i76:I, reg tmp14:V, reg len11:V, reg n11:V, reg dr54:V, reg dc27:L, reg dx77:V, reg i78:I, reg tmp16:V, reg len13:V, reg dx78:V, reg k14:*, reg k15:V, reg __20:cls, reg r263:V, reg r264:V, reg seq_int4:cls, reg r265:V, reg __21:cls, reg r266:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r267:V, reg i81:I, reg r268:V, reg tmp17:*, reg tmp18:V, reg length5:cls, reg r269:V, reg matrix:cls, reg values:*, reg values1:V, reg p51:p(V +), reg sym37:cls, reg base37:cls, reg guard37:L, reg r271:V, reg r272:V, reg lengths:cls, reg row_vars:*, reg row_vars1:V, reg p52:p(V +), reg r274:V, reg prod:cls, reg r275:V, reg p53:p(V +), reg sym38:cls, reg base38:cls, reg guard38:L, reg r277:V, reg r278:V, reg lengths1:cls, reg col_vars13:*, reg col_vars14:V, reg p54:p(V +), reg r280:V, reg prod1:cls, reg r281:V, reg p55:p(V +), reg r283:V, reg structure:cls, reg values2:*, reg values3:V, reg p56:p(V +), reg row_vars2:*, reg row_vars3:V, reg p57:p(V +), reg col_vars15:*, reg col_vars16:V, reg p58:p(V +), reg r287:V |
    mkenv;
    st file = file;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L0("") else L0(sep);
  L0(sep_orDefault):
    st sep = sep_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L1("\"") else L1(quote);
  L1(quote_orDefault):
    st quote = quote_orDefault;
    st `row.var.names` = row_var_names;
    st `col.vars` = col_vars;
    skip_isMissing = missing.0(skip);
    if skip_isMissing then L2(0.0) else L2(skip);
  L2(skip_orDefault):
    st skip = skip_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L87() else L88();
  L3(r1):
    c1 = `as.logical`(r1);
    if c1 then L90() else L4();
  L87():
    file1 = ld file;
    check L89() else D0();
  L88():
    r = dyn base(<sym file>);
    goto L3(r);
  D0():
    deopt 1 [file1];
  L4():
    goto L6();
  L6():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L96() else L97();
  L89():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L3(c);
  L90():
    file3 = ldf file;
    check L91() else D1();
  D1():
    deopt 5 [];
  L7(r9):
    r11 = `!`(r9);
    c2 = `as.logical`(r11);
    if c2 then L100() else L8();
  L91():
    p = prom<V +>{
      file4 = ld file;
      file5 = force? file4;
      checkMissing(file5);
      return file5;
    };
    r3 = dyn file3(p, "r");
    check L92() else D2();
  L96():
    file6 = ld file;
    check L98() else D3();
  L97():
    r8 = dyn base2(<sym file>, "connection");
    goto L7(r8);
  D2():
    deopt 8 [r3];
  D3():
    deopt 17 [file6];
  L8():
    goto L9();
  L9():
    isSeekable = ldf isSeekable;
    check L104() else D7();
  L92():
    st file = r3;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L93() else L94();
  L98():
    file7 = force? file6;
    checkMissing(file7);
    inherits = ldf inherits in base;
    r10 = dyn inherits(file7, "connection", FALSE);
    check L99() else D4();
  L100():
    stop = ldf stop;
    check L101() else D5();
  D4():
    deopt 22 [r10];
  D5():
    deopt 25 [];
  D7():
    deopt 31 [];
  L5(r5):
    goto L6();
  L93():
    on_exit = ldf `on.exit` in base;
    r6 = dyn on_exit(<lang close(file)>);
    goto L5(r6);
  L94():
    r4 = dyn base1(<lang close(file)>);
    goto L5(r4);
  L99():
    goto L7(r10);
  L101():
    r12 = dyn stop("'file' must be a character string or connection");
    check L102() else D6();
  L104():
    p1 = prom<V +>{
      file8 = ld file;
      file9 = force? file8;
      checkMissing(file9);
      return file9;
    };
    r15 = dyn isSeekable(p1);
    check L105() else D8();
  D6():
    deopt 27 [r12];
  D8():
    deopt 33 [r15];
  L102():
    goto L9();
  L105():
    r16 = `!`(r15);
    c3 = `as.logical`(r16);
    if c3 then L106() else L10();
  L10():
    goto L12();
  L12():
    count_fields = ldf `count.fields`;
    check L116() else D15();
  L106():
    tempfile = ldf tempfile;
    check L107() else D9();
  D9():
    deopt 36 [];
  D15():
    deopt 59 [];
  L107():
    r17 = dyn tempfile();
    check L108() else D10();
  L116():
    p6 = prom<V +>{
      file13 = ld file;
      file14 = force? file13;
      checkMissing(file14);
      return file14;
    };
    p7 = prom<V +>{
      sep1 = ld sep;
      sep2 = force? sep1;
      checkMissing(sep2);
      return sep2;
    };
    p8 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    p9 = prom<V +>{
      skip1 = ld skip;
      skip2 = force? skip1;
      checkMissing(skip2);
      return skip2;
    };
    r33 = dyn count_fields(p6, p7, p8, p9);
    check L117() else D16();
  D10():
    deopt 37 [r17];
  D16():
    deopt 64 [r33];
  L108():
    st tmpf = r17;
    cat = ldf cat;
    check L109() else D11();
  L117():
    st z = r33;
    z = ld z;
    check L118() else D17();
  D11():
    deopt 40 [];
  D17():
    deopt 66 [z];
  L109():
    p3 = prom<V +>{
      readLines = ldf readLines;
      p2 = prom<V +>{
        file10 = ld file;
        file11 = force? file10;
        checkMissing(file11);
        return file11;
      };
      r19 = dyn readLines(p2);
      return r19;
    };
    p4 = prom<V +>{
      tmpf = ld tmpf;
      tmpf1 = force? tmpf;
      checkMissing(tmpf1);
      return tmpf1;
    };
    r22 = dyn cat[, file, sep](p3, p4, "\n");
    check L110() else D12();
  L118():
    z1 = force? z;
    checkMissing(z1);
    c4 = `is.object`(z1);
    if c4 then L119() else L120(z1);
  D12():
    deopt 46 [r22];
  L13(dx1):
    z14 = ld z;
    check L127() else D21();
  L110():
    file12 = ldf file;
    check L111() else D13();
  L119():
    dr = tryDispatchBuiltin.1("[", z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L121() else L120(dr);
  L120(z3):
    sym4 = ldf max;
    base4 = ldf max in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L122() else L123();
  D13():
    deopt 48 [];
  D21():
    deopt 76 [dx1, z14];
  L14(z6, r35):
    __ = ldf `[` in base;
    r43 = dyn __(z6, r35);
    goto L13(r43);
  L111():
    p5 = prom<V +>{
      tmpf2 = ld tmpf;
      tmpf3 = force? tmpf2;
      checkMissing(tmpf3);
      return tmpf3;
    };
    r24 = dyn file12(p5, "r");
    check L112() else D14();
  L121():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L122():
    which = ldf which;
    check L124() else D18();
  L123():
    r34 = dyn base4(<lang which(`==`(z, max(z)))>);
    goto L14(z3, r34);
  L127():
    z15 = force? z14;
    checkMissing(z15);
    c5 = `is.object`(z15);
    if c5 then L128() else L129(dx1, z15);
  D14():
    deopt 51 [r24];
  D18():
    deopt 71 [z3];
  L15(dx6, dx7):
    r48 = `-`(dx6, dx7);
    r49 = `+`(r48, 1.0);
    st `n.row.vars` = r49;
    seek = ldf seek;
    check L135() else D24();
  L112():
    st file = r24;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L113() else L114();
  L124():
    p10 = prom<V +>{
      z7 = ld z;
      z8 = force? z7;
      checkMissing(z8);
      sym5 = ldf max;
      base5 = ldf max in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(z11, r37):
      r39 = `==`(z11, r37);
      return r39;
    L1():
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      max = ldf max in base;
      r38 = dyn max(z13);
      goto L0(z8, r38);
    L2():
      r36 = dyn base5(<sym z>);
      goto L0(z8, r36);
    };
    r41 = dyn which(p10);
    check L125() else D19();
  L128():
    dr2 = tryDispatchBuiltin.1("[", z15);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L130() else L129(dx1, dr2);
  L129(dx3, z17):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L131() else L132();
  D19():
    deopt 73 [z3, r41];
  D24():
    deopt 90 [];
  L11(r26):
    goto L12();
  L16(dx10, z20, r45):
    __1 = ldf `[` in base;
    r47 = dyn __1(z20, r45);
    goto L15(dx10, r47);
  L113():
    on_exit1 = ldf `on.exit` in base;
    r27 = dyn on_exit1(<lang {
      close(file);
      unlink(tmpf)
    }>, TRUE);
    goto L11(r27);
  L114():
    r25 = dyn base3[, add](<lang {
      close(file);
      unlink(tmpf)
    }>, TRUE);
    goto L11(r25);
  L125():
    max1 = ldf max in base;
    r42 = dyn max1(r41);
    check L126() else D20();
  L130():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx1, dx5);
  L131():
    z21 = ld z;
    check L133() else D22();
  L132():
    r44 = dyn base6(<sym z>);
    goto L16(dx3, z17, r44);
  L135():
    p11 = prom<V +>{
      file15 = ld file;
      file16 = force? file15;
      checkMissing(file16);
      return file16;
    };
    r51 = dyn seek[, where](p11, 0.0);
    check L136() else D25();
  D20():
    deopt 75 [z3, r42];
  D22():
    deopt 80 [dx3, z17, z21];
  D25():
    deopt 94 [r51];
  L126():
    goto L14(z3, r42);
  L133():
    z22 = force? z21;
    checkMissing(z22);
    length = ldf length in base;
    r46 = dyn length(z22);
    check L134() else D23();
  L136():
    skip3 = ld skip;
    check L137() else D26();
  D23():
    deopt 83 [dx3, z17, r46];
  D26():
    deopt 95 [skip3];
  L134():
    goto L16(dx3, z17, r46);
  L137():
    skip4 = force? skip3;
    checkMissing(skip4);
    r52 = `>`(skip4, 0.0);
    c6 = `as.logical`(r52);
    if c6 then L138() else L17();
  L17():
    goto L18();
  L18():
    readLines2 = ldf readLines;
    check L142() else D29();
  L138():
    readLines1 = ldf readLines;
    check L139() else D27();
  D27():
    deopt 100 [];
  D29():
    deopt 107 [];
  L139():
    p12 = prom<V +>{
      file17 = ld file;
      file18 = force? file17;
      checkMissing(file18);
      return file18;
    };
    p13 = prom<V +>{
      skip5 = ld skip;
      skip6 = force? skip5;
      checkMissing(skip6);
      return skip6;
    };
    r55 = dyn readLines1(p12, p13);
    check L140() else D28();
  L142():
    p14 = prom<V +>{
      file19 = ld file;
      file20 = force? file19;
      checkMissing(file20);
      return file20;
    };
    r58 = dyn readLines2(p14);
    check L143() else D30();
  D28():
    deopt 103 [r55];
  D30():
    deopt 109 [r58];
  L140():
    goto L18();
  L143():
    st lines = r58;
    seek1 = ldf seek;
    check L144() else D31();
  D31():
    deopt 112 [];
  L144():
    p15 = prom<V +>{
      file21 = ld file;
      file22 = force? file21;
      checkMissing(file22);
      return file22;
    };
    r60 = dyn seek1[, where](p15, 0.0);
    check L145() else D32();
  D32():
    deopt 116 [r60];
  L145():
    skip7 = ld skip;
    check L146() else D33();
  D33():
    deopt 117 [skip7];
  L146():
    skip8 = force? skip7;
    checkMissing(skip8);
    r61 = `>`(skip8, 0.0);
    c7 = `as.logical`(r61);
    if c7 then L147() else L19();
  L19():
    goto L20();
  L20():
    which1 = ldf which;
    check L151() else D36();
  L147():
    readLines3 = ldf readLines;
    check L148() else D34();
  D34():
    deopt 122 [];
  D36():
    deopt 129 [];
  L148():
    p16 = prom<V +>{
      file23 = ld file;
      file24 = force? file23;
      checkMissing(file24);
      return file24;
    };
    p17 = prom<V +>{
      skip9 = ld skip;
      skip10 = force? skip9;
      checkMissing(skip10);
      return skip10;
    };
    r64 = dyn readLines3(p16, p17);
    check L149() else D35();
  L151():
    p18 = prom<V +>{
      z23 = ld z;
      z24 = force? z23;
      checkMissing(z24);
      n_row_vars = ld `n.row.vars`;
      n_row_vars1 = force? n_row_vars;
      checkMissing(n_row_vars1);
      r66 = `==`(z24, n_row_vars1);
      return r66;
    };
    r68 = dyn which1(p18);
    check L152() else D37();
  D35():
    deopt 125 [r64];
  D37():
    deopt 131 [r68];
  L149():
    goto L20();
  L152():
    st i = r68;
    i = ld i;
    check L153() else D38();
  D38():
    deopt 133 [i];
  L153():
    i1 = force? i;
    checkMissing(i1);
    c8 = `is.object`(i1);
    if c8 then L154() else L155(i1);
  L21(dx12):
    st j = dx12;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L159() else L160();
  L154():
    dr4 = tryDispatchBuiltin.1("[", i1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L156() else L155(dr4);
  L155(i3):
    grep = ldf grep;
    check L157() else D39();
  D39():
    deopt 136 [i3];
  L22(r74):
    r76 = `==`(r74, 1);
    c10 = `as.logical`(r76);
    if c10 then L163() else L23(c10);
  L156():
    dx11 = getTryDispatchBuiltinValue(dr4);
    goto L21(dx11);
  L157():
    p19 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      c9 = `is.object`(lines1);
      if c9 then L1() else L2(lines1);
    L0(dx14):
      return dx14;
    L1():
      dr6 = tryDispatchBuiltin.1("[", lines1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(lines3):
      i4 = ld i;
      i5 = force? i4;
      __2 = ldf `[` in base;
      r69 = dyn __2(lines3, i5);
      goto L0(r69);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx13);
    };
    r71 = dyn grep("^[^[:space:]]", p19);
    check L158() else D40();
  L159():
    j = ld j;
    check L161() else D41();
  L160():
    r73 = dyn base7(<sym j>);
    goto L22(r73);
  D40():
    deopt 139 [i3, r71];
  D41():
    deopt 144 [j];
  L23(c12):
    c16 = `as.logical`(c12);
    if c16 then L166() else L24();
  L158():
    __3 = ldf `[` in base;
    r72 = dyn __3(i3, r71);
    goto L21(r72);
  L161():
    j1 = force? j;
    checkMissing(j1);
    length1 = ldf length in base;
    r75 = dyn length1(j1);
    check L162() else D42();
  L163():
    j2 = ld j;
    check L164() else D43();
  D42():
    deopt 147 [r75];
  D43():
    deopt 150 [c10, j2];
  L24():
    z33 = ld z;
    check L215() else D66();
  L36():
    st p = 1.0;
    integer = ldf integer;
    check L329() else D119();
  L162():
    goto L22(r75);
  L164():
    j3 = force? j2;
    checkMissing(j3);
    r77 = `>`(j3, 1.0);
    c13 = `as.logical`(r77);
    c14 = `&&`(c10, c13);
    goto L23(c14);
  L166():
    j4 = ld j;
    check L167() else D44();
  D44():
    deopt 155 [j4];
  D66():
    deopt 254 [z33];
  D119():
    deopt 458 [];
  L167():
    j5 = force? j4;
    checkMissing(j5);
    r78 = `-`(j5, 1.0);
    st `n.col.vars` = r78;
    sym8 = ldf vector;
    base8 = ldf vector in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L168() else L169();
  L215():
    z34 = force? z33;
    checkMissing(z34);
    c25 = `is.object`(z34);
    if c25 then L216() else L217(z34);
  L329():
    p38 = prom<V +>{
      n_row_vars10 = ld `n.row.vars`;
      n_row_vars11 = force? n_row_vars10;
      checkMissing(n_row_vars11);
      return n_row_vars11;
    };
    r208 = dyn integer(p38);
    check L330() else D120();
  D120():
    deopt 460 [r208];
  L25(r80):
    st `col.vars` = r80;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L172() else L173();
  L37(dx37):
    r118 = `==`(dx37, 1.0);
    c26 = `as.logical`(r118);
    if c26 then L219() else L38(c26);
  L168():
    n_col_vars = ld `n.col.vars`;
    check L170() else D45();
  L169():
    r79 = dyn base8[, length]("list", <sym n.col.vars>);
    goto L25(r79);
  L216():
    dr20 = tryDispatchBuiltin.1("[", z34);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L218() else L217(dr20);
  L217(z36):
    __8 = ldf `[` in base;
    r117 = dyn __8(z36, 1);
    goto L37(r117);
  L330():
    st n = r208;
    sym27 = ldf `seq.int`;
    base27 = ldf `seq.int` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L331() else L332();
  D45():
    deopt 163 [n_col_vars];
  L26(r83):
    st n = r83;
    sym10 = ldf `seq.int`;
    base10 = ldf `seq.int` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L180() else L181();
  L38(c28):
    c40 = `as.logical`(c28);
    if c40 then L229() else L41();
  L65(r210):
    s25 = toForSeq(r210);
    l20 = length(s25);
    i31 = 0;
    goto L66(i31);
  L170():
    n_col_vars1 = force? n_col_vars;
    checkMissing(n_col_vars1);
    vector = ldf vector in base;
    r81 = dyn vector("list", n_col_vars1);
    check L171() else D46();
  L172():
    z25 = ld z;
    check L174() else D47();
  L173():
    r82 = dyn base9(1.0, <lang `-`(`[`(z, `:`(1.0, n.col.vars)), 1.0)>);
    goto L26(r82);
  L218():
    dx36 = getTryDispatchBuiltinValue(dr20);
    goto L37(dx36);
  L219():
    z37 = ld z;
    check L220() else D67();
  L331():
    n_row_vars12 = ld `n.row.vars`;
    check L333() else D121();
  L332():
    r209 = dyn base27[from, to](1.0, <sym n.row.vars>);
    goto L65(r209);
  D46():
    deopt 166 [r81];
  D47():
    deopt 171 [z25];
  D67():
    deopt 261 [c26, z37];
  D121():
    deopt 466 [n_row_vars12];
  L28(r89):
    s = toForSeq(r89);
    l = length(s);
    i6 = 0;
    goto L29(i6);
  L41():
    sym15 = ldf missing;
    base15 = ldf missing in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L271() else L272();
  L66(i32):
    i33 = `+`.1(i32, 1);
    c61 = `<`.1(l20, i33);
    if c61 then L335() else L71();
  L171():
    goto L25(r81);
  L174():
    z26 = force? z25;
    checkMissing(z26);
    c17 = `is.object`(z26);
    if c17 then L175() else L176(z26);
  L180():
    n_col_vars4 = ld `n.col.vars`;
    check L182() else D50();
  L181():
    r88 = dyn base10[from, to](1.0, <sym n.col.vars>);
    goto L28(r88);
  L220():
    z38 = force? z37;
    checkMissing(z38);
    c29 = `is.object`(z38);
    if c29 then L221() else L222(c26, z38);
  L229():
    st `n.col.vars` = 1.0;
    sym13 = ldf vector;
    base13 = ldf vector in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L230() else L231();
  L333():
    n_row_vars13 = force? n_row_vars12;
    checkMissing(n_row_vars13);
    seq_int1 = ldf `seq.int` in base;
    r211 = dyn seq_int1(1.0, n_row_vars13);
    check L334() else D122();
  D50():
    deopt 187 [n_col_vars4];
  D122():
    deopt 470 [r211];
  L27(dx16):
    r86 = `-`(dx16, 1.0);
    c18 = ldf c in base;
    r87 = dyn c18(1.0, r86);
    check L179() else D49();
  L29(i7):
    i8 = `+`.1(i7, 1);
    c19 = `<`.1(l, i8);
    if c19 then L184() else L34();
  L39(c33, dx39):
    sym12 = ldf max;
    base12 = ldf max in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L224() else L225();
  L42(r125):
    st `col.vars` = r125;
    scan2 = ldf scan;
    check L234() else D72();
  L50(r145):
    c47 = `as.logical`(r145);
    if c47 then L273() else L51();
  L71():
    x1 = `[[`(s25, i33, NULL, TRUE);
    st k = x1;
    sym28 = ldf sum;
    base28 = ldf sum in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L336() else L337();
  L175():
    dr8 = tryDispatchBuiltin.1("[", z26);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L177() else L176(dr8);
  L176(z28):
    n_col_vars2 = ld `n.col.vars`;
    check L178() else D48();
  L182():
    n_col_vars5 = force? n_col_vars4;
    checkMissing(n_col_vars5);
    seq_int = ldf `seq.int` in base;
    r90 = dyn seq_int(1.0, n_col_vars5);
    check L183() else D51();
  L221():
    dr22 = tryDispatchBuiltin.1("[", z38);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L223() else L222(c26, dr22);
  L222(c31, z40):
    __9 = ldf `[` in base;
    r119 = dyn __9(z40, 2);
    goto L39(c31, r119);
  L230():
    n_col_vars8 = ld `n.col.vars`;
    check L232() else D70();
  L231():
    r124 = dyn base13[, length]("list", <sym n.col.vars>);
    goto L42(r124);
  L271():
    missing = ldf missing in base;
    r146 = dyn missing(<sym row.var.names>);
    goto L50(r146);
  L272():
    r144 = dyn base15(<sym row.var.names>);
    goto L50(r144);
  L334():
    goto L65(r211);
  L335():
    sym30 = ldf rep;
    base30 = ldf rep in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L356() else L357();
  D48():
    deopt 174 [z28, 1.0, n_col_vars2];
  D49():
    deopt 181 [r87];
  D51():
    deopt 191 [r90];
  D70():
    deopt 279 [n_col_vars8];
  D72():
    deopt 285 [];
  L34():
    x = `[[`(s, i8, NULL, TRUE);
    st k = x;
    scan = ldf scan;
    check L185() else D52();
  L40(c36, dx42, r121):
    r123 = `==`(dx42, r121);
    c37 = `as.logical`(r123);
    c38 = `&&`(c36, c37);
    goto L38(c38);
  L51():
    goto L52();
  L52():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L277() else L278();
  L67(i38, r213):
    p39 = ld p;
    check L345() else D128();
  L72(r230):
    st `is.row.lab` = r230;
    scan3 = ldf scan;
    check L358() else D133();
  L177():
    dx15 = getTryDispatchBuiltinValue(dr8);
    goto L27(dx15);
  L178():
    n_col_vars3 = force? n_col_vars2;
    checkMissing(n_col_vars3);
    r84 = `:`(1.0, n_col_vars3);
    __4 = ldf `[` in base;
    r85 = dyn __4(z28, r84);
    goto L27(r85);
  L179():
    goto L26(r87);
  L183():
    goto L28(r90);
  L184():
    setNames = ldf setNames;
    check L207() else D62();
  L223():
    dx38 = getTryDispatchBuiltinValue(dr22);
    goto L39(c26, dx38);
  L224():
    z41 = ld z;
    check L226() else D68();
  L225():
    r120 = dyn base12(<sym z>);
    goto L40(c33, dx39, r120);
  L232():
    n_col_vars9 = force? n_col_vars8;
    checkMissing(n_col_vars9);
    vector2 = ldf vector in base;
    r126 = dyn vector2("list", n_col_vars9);
    check L233() else D71();
  L234():
    p28 = prom<V +>{
      file29 = ld file;
      file30 = force? file29;
      checkMissing(file30);
      return file30;
    };
    p29 = prom<V +>{
      sep7 = ld sep;
      sep8 = force? sep7;
      checkMissing(sep8);
      return sep8;
    };
    p30 = prom<V +>{
      quote7 = ld quote;
      quote8 = force? quote7;
      checkMissing(quote8);
      return quote8;
    };
    r130 = dyn scan2[, what, sep, quote, nlines, quiet](p28, "", p29, p30, 2.0, TRUE);
    check L235() else D73();
  L273():
    stop1 = ldf stop;
    check L274() else D88();
  L336():
    z47 = ld z;
    check L338() else D123();
  L337():
    r212 = dyn base28(<lang `>=`(z, `+`(`-`(max(z), k), 1.0))>);
    goto L67(i33, r212);
  L356():
    rep = ldf rep in base;
    r231 = dyn rep(<lang rep(c(TRUE, FALSE), length(z))>, <lang c(rbind(`+`(`-`(z, min(z)), 1.0), `-`(min(z), 1.0)))>);
    goto L72(r231);
  L357():
    r229 = dyn base30(<lang rep(c(TRUE, FALSE), length(z))>, <lang c(rbind(`+`(`-`(z, min(z)), 1.0), `-`(min(z), 1.0)))>);
    goto L72(r229);
  D52():
    deopt 193 [i8];
  D62():
    deopt 238 [];
  D68():
    deopt 267 [c33, dx39, z41];
  D71():
    deopt 282 [r126];
  D73():
    deopt 297 [r130];
  D88():
    deopt 359 [];
  D123():
    deopt 473 [i33, z47];
  D128():
    deopt 486 [i38, r213, p39];
  D133():
    deopt 510 [];
  L53(r150):
    st `n.row.vars` = r150;
    setNames1 = ldf setNames;
    check L281() else D92();
  L185():
    p20 = prom<V +>{
      file25 = ld file;
      file26 = force? file25;
      checkMissing(file26);
      return file26;
    };
    p21 = prom<V +>{
      sep3 = ld sep;
      sep4 = force? sep3;
      checkMissing(sep4);
      return sep4;
    };
    p22 = prom<V +>{
      quote3 = ld quote;
      quote4 = force? quote3;
      checkMissing(quote4);
      return quote4;
    };
    r94 = dyn scan[, what, sep, quote, nlines, quiet](p20, "", p21, p22, 1.0, TRUE);
    check L186() else D53();
  L207():
    p23 = prom<V +>{
      sym11 = ldf vector;
      base11 = ldf vector in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r104):
      return r104;
    L1():
      n_row_vars2 = ld `n.row.vars`;
      n_row_vars3 = force? n_row_vars2;
      checkMissing(n_row_vars3);
      vector1 = ldf vector in base;
      r105 = dyn vector1("list", n_row_vars3);
      goto L0(r105);
    L2():
      r103 = dyn base11[, length]("list", <sym n.row.vars>);
      goto L0(r103);
    };
    p27 = prom<V +>{
      scan1 = ldf scan;
      p24 = prom<V +>{
        file27 = ld file;
        file28 = force? file27;
        checkMissing(file28);
        return file28;
      };
      p25 = prom<V +>{
        sep5 = ld sep;
        sep6 = force? sep5;
        checkMissing(sep6);
        return sep6;
      };
      p26 = prom<V +>{
        quote5 = ld quote;
        quote6 = force? quote5;
        checkMissing(quote6);
        return quote6;
      };
      r110 = dyn scan1[, what, sep, quote, nlines, quiet](p24, "", p25, p26, 1.0, TRUE);
      return r110;
    };
    r112 = dyn setNames(p23, p27);
    check L208() else D63();
  L226():
    z42 = force? z41;
    checkMissing(z42);
    max2 = ldf max in base;
    r122 = dyn max2(z42);
    check L227() else D69();
  L233():
    goto L42(r126);
  L235():
    st s = r130;
    s9 = ld s;
    check L236() else D74();
  L274():
    r147 = dyn stop1("'row.var.names' missing");
    check L275() else D89();
  L277():
    row_var_names1 = ld `row.var.names`;
    check L279() else D90();
  L278():
    r149 = dyn base16(<sym row.var.names>);
    goto L53(r149);
  L338():
    z48 = force? z47;
    checkMissing(z48);
    sym29 = ldf max;
    base29 = ldf max in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L339() else L340();
  L345():
    p40 = force? p39;
    checkMissing(p40);
    r221 = `/`(r213, p40);
    l21 = ld n;
    c62 = `is.object`(l21);
    if c62 then L346() else L347(i38, r221, l21);
  L358():
    p47 = prom<V +>{
      file31 = ld file;
      file32 = force? file31;
      checkMissing(file32);
      return file32;
    };
    p48 = prom<V +>{
      sep9 = ld sep;
      sep10 = force? sep9;
      checkMissing(sep10);
      return sep10;
    };
    p49 = prom<V +>{
      quote9 = ld quote;
      quote10 = force? quote9;
      checkMissing(quote10);
      return quote10;
    };
    r235 = dyn scan3[, what, sep, quote, quiet](p47, "", p48, p49, TRUE);
    check L359() else D134();
  D53():
    deopt 205 [i8, r94];
  D63():
    deopt 241 [r112];
  D69():
    deopt 270 [c33, dx39, r122];
  D74():
    deopt 299 [s9];
  D89():
    deopt 361 [r147];
  D90():
    deopt 366 [row_var_names1];
  D92():
    deopt 372 [];
  D134():
    deopt 520 [r235];
  L68(i41, z51, r215):
    k4 = ld k;
    check L343() else D126();
  L69(i45, dx62):
    st n = dx62;
    p41 = ld p;
    check L350() else D130();
  L186():
    st s = r94;
    s1 = ld s;
    check L187() else D54();
  L208():
    st `row.vars` = r112;
    z29 = ld z;
    check L209() else D64();
  L227():
    goto L40(c33, dx39, r122);
  L236():
    s10 = force? s9;
    checkMissing(s10);
    c41 = `is.object`(s10);
    if c41 then L237() else L238(s10);
  L275():
    goto L52();
  L279():
    row_var_names2 = force? row_var_names1;
    checkMissing(row_var_names2);
    length2 = ldf length in base;
    r151 = dyn length2(row_var_names2);
    check L280() else D91();
  L281():
    p31 = prom<V +>{
      sym17 = ldf vector;
      base17 = ldf vector in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r153):
      return r153;
    L1():
      n_row_vars8 = ld `n.row.vars`;
      n_row_vars9 = force? n_row_vars8;
      checkMissing(n_row_vars9);
      vector4 = ldf vector in base;
      r154 = dyn vector4("list", n_row_vars9);
      goto L0(r154);
    L2():
      r152 = dyn base17[, length]("list", <sym n.row.vars>);
      goto L0(r152);
    };
    p32 = prom<V +>{
      sym18 = ldf `as.character`;
      base18 = ldf `as.character` in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r157):
      return r157;
    L1():
      row_var_names3 = ld `row.var.names`;
      row_var_names4 = force? row_var_names3;
      checkMissing(row_var_names4);
      as_character = ldf `as.character` in base;
      r158 = dyn as_character(row_var_names4);
      goto L0(r158);
    L2():
      r156 = dyn base18(<sym row.var.names>);
      goto L0(r156);
    };
    r160 = dyn setNames1(p31, p32);
    check L282() else D93();
  L339():
    z52 = ld z;
    check L341() else D124();
  L340():
    r214 = dyn base29(<sym z>);
    goto L68(i33, z48, r214);
  L346():
    dr38 = tryDispatchBuiltin.0("[<-", l21, r221);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L348() else L347(i38, r221, dr38);
  L347(i43, r223, l23):
    k6 = ld k;
    check L349() else D129();
  L359():
    st s = r235;
    sym31 = ldf `as.numeric`;
    base31 = ldf `as.numeric` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L360() else L361();
  D54():
    deopt 207 [i8, s1];
  D64():
    deopt 243 [z29];
  D91():
    deopt 369 [r151];
  D93():
    deopt 375 [r160];
  D124():
    deopt 476 [i33, z48, z52];
  D126():
    deopt 479 [i41, z51, r215, k4];
  D129():
    deopt 490 [i43, r223, l23, r221, k6];
  D130():
    deopt 494 [i45, p41];
  L43(dx44):
    l9 = ld `col.vars`;
    names__1 = ldf `names<-`;
    check L240() else D75();
  L73(r237):
    st values = r237;
    s30 = ld s;
    check L368() else D138();
  L187():
    s2 = force? s1;
    checkMissing(s2);
    c20 = `is.object`(s2);
    if c20 then L188() else L189(i8, s2);
  L209():
    z30 = force? z29;
    checkMissing(z30);
    c24 = `is.object`(z30);
    if c24 then L210() else L211(z30);
  L237():
    dr24 = tryDispatchBuiltin.1("[", s10);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L239() else L238(dr24);
  L238(s12):
    __10 = ldf `[` in base;
    r131 = dyn __10(s12, 1);
    goto L43(r131);
  L280():
    goto L53(r151);
  L282():
    st `row.vars` = r160;
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L283() else L284();
  L341():
    z53 = force? z52;
    checkMissing(z53);
    max3 = ldf max in base;
    r216 = dyn max3(z53);
    check L342() else D125();
  L343():
    k5 = force? k4;
    checkMissing(k5);
    r217 = `-`(r215, k5);
    r218 = `+`(r217, 1.0);
    r219 = `>=`(z51, r218);
    sum = ldf sum in base;
    r220 = dyn sum(r219);
    check L344() else D127();
  L348():
    dx61 = getTryDispatchBuiltinValue(dr38);
    goto L69(i38, dx61);
  L349():
    k7 = force? k6;
    ___2 = ldf `[<-` in base;
    r226 = dyn ___2(l23, r221, k7);
    goto L69(i43, r226);
  L350():
    p42 = force? p41;
    checkMissing(p42);
    n = ld n;
    check L351() else D131();
  L360():
    s26 = ld s;
    check L362() else D135();
  L361():
    r236 = dyn base31(<lang `[`(s, `!`(is.row.lab))>);
    goto L73(r236);
  D75():
    deopt 305 [dx44, l9, dx44];
  D125():
    deopt 479 [i33, z48, r216];
  D127():
    deopt 486 [i41, r220];
  D131():
    deopt 495 [i45, p42, n];
  D135():
    deopt 524 [s26];
  D138():
    deopt 533 [s30];
  L30(i14, dx18):
    l1 = ld `col.vars`;
    c21 = `is.object`(l1);
    if c21 then L191() else L192(i14, dx18, l1);
  L35(dx34):
    st z = dx34;
    goto L36();
  L54(r162):
    c48 = `as.logical`(r162);
    if c48 then L55(c48) else L285();
  L188():
    dr10 = tryDispatchBuiltin.1("[", s2);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L190() else L189(i8, dr10);
  L189(i12, s4):
    __5 = ldf `[` in base;
    r95 = dyn __5(s4, -1);
    goto L30(i12, r95);
  L210():
    dr18 = tryDispatchBuiltin.1("[", z30);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L212() else L211(dr18);
  L211(z32):
    n_col_vars6 = ld `n.col.vars`;
    check L213() else D65();
  L239():
    dx43 = getTryDispatchBuiltinValue(dr24);
    goto L43(dx43);
  L240():
    r132 = dyn names__1(l9, NULL, dx44);
    check L241() else D76();
  L283():
    missing1 = ldf missing in base;
    r163 = dyn missing1(<sym col.vars>);
    goto L54(r163);
  L284():
    r161 = dyn base19(<sym col.vars>);
    goto L54(r161);
  L342():
    goto L68(i33, z48, r216);
  L344():
    goto L67(i41, r220);
  L351():
    n1 = force? n;
    checkMissing(n1);
    c63 = `is.object`(n1);
    if c63 then L352() else L353(i45, p42, n1);
  L362():
    s27 = force? s26;
    checkMissing(s27);
    c64 = `is.object`(s27);
    if c64 then L363() else L364(s27);
  L368():
    s31 = force? s30;
    checkMissing(s31);
    c65 = `is.object`(s31);
    if c65 then L369() else L370(s31);
  D65():
    deopt 246 [z32, 1.0, n_col_vars6];
  D76():
    deopt 307 [dx44, r132];
  L31(i18, dx24):
    st `col.vars` = dx24;
    s5 = ld s;
    check L195() else D56();
  L55(c49):
    c57 = `as.logical`(c49);
    if c57 then L291() else L57();
  L70(i49, p46, dx64):
    r228 = `*`(p46, dx64);
    st p = r228;
    goto L66(i49);
  L74(dx66):
    as_numeric = ldf `as.numeric` in base;
    r240 = dyn as_numeric(dx66);
    check L367() else D137();
  L75(dx68):
    st tmp = dx68;
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L373() else L374();
  L190():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L30(i8, dx17);
  L191():
    dr12 = tryDispatchBuiltin.0("[[<-", l1, dx18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L193() else L192(i14, dx18, dr12);
  L192(i16, dx20, l3):
    k = ld k;
    check L194() else D55();
  L212():
    dx33 = getTryDispatchBuiltinValue(dr18);
    goto L35(dx33);
  L213():
    n_col_vars7 = force? n_col_vars6;
    checkMissing(n_col_vars7);
    r113 = `+`(n_col_vars7, 1.0);
    r114 = `:`(1.0, r113);
    r115 = `-`(<missing>, r114);
    __7 = ldf `[` in base;
    r116 = dyn __7(z32, r115);
    goto L35(r116);
  L241():
    st `col.vars` = r132;
    s13 = ld s;
    check L242() else D77();
  L285():
    sym20 = ldf `is.list`;
    base20 = ldf `is.list` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L286() else L287();
  L352():
    dr40 = tryDispatchBuiltin.1("[", n1);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L354() else L353(i45, p42, dr40);
  L353(i47, p44, n3):
    k8 = ld k;
    check L355() else D132();
  L363():
    dr42 = tryDispatchBuiltin.1("[", s27);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L365() else L364(dr42);
  L364(s29):
    is_row_lab = ld `is.row.lab`;
    check L366() else D136();
  L369():
    dr44 = tryDispatchBuiltin.1("[", s31);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L371() else L370(dr44);
  L370(s33):
    is_row_lab2 = ld `is.row.lab`;
    check L372() else D139();
  D55():
    deopt 213 [i16, dx20, l3, dx18, k];
  D56():
    deopt 217 [i18, s5];
  D77():
    deopt 309 [s13];
  D132():
    deopt 497 [i47, p44, n3, k8];
  D136():
    deopt 526 [s29, is_row_lab];
  D137():
    deopt 531 [r240];
  D139():
    deopt 535 [s33, is_row_lab2];
  L56(c53, r165):
    r167 = `!`(r165);
    c54 = `as.logical`(r167);
    c55 = `||`(c53, c54);
    goto L55(c55);
  L57():
    goto L58();
  L58():
    lapply = ldf lapply;
    check L295() else D98();
  L76(r243):
    st len = r243;
    sym33 = ldf `seq.int`;
    base33 = ldf `seq.int` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L377() else L378();
  L193():
    dx22 = getTryDispatchBuiltinValue(dr12);
    goto L31(i14, dx22);
  L194():
    k1 = force? k;
    ____ = ldf `[[<-` in base;
    r96 = dyn ____(l3, dx18, k1);
    goto L31(i16, r96);
  L195():
    s6 = force? s5;
    checkMissing(s6);
    c22 = `is.object`(s6);
    if c22 then L196() else L197(i18, s6);
  L242():
    s14 = force? s13;
    checkMissing(s14);
    c42 = `is.object`(s14);
    if c42 then L243() else L244(s14);
  L286():
    col_vars1 = ld `col.vars`;
    check L288() else D94();
  L287():
    r164 = dyn base20(<sym col.vars>);
    goto L56(c48, r164);
  L291():
    stop2 = ldf stop;
    check L292() else D96();
  L354():
    dx63 = getTryDispatchBuiltinValue(dr40);
    goto L70(i45, p42, dx63);
  L355():
    k9 = force? k8;
    __15 = ldf `[` in base;
    r227 = dyn __15(n3, k9);
    goto L70(i47, p44, r227);
  L365():
    dx65 = getTryDispatchBuiltinValue(dr42);
    goto L74(dx65);
  L366():
    is_row_lab1 = force? is_row_lab;
    checkMissing(is_row_lab1);
    r238 = `!`(is_row_lab1);
    __16 = ldf `[` in base;
    r239 = dyn __16(s29, r238);
    goto L74(r239);
  L367():
    goto L73(r240);
  L371():
    dx67 = getTryDispatchBuiltinValue(dr44);
    goto L75(dx67);
  L372():
    is_row_lab3 = force? is_row_lab2;
    __17 = ldf `[` in base;
    r241 = dyn __17(s33, is_row_lab3);
    goto L75(r241);
  L373():
    tmp = ld tmp;
    check L375() else D140();
  L374():
    r242 = dyn base32(<sym tmp>);
    goto L76(r242);
  D94():
    deopt 382 [c48, col_vars1];
  D96():
    deopt 389 [];
  D98():
    deopt 395 [];
  D140():
    deopt 541 [tmp];
  L32(i22, dx26):
    l4 = ld `col.vars`;
    names = ldf names;
    check L199() else D57();
  L44(dx46):
    st s = dx46;
    sym14 = ldf vector;
    base14 = ldf vector in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L246() else L247();
  L77(r246):
    s34 = toForSeq(r246);
    l24 = length(s34);
    i50 = 0;
    goto L78(i50);
  L196():
    dr14 = tryDispatchBuiltin.1("[", s6);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L198() else L197(i18, dr14);
  L197(i20, s8):
    __6 = ldf `[` in base;
    r97 = dyn __6(s8, 1);
    goto L32(i20, r97);
  L243():
    dr26 = tryDispatchBuiltin.1("[", s14);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L245() else L244(dr26);
  L244(s16):
    __11 = ldf `[` in base;
    r133 = dyn __11(s16, -1);
    goto L44(r133);
  L288():
    col_vars2 = force? col_vars1;
    checkMissing(col_vars2);
    is_list = ldf `is.list` in base;
    r166 = dyn is_list(col_vars2);
    check L289() else D95();
  L292():
    r168 = dyn stop2("'col.vars' missing or incorrect");
    check L293() else D97();
  L295():
    p33 = prom<V +>{
      col_vars3 = ld `col.vars`;
      col_vars4 = force? col_vars3;
      checkMissing(col_vars4);
      return col_vars4;
    };
    p34 = prom<V +>{
      as_character1 = ld `as.character`;
      as_character2 = force? as_character1;
      checkMissing(as_character2);
      return as_character2;
    };
    r172 = dyn lapply(p33, p34);
    check L296() else D99();
  L375():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    length4 = ldf length in base;
    r244 = dyn length4(tmp1);
    check L376() else D141();
  L377():
    n_row_vars14 = ld `n.row.vars`;
    check L379() else D142();
  L378():
    r245 = dyn base33[from, to](1.0, <sym n.row.vars>);
    goto L77(r245);
  D57():
    deopt 223 [i22, dx26, l4, dx26];
  D95():
    deopt 385 [c48, r166];
  D97():
    deopt 391 [r168];
  D99():
    deopt 398 [r172];
  D141():
    deopt 544 [r244];
  D142():
    deopt 550 [n_row_vars14];
  L45(r135):
    st `row.vars` = r135;
    n_row_vars6 = ld `n.row.vars`;
    check L250() else D80();
  L78(i51):
    i52 = `+`.1(i51, 1);
    c66 = `<`.1(l24, i52);
    if c66 then L381() else L86();
  L198():
    dx25 = getTryDispatchBuiltinValue(dr14);
    goto L32(i18, dx25);
  L199():
    r98 = dyn names(dx26, NULL);
    check L200() else D58();
  L245():
    dx45 = getTryDispatchBuiltinValue(dr26);
    goto L44(dx45);
  L246():
    n_row_vars4 = ld `n.row.vars`;
    check L248() else D78();
  L247():
    r134 = dyn base14[, length]("list", <sym n.row.vars>);
    goto L45(r134);
  L289():
    goto L56(c48, r166);
  L293():
    goto L58();
  L296():
    st `col.vars` = r172;
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L297() else L298();
  L376():
    goto L76(r244);
  L379():
    n_row_vars15 = force? n_row_vars14;
    checkMissing(n_row_vars15);
    seq_int2 = ldf `seq.int` in base;
    r247 = dyn seq_int2(1.0, n_row_vars15);
    check L380() else D143();
  D58():
    deopt 225 [i22, dx26, l4, dx26, r98];
  D78():
    deopt 318 [n_row_vars4];
  D80():
    deopt 324 [1.0, n_row_vars6];
  D143():
    deopt 554 [r247];
  L59(r174):
    st `n.col.vars` = r174;
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L301() else L302();
  L86():
    x2 = `[[`(s34, i52, NULL, TRUE);
    st k = x2;
    sym34 = ldf `seq.int`;
    base34 = ldf `seq.int` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L382() else L383();
  L200():
    c23 = `is.object`(r98);
    if c23 then L201() else L202(i22, dx26, l4, r98);
  L248():
    n_row_vars5 = force? n_row_vars4;
    checkMissing(n_row_vars5);
    vector3 = ldf vector in base;
    r136 = dyn vector3("list", n_row_vars5);
    check L249() else D79();
  L250():
    n_row_vars7 = force? n_row_vars6;
    checkMissing(n_row_vars7);
    r137 = `:`(1.0, n_row_vars7);
    st i = r137;
    s17 = ld s;
    check L251() else D81();
  L297():
    col_vars5 = ld `col.vars`;
    check L299() else D100();
  L298():
    r173 = dyn base21(<sym col.vars>);
    goto L59(r173);
  L380():
    goto L77(r247);
  L381():
    matrix = ldf matrix;
    check L415() else D159();
  D79():
    deopt 321 [r136];
  D81():
    deopt 328 [s17];
  D100():
    deopt 402 [col_vars5];
  D159():
    deopt 611 [];
  L33(i26, dx31, l8, dx32):
    names__ = ldf `names<-`;
    check L205() else D60();
  L60(r177):
    c59 = `as.logical`(r177);
    if c59 then L307() else L62();
  L79(i57, r249):
    st i = r249;
    unique = ldf unique;
    check L392() else D149();
  L201():
    dr16 = tryDispatchBuiltin.0("[<-", r98, dx26);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L203() else L202(i22, dx26, l4, dr16);
  L202(i24, dx28, l6, r100):
    k2 = ld k;
    check L204() else D59();
  L249():
    goto L45(r136);
  L251():
    s18 = force? s17;
    checkMissing(s18);
    c43 = `is.object`(s18);
    if c43 then L252() else L253(s18);
  L299():
    col_vars6 = force? col_vars5;
    checkMissing(col_vars6);
    length3 = ldf length in base;
    r175 = dyn length3(col_vars6);
    check L300() else D101();
  L301():
    sym23 = ldf names;
    base23 = ldf names in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L303() else L304();
  L302():
    r176 = dyn base22(<lang names(col.vars)>);
    goto L60(r176);
  L382():
    len = ld len;
    check L384() else D144();
  L383():
    r248 = dyn base34[from, to, by](1.0, <sym len>, <lang `/`(len, `[`(n, k))>);
    goto L79(i52, r248);
  L415():
    p51 = prom<V +>{
      values = ld values;
      values1 = force? values;
      checkMissing(values1);
      return values1;
    };
    p53 = prom<V +>{
      sym37 = ldf prod;
      base37 = ldf prod in base;
      guard37 = `==`.4(sym37, base37);
      if guard37 then L1() else L2();
    L0(r272):
      return r272;
    L1():
      lengths = ldf lengths;
      p52 = prom<V +>{
        row_vars = ld `row.vars`;
        row_vars1 = force? row_vars;
        checkMissing(row_vars1);
        return row_vars1;
      };
      r274 = dyn lengths(p52);
      prod = ldf prod in base;
      r275 = dyn prod(r274);
      goto L0(r275);
    L2():
      r271 = dyn base37(<lang lengths(row.vars)>);
      goto L0(r271);
    };
    p55 = prom<V +>{
      sym38 = ldf prod;
      base38 = ldf prod in base;
      guard38 = `==`.4(sym38, base38);
      if guard38 then L1() else L2();
    L0(r278):
      return r278;
    L1():
      lengths1 = ldf lengths;
      p54 = prom<V +>{
        col_vars13 = ld `col.vars`;
        col_vars14 = force? col_vars13;
        checkMissing(col_vars14);
        return col_vars14;
      };
      r280 = dyn lengths1(p54);
      prod1 = ldf prod in base;
      r281 = dyn prod1(r280);
      goto L0(r281);
    L2():
      r277 = dyn base38(<lang lengths(col.vars)>);
      goto L0(r277);
    };
    r283 = dyn matrix[, nrow, ncol, byrow](p51, p53, p55, TRUE);
    check L416() else D160();
  D59():
    deopt 227 [i24, dx28, l6, r100, dx26, k2];
  D60():
    deopt 230 [i26, dx31, l8, dx32];
  D101():
    deopt 405 [r175];
  D144():
    deopt 559 [i52, len];
  D149():
    deopt 574 [i57];
  D160():
    deopt 619 [r283];
  L46(dx48):
    l10 = ld `row.vars`;
    names__2 = ldf `names<-`;
    check L256() else D83();
  L61(r179):
    c58 = `==`(r179, NULL);
    goto L60(c58);
  L62():
    sym25 = ldf names;
    base25 = ldf names in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L313() else L314();
  L203():
    dx30 = getTryDispatchBuiltinValue(dr16);
    goto L33(i22, dx26, l4, dx30);
  L204():
    k3 = force? k2;
    ___ = ldf `[<-` in base;
    r101 = dyn ___(r100, dx26, k3);
    goto L33(i24, dx28, l6, r101);
  L205():
    r102 = dyn names__(l8, NULL, dx32);
    check L206() else D61();
  L252():
    dr28 = tryDispatchBuiltin.1("[", s18);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L254() else L253(dr28);
  L253(s20):
    i27 = ld i;
    check L255() else D82();
  L300():
    goto L59(r175);
  L303():
    col_vars7 = ld `col.vars`;
    check L305() else D102();
  L304():
    r178 = dyn base23(<sym col.vars>);
    goto L61(r178);
  L307():
    paste0 = ldf paste0;
    check L308() else D104();
  L384():
    len1 = force? len;
    checkMissing(len1);
    len2 = ld len;
    check L385() else D145();
  L392():
    p50 = prom<V +>{
      tmp2 = ld tmp;
      tmp3 = force? tmp2;
      checkMissing(tmp3);
      c68 = `is.object`(tmp3);
      if c68 then L1() else L2(tmp3);
    L0(dx72):
      return dx72;
    L1():
      dr48 = tryDispatchBuiltin.1("[", tmp3);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(tmp5):
      i62 = ld i;
      i63 = force? i62;
      __19 = ldf `[` in base;
      r253 = dyn __19(tmp5, i63);
      goto L0(r253);
    L3():
      dx71 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx71);
    };
    r255 = dyn unique(p50);
    check L393() else D150();
  L416():
    st values = r283;
    structure = ldf structure;
    check L417() else D161();
  D61():
    deopt 232 [i26, dx31, r102];
  D82():
    deopt 330 [s20, i27];
  D83():
    deopt 334 [dx48, l10, dx48];
  D102():
    deopt 410 [col_vars7];
  D104():
    deopt 416 [];
  D145():
    deopt 562 [i52, len2];
  D150():
    deopt 576 [i57, r255];
  D161():
    deopt 622 [];
  L63(r188):
    st nam = r188;
    which2 = ldf which;
    check L317() else D110();
  L206():
    st `col.vars` = r102;
    goto L29(i26);
  L254():
    dx47 = getTryDispatchBuiltinValue(dr28);
    goto L46(dx47);
  L255():
    i28 = force? i27;
    __12 = ldf `[` in base;
    r138 = dyn __12(s20, i28);
    goto L46(r138);
  L256():
    r139 = dyn names__2(l10, NULL, dx48);
    check L257() else D84();
  L305():
    col_vars8 = force? col_vars7;
    checkMissing(col_vars8);
    names1 = ldf names in base;
    r180 = dyn names1(col_vars8);
    check L306() else D103();
  L308():
    p35 = prom<V +>{
      sym24 = ldf seq_along;
      base24 = ldf seq_along in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L1() else L2();
    L0(r182):
      return r182;
    L1():
      col_vars9 = ld `col.vars`;
      col_vars10 = force? col_vars9;
      checkMissing(col_vars10);
      r183 = seq_along(col_vars10);
      goto L0(r183);
    L2():
      r181 = dyn base24(<sym col.vars>);
      goto L0(r181);
    };
    r185 = dyn paste0("Factor.", p35);
    check L309() else D105();
  L313():
    col_vars11 = ld `col.vars`;
    check L315() else D108();
  L314():
    r187 = dyn base25(<sym col.vars>);
    goto L63(r187);
  L385():
    len3 = force? len2;
    checkMissing(len3);
    n4 = ld n;
    check L386() else D146();
  L393():
    l25 = ld `row.vars`;
    c69 = `is.object`(l25);
    if c69 then L394() else L395(i57, r255, l25);
  L417():
    p56 = prom<V +>{
      values2 = ld values;
      values3 = force? values2;
      checkMissing(values3);
      return values3;
    };
    p57 = prom<V +>{
      row_vars2 = ld `row.vars`;
      row_vars3 = force? row_vars2;
      checkMissing(row_vars3);
      return row_vars3;
    };
    p58 = prom<V +>{
      col_vars15 = ld `col.vars`;
      col_vars16 = force? col_vars15;
      checkMissing(col_vars16);
      return col_vars16;
    };
    r287 = dyn structure[, `row.vars`, `col.vars`, class](p56, p57, p58, "ftable");
    check L418() else D162();
  D84():
    deopt 336 [dx48, r139];
  D103():
    deopt 413 [r180];
  D105():
    deopt 419 [r185];
  D108():
    deopt 427 [col_vars11];
  D110():
    deopt 433 [];
  D146():
    deopt 563 [i52, len3, n4];
  D162():
    deopt 630 [r287];
  L81(i67, dx74):
    st `row.vars` = dx74;
    tmp6 = ld tmp;
    check L398() else D152();
  L257():
    st `row.vars` = r139;
    s21 = ld s;
    check L258() else D85();
  L306():
    goto L61(r180);
  L309():
    l14 = ld `col.vars`;
    names__3 = ldf `names<-`;
    check L310() else D106();
  L315():
    col_vars12 = force? col_vars11;
    checkMissing(col_vars12);
    names2 = ldf names in base;
    r189 = dyn names2(col_vars12);
    check L316() else D109();
  L317():
    p36 = prom<V +>{
      sym26 = ldf nzchar;
      base26 = ldf nzchar in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r191):
      r193 = `!`(r191);
      return r193;
    L1():
      nam = ld nam;
      nam1 = force? nam;
      checkMissing(nam1);
      nzchar = ldf nzchar in base;
      r192 = dyn nzchar(nam1);
      goto L0(r192);
    L2():
      r190 = dyn base26(<sym nam>);
      goto L0(r190);
    };
    r195 = dyn which2(p36);
    check L318() else D111();
  L386():
    n5 = force? n4;
    checkMissing(n5);
    c67 = `is.object`(n5);
    if c67 then L387() else L388(i52, len3, n5);
  L394():
    dr50 = tryDispatchBuiltin.0("[[<-", l25, r255);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L396() else L395(i57, r255, dr50);
  L395(i65, r257, l27):
    k12 = ld k;
    check L397() else D151();
  L418():
    popenv;
    return r287;
  D85():
    deopt 338 [s21];
  D106():
    deopt 421 [r185, l14, r185];
  D109():
    deopt 430 [r189];
  D111():
    deopt 435 [r195];
  D151():
    deopt 578 [i65, r257, l27, r255, k12];
  D152():
    deopt 582 [i67, tmp6];
  L80(i61, len7, dx70):
    r251 = `/`(len7, dx70);
    seq_int3 = ldf `seq.int` in base;
    r252 = dyn seq_int3(1.0, len1, r251);
    check L391() else D148();
  L258():
    s22 = force? s21;
    checkMissing(s22);
    c44 = `is.object`(s22);
    if c44 then L259() else L260(s22);
  L310():
    r186 = dyn names__3(l14, NULL, r185);
    check L311() else D107();
  L316():
    goto L63(r189);
  L318():
    st ind = r195;
    paste1 = ldf paste0;
    check L319() else D112();
  L387():
    dr46 = tryDispatchBuiltin.1("[", n5);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L389() else L388(i52, len3, dr46);
  L388(i59, len5, n7):
    k10 = ld k;
    check L390() else D147();
  L396():
    dx73 = getTryDispatchBuiltinValue(dr50);
    goto L81(i57, dx73);
  L397():
    k13 = force? k12;
    ____2 = ldf `[[<-` in base;
    r260 = dyn ____2(l27, r255, k13);
    goto L81(i65, r260);
  L398():
    tmp7 = force? tmp6;
    checkMissing(tmp7);
    c70 = `is.object`(tmp7);
    if c70 then L399() else L400(i67, tmp7);
  D107():
    deopt 423 [r185, r186];
  D112():
    deopt 438 [];
  D147():
    deopt 565 [i59, len5, n7, k10];
  D148():
    deopt 571 [i61, r252];
  L47(dx50):
    l11 = ld `col.vars`;
    c45 = `is.object`(l11);
    if c45 then L263() else L264(dx50, l11);
  L82(i71, dx76):
    st tmp = dx76;
    sym36 = ldf length;
    base36 = ldf length in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L411() else L412();
  L259():
    dr30 = tryDispatchBuiltin.1("[", s22);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L261() else L260(dr30);
  L260(s24):
    i29 = ld i;
    check L262() else D86();
  L311():
    st `col.vars` = r186;
    goto L36();
  L319():
    p37 = prom<V +>{
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      return ind1;
    };
    r197 = dyn paste1("Factor.", p37);
    check L320() else D113();
  L389():
    dx69 = getTryDispatchBuiltinValue(dr46);
    goto L80(i52, len3, dx69);
  L390():
    k11 = force? k10;
    __18 = ldf `[` in base;
    r250 = dyn __18(n7, k11);
    goto L80(i59, len5, r250);
  L391():
    goto L79(i61, r252);
  L399():
    dr52 = tryDispatchBuiltin.1("[", tmp7);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L401() else L400(i67, dr52);
  L400(i69, tmp9):
    sym35 = ldf `seq.int`;
    base35 = ldf `seq.int` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L402() else L403();
  D86():
    deopt 340 [s24, i29];
  D113():
    deopt 441 [r197];
  L48(dx56):
    st `col.vars` = dx56;
    z43 = ld z;
    check L266() else D87();
  L83(i74, tmp12, r262):
    __21 = ldf `[` in base;
    r266 = dyn __21(tmp12, r262);
    goto L82(i74, r266);
  L85(i81, r268):
    st len = r268;
    goto L78(i81);
  L261():
    dx49 = getTryDispatchBuiltinValue(dr30);
    goto L47(dx49);
  L262():
    i30 = force? i29;
    checkMissing(i30);
    r140 = `-`(<missing>, i30);
    __13 = ldf `[` in base;
    r141 = dyn __13(s24, r140);
    goto L47(r141);
  L263():
    dr32 = tryDispatchBuiltin.0("[[<-", l11, dx50);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L265() else L264(dx50, dr32);
  L264(dx52, l13):
    ____1 = ldf `[[<-` in base;
    r142 = dyn ____1(l13, dx50, 1);
    goto L48(r142);
  L320():
    l15 = ld `col.vars`;
    names3 = ldf names;
    check L321() else D114();
  L401():
    dx75 = getTryDispatchBuiltinValue(dr52);
    goto L82(i67, dx75);
  L402():
    len8 = ld len;
    check L404() else D153();
  L403():
    r261 = dyn base35[from, to](2.0, <lang `/`(len, `[`(n, k))>);
    goto L83(i69, tmp9, r261);
  L411():
    tmp17 = ld tmp;
    check L413() else D157();
  L412():
    r267 = dyn base36(<sym tmp>);
    goto L85(i71, r267);
  D87():
    deopt 349 [z43];
  D114():
    deopt 443 [r197, l15, r197];
  D153():
    deopt 588 [i69, tmp9, len8];
  D157():
    deopt 602 [i71, tmp17];
  L265():
    dx54 = getTryDispatchBuiltinValue(dr32);
    goto L48(dx54);
  L266():
    z44 = force? z43;
    checkMissing(z44);
    c46 = `is.object`(z44);
    if c46 then L267() else L268(z44);
  L321():
    r198 = dyn names3(r197, NULL);
    check L322() else D115();
  L404():
    len9 = force? len8;
    checkMissing(len9);
    n8 = ld n;
    check L405() else D154();
  L413():
    tmp18 = force? tmp17;
    checkMissing(tmp18);
    length5 = ldf length in base;
    r269 = dyn length5(tmp18);
    check L414() else D158();
  D115():
    deopt 445 [r197, l15, r197, r198];
  D154():
    deopt 589 [i69, tmp9, len9, n8];
  D158():
    deopt 605 [i71, r269];
  L49(dx58):
    st z = dx58;
    goto L36();
  L267():
    dr34 = tryDispatchBuiltin.1("[", z44);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L269() else L268(dr34);
  L268(z46):
    __14 = ldf `[` in base;
    r143 = dyn __14(z46, <int -1, -2>);
    goto L49(r143);
  L322():
    c60 = `is.object`(r198);
    if c60 then L323() else L324(r197, l15, r198);
  L405():
    n9 = force? n8;
    checkMissing(n9);
    c71 = `is.object`(n9);
    if c71 then L406() else L407(i69, tmp9, len9, n9);
  L414():
    goto L85(i71, r269);
  L64(r204, l19, dx60):
    names__4 = ldf `names<-`;
    check L327() else D117();
  L84(i78, tmp16, len13, dx78):
    r264 = `/`(len13, dx78);
    seq_int4 = ldf `seq.int` in base;
    r265 = dyn seq_int4(2.0, r264);
    check L410() else D156();
  L269():
    dx57 = getTryDispatchBuiltinValue(dr34);
    goto L49(dx57);
  L323():
    dr36 = tryDispatchBuiltin.0("[<-", r198, r197);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L325() else L324(r197, l15, dr36);
  L324(r201, l17, r202):
    ind2 = ld ind;
    check L326() else D116();
  L406():
    dr54 = tryDispatchBuiltin.1("[", n9);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L408() else L407(i69, tmp9, len9, dr54);
  L407(i76, tmp14, len11, n11):
    k14 = ld k;
    check L409() else D155();
  D116():
    deopt 447 [r201, l17, r202, r197, ind2];
  D117():
    deopt 450 [r204, l19, dx60];
  D155():
    deopt 591 [i76, tmp14, len11, n11, k14];
  D156():
    deopt 597 [i78, tmp16, r265];
  L325():
    dx59 = getTryDispatchBuiltinValue(dr36);
    goto L64(r197, l15, dx59);
  L326():
    ind3 = force? ind2;
    ___1 = ldf `[<-` in base;
    r205 = dyn ___1(r202, r197, ind3);
    goto L64(r201, l17, r205);
  L327():
    r206 = dyn names__4(l19, NULL, dx60);
    check L328() else D118();
  L408():
    dx77 = getTryDispatchBuiltinValue(dr54);
    goto L84(i69, tmp9, len9, dx77);
  L409():
    k15 = force? k14;
    __20 = ldf `[` in base;
    r263 = dyn __20(n11, k15);
    goto L84(i76, tmp14, len11, r263);
  L410():
    goto L83(i78, tmp16, r265);
  D118():
    deopt 452 [r204, r206];
  L328():
    st `col.vars` = r206;
    goto L36();
  }
}