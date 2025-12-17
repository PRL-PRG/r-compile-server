fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3357322813;
    st `edit.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3357322813(name, `factor.mode`, `edit.row.names`, `...`) {
  (reg name:*, reg factor_mode:*, reg edit_row_names:*, reg ddd:dots) -+> V { var name:*, var `factor.mode`:*, reg factor_mode_isMissing:L, reg factor_mode_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `edit.row.names`:*, reg edit_row_names_isMissing:L, reg edit_row_names_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg row_names:cls, reg name1:*, reg name2:V, reg p1:p(V +), reg r7:V, reg nrow:cls, reg name3:*, reg name4:V, reg p2:p(V +), reg r9:V, reg r10:V, reg r11:V, reg any:cls, reg r12:V, reg p3:p(V +), var `...`:dots?, reg _Platform:*, reg _Platform1:V, reg c1:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg r15:V, reg c2:L, reg c4:V, reg _Platform4:*, reg _Platform5:V, reg c5:L, reg c7:L, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c9:L, reg dx3:V, reg r16:V, reg r17:V, reg c10:L, reg c11:V, reg c13:L, reg _Platform8:*, reg _Platform9:V, reg c14:L, reg _Platform11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r18:V, reg r19:V, reg c15:L, reg c16:V, reg Sys_getenv:cls, reg r20:V, reg r21:V, reg c18:L, reg c19:V, reg c21:L, reg edit_default:cls, reg name5:*, reg name6:V, reg p4:p(V +), reg ddd1:dots?, reg r23:V, reg check_screen_device:cls, reg r27:V, reg r28:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg name7:*, reg name8:V, reg length:cls, reg r31:V, reg c22:L, reg c24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg c27:L, reg r33:V, reg vapply:cls, reg name9:*, reg name10:V, reg p5:p(V +), reg is_vector_unclass:*, reg is_vector_unclass1:V, reg p6:p(V +), reg r36:V, reg vapply1:cls, reg name11:*, reg name12:V, reg p7:p(V +), reg is_factor:*, reg is_factor1:V, reg p8:p(V +), reg r39:V, reg r40:V, reg all:cls, reg r41:V, reg r42:V, reg c28:L, reg c29:V, reg c31:L, reg stop:cls, reg r43:V, reg grepl:cls, reg R_version:*, reg R_version1:V, reg c32:L, reg R_version3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r45:V, reg p9:p(V +), reg r47:V, reg c33:L, reg check_for_XQuartz:cls, reg file_path:cls, reg R_home:cls, reg r48:V, reg p10:p(V +), reg r50:V, reg p11:p(V +), reg r52:V, reg match_arg:cls, reg factor_mode1:*, reg factor_mode2:V, reg p12:p(V +), reg r55:V, reg r56:cls, reg lapply:cls, reg name13:*, reg name14:V, reg p13:p(V +), reg attributes:*, reg attributes1:V, reg p14:p(V +), reg r59:V, reg lapply1:cls, reg name15:*, reg name16:V, reg p15:p(V +), reg as_num_or_char:*, reg as_num_or_char1:V, reg p16:p(V +), reg r62:V, reg which:cls, reg vapply2:cls, reg name17:*, reg name18:V, reg p17:p(V +), reg is_factor2:*, reg is_factor3:V, reg p18:p(V +), reg r65:V, reg p19:p(V +), reg r67:V, reg which1:cls, reg vapply3:cls, reg name19:*, reg name20:V, reg p20:p(V +), reg is_logical:*, reg is_logical1:V, reg p21:p(V +), reg r70:V, reg p22:p(V +), reg r72:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r73:V, reg r74:V, reg name21:*, reg name22:V, reg length1:cls, reg r75:V, reg c34:L, reg vapply4:cls, reg name23:*, reg name24:V, reg p23:p(V +), reg r77:cls, reg p24:p(V +), reg r79:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r80:V, reg r81:V, reg has_class:*, reg has_class1:V, reg any1:cls, reg r82:V, reg c35:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r83:V, reg r84:V, reg has_class2:*, reg has_class3:V, reg sum:cls, reg r85:V, reg p25:p(V +), reg r87:V, reg p26:p(V +), reg paste:cls, reg sQuote:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r89:V, reg r90:V, reg name25:*, reg name26:V, reg names:cls, reg r91:V, reg c36:L, reg r93:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg has_class4:*, reg has_class5:V, reg __:cls, reg r94:V, reg p27:p(V +), reg r96:V, reg p28:p(V +), reg r98:V, reg p29:p(V +), reg r100:V, reg p30:p(V +), reg r102:V, reg r103:V, reg lapply2:cls, reg datalist:*, reg datalist1:V, reg p31:p(V +), reg mode:*, reg mode1:V, reg p32:p(V +), reg r107:V, reg edit_row_names1:*, reg edit_row_names2:V, reg c37:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r108:V, reg r109:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r110:V, reg r111:V, reg row_names1:cls, reg name27:*, reg name28:V, reg p33:p(V +), reg r113:V, reg list:cls, reg r114:V, reg datalist2:*, reg datalist3:V, reg c38:cls, reg r115:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r116:V, reg r117:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r118:V, reg r119:V, reg list1:cls, reg r120:V, reg modes:*, reg modes1:V, reg c39:cls, reg r121:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r123:V, reg r124:V, reg name29:*, reg name30:V, reg attr:cls, reg r125:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r126:V, reg r127:V, reg C_dataentry:*, reg C_dataentry1:V, reg datalist4:*, reg datalist5:V, reg modes2:*, reg modes3:V, reg _External2:cls, reg r128:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r129:V, reg r130:V, reg out:*, reg out1:V, reg length2:cls, reg r131:V, reg r132:V, reg c40:L, reg name31:*, reg name32:V, reg lengths:cls, reg out2:*, reg out3:V, reg p34:p(V +), reg r136:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r137:V, reg r138:V, reg lengths1:*, reg lengths2:V, reg max:cls, reg r139:V, reg edit_row_names3:*, reg edit_row_names4:V, reg c41:L, reg out4:*, reg out5:V, reg c42:L, reg out7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r140:V, reg which2:cls, reg lengths3:*, reg lengths4:V, reg maxlength:*, reg maxlength1:V, reg r141:V, reg p35:p(V +), reg r143:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c43:L, reg x:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r144:V, reg i7:I, reg r145:V, reg out8:*, reg out9:V, reg c44:L, reg i9:I, reg out11:V, reg dr12:V, reg dc6:L, reg dx13:V, reg i11:I, reg dx14:V, reg i12:*, reg i13:V, reg __2:cls, reg r146:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r147:V, reg i16:I, reg r148:V, reg maxlength2:*, reg maxlength3:V, reg lengths5:*, reg lengths6:V, reg c45:L, reg i18:I, reg maxlength5:V, reg lengths8:V, reg dr14:V, reg dc7:L, reg dx15:V, reg i20:I, reg maxlength7:V, reg dx16:V, reg i21:*, reg i22:V, reg __3:cls, reg r149:V, reg r150:V, reg rep_int:cls, reg r151:V, reg c46:cls, reg r152:V, reg l1:*, reg c47:L, reg i24:I, reg r154:V, reg l3:*, reg dr16:V, reg dc8:L, reg dx17:V, reg i26:I, reg dx18:V, reg i27:*, reg i28:V, reg ____:cls, reg r157:V, reg edit_row_names5:*, reg edit_row_names6:V, reg c48:L, reg out12:*, reg out13:V, reg c49:L, reg out15:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg __4:cls, reg r158:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r159:V, reg r160:V, reg rn:*, reg rn1:V, reg length3:cls, reg r161:V, reg maxlength8:*, reg maxlength9:V, reg r162:V, reg c50:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r163:V, reg r164:V, reg rn2:*, reg rn3:V, reg paste1:cls, reg ln:*, reg ln1:V, reg r165:V, reg maxlength10:*, reg maxlength11:V, reg r166:V, reg p36:p(V +), reg r168:V, reg c51:cls, reg r169:V, reg r170:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r172:V, reg r173:V, reg rn4:*, reg rn5:V, reg length4:cls, reg r174:V, reg maxlength12:*, reg maxlength13:V, reg r175:V, reg c52:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r176:V, reg r177:V, reg maxlength14:*, reg maxlength15:V, reg r178:I, reg factors:*, reg factors1:V, reg s1:V, reg l4:I, reg i29:I, reg i30:I, reg i31:I, reg c53:L, reg x1:V, reg factor_mode3:*, reg factor_mode4:V, reg mode2:cls, reg out16:*, reg out17:V, reg c54:L, reg out19:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg i34:*, reg i35:V, reg __5:cls, reg r179:V, reg p37:p(V +), reg r181:V, reg r182:V, reg c55:L, reg attrlist:*, reg attrlist1:V, reg c56:L, reg i41:I, reg attrlist3:V, reg dr22:V, reg dc11:L, reg dx23:V, reg i43:I, reg dx24:V, reg i44:*, reg i45:V, reg __6:cls, reg r184:V, reg factor_mode5:*, reg factor_mode6:V, reg r185:V, reg c57:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r186:V, reg i50:I, reg r187:V, reg out20:*, reg out21:V, reg c58:L, reg i52:I, reg out23:V, reg dr24:V, reg dc12:L, reg dx25:V, reg i54:I, reg dx26:V, reg i55:*, reg i56:V, reg __7:cls, reg r188:V, reg as_integer:cls, reg r189:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r190:V, reg i59:I, reg r191:V, reg o:*, reg o1:V, reg is_na:cls, reg r192:V, reg o2:*, reg o3:V, reg r193:V, reg o4:*, reg o5:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r198:V, reg i62:I, reg r199:V, reg r200:V, reg o8:V, reg r201:V, reg a:*, reg a1:V, reg c59:L, reg i64:I, reg r204:V, reg r205:V, reg o10:V, reg a3:V, reg dr26:V, reg dc13:L, reg dx27:V, reg i66:I, reg r208:V, reg r209:V, reg o12:V, reg dx28:V, reg r210:V, reg length5:cls, reg r211:V, reg r212:V, reg r213:V, reg r214:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r215:V, reg i69:I, reg r216:V, reg ok:*, reg ok1:V, reg r217:V, reg any2:cls, reg r218:V, reg c60:L, reg warning1:cls, reg gettextf:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r219:V, reg r220:V, reg out24:*, reg out25:V, reg names1:cls, reg r221:V, reg c61:L, reg r223:V, reg dr28:V, reg dc14:L, reg dx29:V, reg dx30:V, reg i72:*, reg i73:V, reg __8:cls, reg r224:V, reg p38:p(V +), reg r226:V, reg p39:p(V +), reg r228:V, reg l5:*, reg c62:L, reg i75:I, reg r230:L, reg l7:*, reg dr30:V, reg dc15:L, reg dx31:V, reg i77:I, reg r232:L, reg dx32:V, reg ok2:*, reg ok3:V, reg r233:V, reg ___:cls, reg r234:V, reg i78:I, reg a4:*, reg a5:V, reg l8:*, reg attributes__:cls, reg r236:V, reg i79:I, reg out26:*, reg out27:V, reg c63:L, reg i81:I, reg out29:V, reg dr32:V, reg dc16:L, reg dx33:V, reg i83:I, reg dx34:V, reg i84:*, reg i85:V, reg __9:cls, reg r237:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r238:V, reg i88:I, reg r239:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r240:V, reg i91:I, reg r241:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r242:V, reg i94:I, reg r243:V, reg o13:*, reg o14:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r244:V, reg i97:I, reg r245:V, reg a7:*, reg a8:V, reg c64:L, reg i99:I, reg a10:V, reg dr34:V, reg dc17:L, reg dx35:V, reg i101:I, reg dx36:V, reg r246:V, reg c65:cls, reg r247:V, reg match:cls, reg r248:V, reg is_na1:cls, reg r249:V, reg any3:cls, reg r250:V, reg c66:L, reg unique:cls, reg o15:*, reg o16:V, reg c67:L, reg o18:V, reg dr36:V, reg dc18:L, reg dx37:V, reg dx38:V, reg new:*, reg new1:V, reg __10:cls, reg r251:V, reg p40:p(V +), reg r253:V, reg warning2:cls, reg gettextf1:cls, reg sym31:cls, reg base31:cls, reg guard31:L, reg r254:V, reg r255:V, reg out30:*, reg out31:V, reg names2:cls, reg r256:V, reg c68:L, reg r258:V, reg dr38:V, reg dc19:L, reg dx39:V, reg dx40:V, reg i104:*, reg i105:V, reg __11:cls, reg r259:V, reg p41:p(V +), reg r261:V, reg p42:p(V +), reg r263:V, reg factor:cls, reg o19:*, reg o20:V, reg p43:p(V +), reg sym32:cls, reg base32:cls, reg guard32:L, reg r265:V, reg r266:V, reg a11:*, reg a12:V, reg c69:L, reg a14:V, reg dr40:V, reg dc20:L, reg dx41:V, reg dx42:V, reg r267:V, reg new2:*, reg new3:V, reg c70:cls, reg r268:V, reg p44:p(V +), reg is_ordered:cls, reg o21:*, reg o22:V, reg p45:p(V +), reg r271:V, reg p46:p(V +), reg r273:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r274:V, reg i108:I, reg r275:V, reg o23:*, reg o24:V, reg a15:*, reg a16:V, reg c71:L, reg i110:I, reg a18:V, reg dr42:V, reg dc21:L, reg dx43:V, reg i112:I, reg dx44:V, reg r276:V, reg match1:cls, reg r277:V, reg a19:*, reg a20:V, reg l9:*, reg attributes__1:cls, reg r278:V, reg o25:*, reg o26:V, reg l10:*, reg c72:L, reg i114:I, reg o28:V, reg l12:*, reg dr44:V, reg dc22:L, reg dx45:V, reg i116:I, reg dx46:V, reg i117:*, reg i118:V, reg ____1:cls, reg r279:V, reg logicals:*, reg logicals1:V, reg s2:V, reg l13:I, reg i119:I, reg i120:I, reg i121:I, reg c73:L, reg x2:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r280:V, reg i126:I, reg r281:V, reg out32:*, reg out33:V, reg c74:L, reg i128:I, reg out35:V, reg dr46:V, reg dc23:L, reg dx47:V, reg i130:I, reg dx48:V, reg i131:*, reg i132:V, reg __12:cls, reg r282:V, reg as_logical:cls, reg r283:V, reg l14:*, reg c75:L, reg i134:I, reg r285:V, reg l16:*, reg dr48:V, reg dc24:L, reg dx49:V, reg i136:I, reg dx50:V, reg i137:*, reg i138:V, reg ____2:cls, reg r288:V, reg rn6:*, reg rn7:V, reg l17:*, reg attr__:cls, reg r289:V, reg l18:*, reg attr__1:cls, reg r290:V, reg edit_row_names7:*, reg edit_row_names8:V, reg c76:L, reg anyDuplicated:cls, reg rn8:*, reg rn9:V, reg p47:p(V +), reg r292:V, reg c77:L, reg warning3:cls, reg r293:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r294:V, reg r295:V, reg maxlength16:*, reg maxlength17:V, reg r296:I, reg l19:*, reg attr__2:cls, reg r297:V, reg r298:V, reg out36:*, reg out37:V |
    mkenv;
    st name = name;
    factor_mode_isMissing = missing.0(factor_mode);
    if factor_mode_isMissing then L0() else L1(factor_mode);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("character", "numeric");
      goto L0(r2);
    L2():
      r = dyn base("character", "numeric");
      goto L0(r);
    };
    goto L1(p);
  L1(factor_mode_orDefault):
    st `factor.mode` = factor_mode_orDefault;
    edit_row_names_isMissing = missing.0(edit_row_names);
    if edit_row_names_isMissing then L2() else L3(edit_row_names);
  L2():
    p3 = prom<V +>{
      sym1 = ldf any;
      base1 = ldf any in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      row_names = ldf `row.names`;
      p1 = prom<V +>{
        name1 = ld name;
        name2 = force? name1;
        checkMissing(name2);
        return name2;
      };
      r7 = dyn row_names(p1);
      nrow = ldf nrow;
      p2 = prom<V +>{
        name3 = ld name;
        name4 = force? name3;
        checkMissing(name4);
        return name4;
      };
      r9 = dyn nrow(p2);
      r10 = `:`(1, r9);
      r11 = `!=`(r7, r10);
      any = ldf any in base;
      r12 = dyn any(r11);
      goto L0(r12);
    L2():
      r4 = dyn base1(<lang `!=`(row.names(name), `:`(1, nrow(name)))>);
      goto L0(r4);
    };
    goto L3(p3);
  L3(edit_row_names_orDefault):
    st `edit.row.names` = edit_row_names_orDefault;
    st `...` = ddd;
    _Platform = ld `.Platform`;
    check L88() else D0();
  D0():
    deopt 0 [_Platform];
  L88():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c1 = `is.object`(_Platform1);
    if c1 then L90() else L91(_Platform1);
  L89(dx1):
    r15 = `==`(dx1, "unix");
    c2 = `as.logical`(r15);
    if c2 then L93() else L4(c2);
  L90():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L92() else L91(dr);
  L91(_Platform3):
    r14 = `$`(_Platform3, <sym OS.type>);
    goto L89(r14);
  L4(c4):
    c13 = `as.logical`(c4);
    if c13 then L100() else L5();
  L92():
    dx = getTryDispatchBuiltinValue(dr);
    goto L89(dx);
  L93():
    _Platform4 = ld `.Platform`;
    check L94() else D1();
  D1():
    deopt 5 [c2, _Platform4];
  L5():
    goto L9();
  L9():
    check_screen_device = ldf check_screen_device;
    check L116() else D7();
  L94():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c5 = `is.object`(_Platform5);
    if c5 then L96() else L97(c2, _Platform5);
  L100():
    _Platform8 = ld `.Platform`;
    check L101() else D2();
  D2():
    deopt 11 [_Platform8];
  D7():
    deopt 34 [];
  L95(c9, dx3):
    r17 = `!=`(dx3, "AQUA");
    c10 = `as.logical`(r17);
    c11 = `&&`(c9, c10);
    goto L4(c11);
  L96():
    dr2 = tryDispatchBuiltin.1("$", _Platform5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L98() else L97(c2, dr2);
  L97(c7, _Platform7):
    r16 = `$`(_Platform7, <sym GUI>);
    goto L95(c7, r16);
  L101():
    _Platform9 = force? _Platform8;
    checkMissing(_Platform9);
    c14 = `is.object`(_Platform9);
    if c14 then L103() else L104(_Platform9);
  L116():
    r27 = dyn check_screen_device("edit()");
    check L117() else D8();
  D8():
    deopt 36 [r27];
  L98():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L95(c2, dx2);
  L102(dx5):
    r19 = `==`(dx5, "unknown");
    c15 = `as.logical`(r19);
    if c15 then L6(c15) else L106();
  L103():
    dr4 = tryDispatchBuiltin.1("$", _Platform9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L105() else L104(dr4);
  L104(_Platform11):
    r18 = `$`(_Platform11, <sym GUI>);
    goto L102(r18);
  L117():
    r28 = clos inner2501545716;
    st `is.vector.unclass` = r28;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L118() else L119();
  L6(c16):
    c21 = `as.logical`(c16);
    if c21 then L110() else L7();
  L10(r30):
    c22 = `as.logical`(r30);
    if c22 then L122() else L11(c22);
  L105():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L102(dx4);
  L106():
    Sys_getenv = ldf `Sys.getenv`;
    check L107() else D3();
  L118():
    name7 = ld name;
    check L120() else D9();
  L119():
    r29 = dyn base2(<sym name>);
    goto L10(r29);
  D3():
    deopt 17 [c15];
  D9():
    deopt 42 [name7];
  L7():
    goto L9();
  L11(c24):
    c31 = `as.logical`(c24);
    if c31 then L131() else L13();
  L107():
    r20 = dyn Sys_getenv("DISPLAY");
    check L108() else D4();
  L110():
    edit_default = ldf `edit.default`;
    check L111() else D5();
  L120():
    name8 = force? name7;
    checkMissing(name8);
    length = ldf length in base;
    r31 = dyn length(name8);
    check L121() else D10();
  L122():
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L123() else L124();
  D4():
    deopt 19 [c15, r20];
  D5():
    deopt 24 [];
  D10():
    deopt 45 [r31];
  L12(c27, r33):
    r42 = `!`(r33);
    c28 = `as.logical`(r42);
    c29 = `&&`(c27, c28);
    goto L11(c29);
  L13():
    goto L14();
  L14():
    grepl = ldf grepl;
    check L135() else D18();
  L108():
    r21 = `==`(r20, "");
    c18 = `as.logical`(r21);
    c19 = `||`(c15, c18);
    goto L6(c19);
  L111():
    p4 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    ddd1 = ld `...`;
    r23 = dyn edit_default[, `...`](p4, ddd1);
    check L112() else D6();
  L121():
    goto L10(r31);
  L123():
    vapply = ldf vapply;
    check L125() else D11();
  L124():
    r32 = dyn base3(<lang `|`(vapply(name, is.vector.unclass, NA_LGL), vapply(name, is.factor, NA_LGL))>);
    goto L12(c22, r32);
  L131():
    stop = ldf stop;
    check L132() else D16();
  D6():
    deopt 27 [r23];
  D11():
    deopt 49 [c22];
  D16():
    deopt 65 [];
  D18():
    deopt 71 [];
  L112():
    popenv;
    return r23;
  L125():
    p5 = prom<V +>{
      name9 = ld name;
      name10 = force? name9;
      checkMissing(name10);
      return name10;
    };
    p6 = prom<V +>{
      is_vector_unclass = ld `is.vector.unclass`;
      is_vector_unclass1 = force? is_vector_unclass;
      checkMissing(is_vector_unclass1);
      return is_vector_unclass1;
    };
    r36 = dyn vapply(p5, p6, NA_LGL);
    check L126() else D12();
  L132():
    r43 = dyn stop("can only handle vector and factor elements");
    check L133() else D17();
  L135():
    p9 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c32 = `is.object`(R_version1);
      if c32 then L1() else L2(R_version1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", R_version1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(R_version3):
      r45 = `$`(R_version3, <sym os>);
      goto L0(r45);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r47 = dyn grepl("darwin", p9);
    check L136() else D19();
  D12():
    deopt 53 [c22, r36];
  D17():
    deopt 67 [r43];
  D19():
    deopt 74 [r47];
  L126():
    vapply1 = ldf vapply;
    check L127() else D13();
  L133():
    goto L14();
  L136():
    c33 = `as.logical`(r47);
    if c33 then L137() else L15();
  D13():
    deopt 54 [c22, r36];
  L15():
    goto L16();
  L16():
    match_arg = ldf `match.arg`;
    check L141() else D22();
  L127():
    p7 = prom<V +>{
      name11 = ld name;
      name12 = force? name11;
      checkMissing(name12);
      return name12;
    };
    p8 = prom<V +>{
      is_factor = ld `is.factor`;
      is_factor1 = force? is_factor;
      checkMissing(is_factor1);
      return is_factor1;
    };
    r39 = dyn vapply1(p7, p8, NA_LGL);
    check L128() else D14();
  L137():
    check_for_XQuartz = ldf check_for_XQuartz;
    check L138() else D20();
  D14():
    deopt 58 [c22, r36, r39];
  D20():
    deopt 76 [];
  D22():
    deopt 82 [];
  L128():
    r40 = `||`(r36, r39);
    all = ldf all in base;
    r41 = dyn all(r40);
    check L129() else D15();
  L138():
    p11 = prom<V +>{
      file_path = ldf `file.path`;
      p10 = prom<V +>{
        R_home = ldf `R.home`;
        r48 = dyn R_home("modules");
        return r48;
      };
      r50 = dyn file_path(p10, "R_de.so");
      return r50;
    };
    r52 = dyn check_for_XQuartz(p11);
    check L139() else D21();
  L141():
    p12 = prom<V +>{
      factor_mode1 = ld `factor.mode`;
      factor_mode2 = force? factor_mode1;
      checkMissing(factor_mode2);
      return factor_mode2;
    };
    r55 = dyn match_arg(p12);
    check L142() else D23();
  D15():
    deopt 61 [c22, r41];
  D21():
    deopt 78 [r52];
  D23():
    deopt 84 [r55];
  L129():
    goto L12(c22, r41);
  L139():
    goto L16();
  L142():
    st `factor.mode` = r55;
    r56 = clos inner2501545716;
    st `as.num.or.char` = r56;
    lapply = ldf lapply;
    check L143() else D24();
  D24():
    deopt 90 [];
  L143():
    p13 = prom<V +>{
      name13 = ld name;
      name14 = force? name13;
      checkMissing(name14);
      return name14;
    };
    p14 = prom<V +>{
      attributes = ld attributes;
      attributes1 = force? attributes;
      checkMissing(attributes1);
      return attributes1;
    };
    r59 = dyn lapply(p13, p14);
    check L144() else D25();
  D25():
    deopt 93 [r59];
  L144():
    st attrlist = r59;
    lapply1 = ldf lapply;
    check L145() else D26();
  D26():
    deopt 96 [];
  L145():
    p15 = prom<V +>{
      name15 = ld name;
      name16 = force? name15;
      checkMissing(name16);
      return name16;
    };
    p16 = prom<V +>{
      as_num_or_char = ld `as.num.or.char`;
      as_num_or_char1 = force? as_num_or_char;
      checkMissing(as_num_or_char1);
      return as_num_or_char1;
    };
    r62 = dyn lapply1(p15, p16);
    check L146() else D27();
  D27():
    deopt 99 [r62];
  L146():
    st datalist = r62;
    which = ldf which;
    check L147() else D28();
  D28():
    deopt 102 [];
  L147():
    p19 = prom<V +>{
      vapply2 = ldf vapply;
      p17 = prom<V +>{
        name17 = ld name;
        name18 = force? name17;
        checkMissing(name18);
        return name18;
      };
      p18 = prom<V +>{
        is_factor2 = ld `is.factor`;
        is_factor3 = force? is_factor2;
        checkMissing(is_factor3);
        return is_factor3;
      };
      r65 = dyn vapply2(p17, p18, NA_LGL);
      return r65;
    };
    r67 = dyn which(p19);
    check L148() else D29();
  D29():
    deopt 104 [r67];
  L148():
    st factors = r67;
    which1 = ldf which;
    check L149() else D30();
  D30():
    deopt 107 [];
  L149():
    p22 = prom<V +>{
      vapply3 = ldf vapply;
      p20 = prom<V +>{
        name19 = ld name;
        name20 = force? name19;
        checkMissing(name20);
        return name20;
      };
      p21 = prom<V +>{
        is_logical = ld `is.logical`;
        is_logical1 = force? is_logical;
        checkMissing(is_logical1);
        return is_logical1;
      };
      r70 = dyn vapply3(p20, p21, NA_LGL);
      return r70;
    };
    r72 = dyn which1(p22);
    check L150() else D31();
  D31():
    deopt 109 [r72];
  L150():
    st logicals = r72;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L151() else L152();
  L17(r74):
    c34 = `as.logical`(r74);
    if c34 then L155() else L18();
  L151():
    name21 = ld name;
    check L153() else D32();
  L152():
    r73 = dyn base4(<sym name>);
    goto L17(r73);
  D32():
    deopt 113 [name21];
  L18():
    goto L22();
  L22():
    lapply2 = ldf lapply;
    check L167() else D40();
  L153():
    name22 = force? name21;
    checkMissing(name22);
    length1 = ldf length in base;
    r75 = dyn length1(name22);
    check L154() else D33();
  L155():
    vapply4 = ldf vapply;
    check L156() else D34();
  D33():
    deopt 116 [r75];
  D34():
    deopt 118 [];
  D40():
    deopt 145 [];
  L154():
    goto L17(r75);
  L156():
    p23 = prom<V +>{
      name23 = ld name;
      name24 = force? name23;
      checkMissing(name24);
      return name24;
    };
    p24 = prom<V +>{
      r77 = clos inner2501545716;
      return r77;
    };
    r79 = dyn vapply4(p23, p24, NA_LGL);
    check L157() else D35();
  L167():
    p31 = prom<V +>{
      datalist = ld datalist;
      datalist1 = force? datalist;
      checkMissing(datalist1);
      return datalist1;
    };
    p32 = prom<V +>{
      mode = ld mode;
      mode1 = force? mode;
      checkMissing(mode1);
      return mode1;
    };
    r107 = dyn lapply2(p31, p32);
    check L168() else D41();
  D35():
    deopt 122 [r79];
  D41():
    deopt 148 [r107];
  L157():
    st has_class = r79;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L158() else L159();
  L168():
    st modes = r107;
    edit_row_names1 = ld `edit.row.names`;
    check L169() else D42();
  D42():
    deopt 150 [edit_row_names1];
  L19(r81):
    c35 = `as.logical`(r81);
    if c35 then L162() else L20();
  L158():
    has_class = ld has_class;
    check L160() else D36();
  L159():
    r80 = dyn base5(<sym has_class>);
    goto L19(r80);
  L169():
    edit_row_names2 = force? edit_row_names1;
    checkMissing(edit_row_names2);
    c37 = `as.logical`(edit_row_names2);
    if c37 then L170() else L23();
  D36():
    deopt 126 [has_class];
  L20():
    goto L21(NULL);
  L21(r103):
    goto L22();
  L23():
    goto L28();
  L28():
    sym12 = ldf attr;
    base12 = ldf attr in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L188() else L189();
  L160():
    has_class1 = force? has_class;
    checkMissing(has_class1);
    any1 = ldf any in base;
    r82 = dyn any1(has_class1);
    check L161() else D37();
  L162():
    warning = ldf warning;
    check L163() else D38();
  L170():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L171() else L172();
  D37():
    deopt 129 [r82];
  D38():
    deopt 131 [];
  L24(r109):
    st datalist = r109;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L180() else L181();
  L29(r124):
    st rn = r124;
    sym13 = ldf `.External2`;
    base13 = ldf `.External2` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L192() else L193();
  L161():
    goto L19(r82);
  L163():
    p30 = prom<V +>{
      sprintf = ldf sprintf;
      p26 = prom<V +>{
        ngettext = ldf ngettext;
        p25 = prom<V +>{
          sym6 = ldf sum;
          base6 = ldf sum in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L1() else L2();
        L0(r84):
          return r84;
        L1():
          has_class2 = ld has_class;
          has_class3 = force? has_class2;
          checkMissing(has_class3);
          sum = ldf sum in base;
          r85 = dyn sum(has_class3);
          goto L0(r85);
        L2():
          r83 = dyn base6(<sym has_class>);
          goto L0(r83);
        };
        r87 = dyn ngettext(p25, "class discarded from column %s", "classes discarded from columns %s");
        return r87;
      };
      p29 = prom<V +>{
        paste = ldf paste;
        p28 = prom<V +>{
          sQuote = ldf sQuote;
          p27 = prom<V +>{
            sym7 = ldf names;
            base7 = ldf names in base;
            guard7 = `==`.4(sym7, base7);
            if guard7 then L2() else L3();
          L0(r90):
            c36 = `is.object`(r90);
            if c36 then L4() else L5(r90);
          L2():
            name25 = ld name;
            name26 = force? name25;
            checkMissing(name26);
            names = ldf names in base;
            r91 = dyn names(name26);
            goto L0(r91);
          L3():
            r89 = dyn base7(<sym name>);
            goto L0(r89);
          L1(dx9):
            return dx9;
          L4():
            dr8 = tryDispatchBuiltin.1("[", r90);
            dc4 = getTryDispatchBuiltinDispatched(dr8);
            if dc4 then L6() else L5(dr8);
          L5(r93):
            has_class4 = ld has_class;
            has_class5 = force? has_class4;
            __ = ldf `[` in base;
            r94 = dyn __(r93, has_class5);
            goto L1(r94);
          L6():
            dx8 = getTryDispatchBuiltinValue(dr8);
            goto L1(dx8);
          };
          r96 = dyn sQuote(p27);
          return r96;
        };
        r98 = dyn paste[, collapse](p28, ", ");
        return r98;
      };
      r100 = dyn sprintf(p26, p29);
      return r100;
    };
    r102 = dyn warning[, domain, `call.`, `immediate.`](p30, NA_LGL, FALSE, TRUE);
    check L164() else D39();
  L171():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L173() else L174();
  L172():
    r108 = dyn base8(<lang list(row.names=row.names(name))>, <sym datalist>);
    goto L24(r108);
  L188():
    name29 = ld name;
    check L190() else D51();
  L189():
    r123 = dyn base12(<sym name>, "row.names");
    goto L29(r123);
  D39():
    deopt 139 [r102];
  D51():
    deopt 185 [name29];
  L25(r111):
    datalist2 = ld datalist;
    check L178() else D46();
  L26(r117):
    st modes = r117;
    goto L28();
  L30(r127):
    st out = r127;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L198() else L199();
  L164():
    goto L21(r102);
  L173():
    row_names1 = ldf `row.names`;
    check L175() else D43();
  L174():
    r110 = dyn base9[`row.names`](<lang row.names(name)>);
    goto L25(r110);
  L180():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L182() else L183();
  L181():
    r116 = dyn base10(<lang list(row.names="character")>, <sym modes>);
    goto L26(r116);
  L190():
    name30 = force? name29;
    checkMissing(name30);
    attr = ldf attr in base;
    r125 = dyn attr(name30, "row.names");
    check L191() else D52();
  L192():
    C_dataentry = ld C_dataentry;
    check L194() else D53();
  L193():
    r126 = dyn base13(<sym C_dataentry>, <sym datalist>, <sym modes>);
    goto L30(r126);
  D43():
    deopt 157 [];
  D46():
    deopt 163 [datalist2];
  D52():
    deopt 189 [r125];
  D53():
    deopt 193 [C_dataentry];
  L27(r119):
    modes = ld modes;
    check L185() else D49();
  L31(r130):
    r132 = `==`(r130, 0);
    c40 = `as.logical`(r132);
    if c40 then L202() else L32();
  L175():
    p33 = prom<V +>{
      name27 = ld name;
      name28 = force? name27;
      checkMissing(name28);
      return name28;
    };
    r113 = dyn row_names1(p33);
    check L176() else D44();
  L178():
    datalist3 = force? datalist2;
    checkMissing(datalist3);
    c38 = ldf c in base;
    r115 = dyn c38(r111, datalist3);
    check L179() else D47();
  L182():
    list1 = ldf list in base;
    r120 = dyn list1("character");
    check L184() else D48();
  L183():
    r118 = dyn base11[`row.names`]("character");
    goto L27(r118);
  L191():
    goto L29(r125);
  L194():
    C_dataentry1 = force? C_dataentry;
    checkMissing(C_dataentry1);
    datalist4 = ld datalist;
    check L195() else D54();
  L198():
    out = ld out;
    check L200() else D57();
  L199():
    r129 = dyn base14(<sym out>);
    goto L31(r129);
  D44():
    deopt 159 [r113];
  D47():
    deopt 166 [r115];
  D48():
    deopt 175 [r120];
  D49():
    deopt 176 [modes];
  D54():
    deopt 195 [datalist4];
  D57():
    deopt 204 [out];
  L32():
    lengths = ldf lengths;
    check L206() else D60();
  L176():
    list = ldf list in base;
    r114 = dyn list(r113);
    check L177() else D45();
  L179():
    goto L24(r115);
  L184():
    goto L27(r120);
  L185():
    modes1 = force? modes;
    checkMissing(modes1);
    c39 = ldf c in base;
    r121 = dyn c39(r119, modes1);
    check L186() else D50();
  L195():
    datalist5 = force? datalist4;
    checkMissing(datalist5);
    modes2 = ld modes;
    check L196() else D55();
  L200():
    out1 = force? out;
    checkMissing(out1);
    length2 = ldf length in base;
    r131 = dyn length2(out1);
    check L201() else D58();
  L202():
    name31 = ld name;
    check L203() else D59();
  D45():
    deopt 162 [r114];
  D50():
    deopt 179 [r121];
  D55():
    deopt 197 [modes2];
  D58():
    deopt 207 [r131];
  D59():
    deopt 210 [name31];
  D60():
    deopt 216 [];
  L177():
    goto L25(r114);
  L186():
    goto L26(r121);
  L196():
    modes3 = force? modes2;
    checkMissing(modes3);
    _External2 = ldf `.External2` in base;
    r128 = dyn _External2(C_dataentry1, datalist5, modes3);
    check L197() else D56();
  L201():
    goto L31(r131);
  L203():
    name32 = force? name31;
    checkMissing(name32);
    popenv;
    return name32;
  L206():
    p34 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r136 = dyn lengths(p34);
    check L207() else D61();
  D56():
    deopt 200 [r128];
  D61():
    deopt 218 [r136];
  L197():
    goto L30(r128);
  L207():
    st lengths = r136;
    sym15 = ldf max;
    base15 = ldf max in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L208() else L209();
  L34(r138):
    st maxlength = r138;
    edit_row_names3 = ld `edit.row.names`;
    check L212() else D64();
  L208():
    lengths1 = ld lengths;
    check L210() else D62();
  L209():
    r137 = dyn base15(<sym lengths>);
    goto L34(r137);
  D62():
    deopt 222 [lengths1];
  D64():
    deopt 227 [edit_row_names3];
  L210():
    lengths2 = force? lengths1;
    checkMissing(lengths2);
    max = ldf max in base;
    r139 = dyn max(lengths2);
    check L211() else D63();
  L212():
    edit_row_names4 = force? edit_row_names3;
    checkMissing(edit_row_names4);
    c41 = `as.logical`(edit_row_names4);
    if c41 then L213() else L35();
  D63():
    deopt 225 [r139];
  L35():
    goto L37();
  L37():
    which2 = ldf which;
    check L219() else D66();
  L211():
    goto L34(r139);
  L213():
    out4 = ld out;
    check L214() else D65();
  D65():
    deopt 229 [out4];
  D66():
    deopt 238 [];
  L214():
    out5 = force? out4;
    checkMissing(out5);
    c42 = `is.object`(out5);
    if c42 then L215() else L216(out5);
  L219():
    p35 = prom<V +>{
      lengths3 = ld lengths;
      lengths4 = force? lengths3;
      checkMissing(lengths4);
      maxlength = ld maxlength;
      maxlength1 = force? maxlength;
      checkMissing(maxlength1);
      r141 = `!=`(lengths4, maxlength1);
      return r141;
    };
    r143 = dyn which2(p35);
    check L220() else D67();
  D67():
    deopt 240 [r143];
  L36(dx11):
    st rn = dx11;
    goto L37();
  L215():
    dr10 = tryDispatchBuiltin.1("[[", out5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L217() else L216(dr10);
  L216(out7):
    __1 = ldf `[[` in base;
    r140 = dyn __1(out7, 1);
    goto L36(r140);
  L220():
    s = toForSeq(r143);
    l = length(s);
    i = 0;
    goto L38(i);
  L38(i1):
    i2 = `+`.1(i1, 1);
    c43 = `<`.1(l, i2);
    if c43 then L221() else L44();
  L217():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L36(dx10);
  L44():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L222() else L223();
  L221():
    edit_row_names5 = ld `edit.row.names`;
    check L243() else D76();
  D76():
    deopt 270 [edit_row_names5];
  L39(i7, r145):
    l1 = ld out;
    c47 = `is.object`(l1);
    if c47 then L239() else L240(i7, r145, l1);
  L222():
    out8 = ld out;
    check L224() else D68();
  L223():
    r144 = dyn base16(<lang `[[`(out, i)>, <lang rep.int(NA_LGL, `-`(maxlength, `[`(lengths, i)))>);
    goto L39(i2, r144);
  L243():
    edit_row_names6 = force? edit_row_names5;
    checkMissing(edit_row_names6);
    c48 = `as.logical`(edit_row_names6);
    if c48 then L244() else L45();
  D68():
    deopt 243 [i2, out8];
  L43(i26, dx18):
    st out = dx18;
    goto L38(i26);
  L45():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L263() else L264();
  L51():
    factors = ld factors;
    check L273() else D89();
  L224():
    out9 = force? out8;
    checkMissing(out9);
    c44 = `is.object`(out9);
    if c44 then L225() else L226(i2, out9);
  L239():
    dr16 = tryDispatchBuiltin.0("[[<-", l1, r145);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L241() else L240(i7, r145, dr16);
  L240(i24, r154, l3):
    i27 = ld i;
    check L242() else D75();
  L244():
    out12 = ld out;
    check L245() else D77();
  D75():
    deopt 263 [i24, r154, l3, r145, i27];
  D77():
    deopt 272 [out12];
  D89():
    deopt 316 [factors];
  L40(i11, dx14):
    sym17 = ldf `rep.int`;
    base17 = ldf `rep.int` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L229() else L230();
  L52(r173):
    maxlength12 = ld maxlength;
    check L267() else D87();
  L225():
    dr12 = tryDispatchBuiltin.1("[[", out9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L227() else L226(i2, dr12);
  L226(i9, out11):
    i12 = ld i;
    check L228() else D69();
  L241():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L43(i7, dx17);
  L242():
    i28 = force? i27;
    ____ = ldf `[[<-` in base;
    r157 = dyn ____(l3, r145, i28);
    goto L43(i24, r157);
  L245():
    out13 = force? out12;
    checkMissing(out13);
    c49 = `is.object`(out13);
    if c49 then L246() else L247(out13);
  L263():
    rn4 = ld rn;
    check L265() else D85();
  L264():
    r172 = dyn base20(<sym rn>);
    goto L52(r172);
  L273():
    factors1 = force? factors;
    checkMissing(factors1);
    s1 = toForSeq(factors1);
    l4 = length(s1);
    i29 = 0;
    goto L55(i29);
  D69():
    deopt 245 [i9, out11, i12];
  D85():
    deopt 303 [rn4];
  D87():
    deopt 306 [r173, maxlength12];
  L41(i16, r148):
    c46 = ldf c in base;
    r152 = dyn c46(dx14, r148);
    check L238() else D74();
  L46(dx20):
    st out = dx20;
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L249() else L250();
  L55(i30):
    i31 = `+`.1(i30, 1);
    c53 = `<`.1(l4, i31);
    if c53 then L274() else L77();
  L227():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L40(i2, dx13);
  L228():
    i13 = force? i12;
    __2 = ldf `[[` in base;
    r146 = dyn __2(out11, i13);
    goto L40(i9, r146);
  L229():
    maxlength2 = ld maxlength;
    check L231() else D70();
  L230():
    r147 = dyn base17(NA_LGL, <lang `-`(maxlength, `[`(lengths, i))>);
    goto L41(i11, r147);
  L246():
    dr18 = tryDispatchBuiltin.1("[", out13);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L248() else L247(dr18);
  L247(out15):
    __4 = ldf `[` in base;
    r158 = dyn __4(out15, -1);
    goto L46(r158);
  L265():
    rn5 = force? rn4;
    checkMissing(rn5);
    length4 = ldf length in base;
    r174 = dyn length4(rn5);
    check L266() else D86();
  L267():
    maxlength13 = force? maxlength12;
    checkMissing(maxlength13);
    r175 = `!=`(r173, maxlength13);
    c52 = `as.logical`(r175);
    if c52 then L268() else L53();
  D70():
    deopt 251 [i11, maxlength2];
  D74():
    deopt 261 [i16, r152];
  D86():
    deopt 306 [r174];
  L47(r160):
    st ln = r160;
    maxlength8 = ld maxlength;
    check L253() else D80();
  L53():
    goto L51();
  L77():
    x1 = `[[`(s1, i31, NULL, TRUE);
    st i = x1;
    factor_mode3 = ld `factor.mode`;
    check L275() else D90();
  L231():
    maxlength3 = force? maxlength2;
    checkMissing(maxlength3);
    lengths5 = ld lengths;
    check L232() else D71();
  L238():
    goto L39(i16, r152);
  L248():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L46(dx19);
  L249():
    rn = ld rn;
    check L251() else D78();
  L250():
    r159 = dyn base18(<sym rn>);
    goto L47(r159);
  L266():
    goto L52(r174);
  L268():
    sym21 = ldf seq_len;
    base21 = ldf seq_len in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L269() else L270();
  L274():
    logicals = ld logicals;
    check L374() else D135();
  D71():
    deopt 252 [i11, maxlength3, lengths5];
  D78():
    deopt 280 [rn];
  D80():
    deopt 284 [r160, maxlength8];
  D90():
    deopt 318 [i31, factor_mode3];
  D135():
    deopt 478 [logicals];
  L54(r177):
    st rn = r177;
    goto L51();
  L232():
    lengths6 = force? lengths5;
    checkMissing(lengths6);
    c45 = `is.object`(lengths6);
    if c45 then L233() else L234(i11, maxlength3, lengths6);
  L251():
    rn1 = force? rn;
    checkMissing(rn1);
    length3 = ldf length in base;
    r161 = dyn length3(rn1);
    check L252() else D79();
  L253():
    maxlength9 = force? maxlength8;
    checkMissing(maxlength9);
    r162 = `<`(r160, maxlength9);
    c50 = `as.logical`(r162);
    if c50 then L254() else L48();
  L269():
    maxlength14 = ld maxlength;
    check L271() else D88();
  L270():
    r176 = dyn base21(<sym maxlength>);
    goto L54(r176);
  L275():
    factor_mode4 = force? factor_mode3;
    checkMissing(factor_mode4);
    mode2 = ldf mode;
    check L276() else D91();
  L374():
    logicals1 = force? logicals;
    checkMissing(logicals1);
    s2 = toForSeq(logicals1);
    l13 = length(s2);
    i119 = 0;
    goto L78(i119);
  D79():
    deopt 283 [r161];
  D88():
    deopt 310 [maxlength14];
  D91():
    deopt 320 [i31, factor_mode4];
  L42(i20, maxlength7, dx16):
    r150 = `-`(maxlength7, dx16);
    rep_int = ldf `rep.int` in base;
    r151 = dyn rep_int(NA_LGL, r150);
    check L237() else D73();
  L48():
    goto L50(NULL);
  L50(r170):
    goto L51();
  L78(i120):
    i121 = `+`.1(i120, 1);
    c73 = `<`.1(l13, i121);
    if c73 then L375() else L82();
  L233():
    dr14 = tryDispatchBuiltin.1("[", lengths6);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L235() else L234(i11, maxlength3, dr14);
  L234(i18, maxlength5, lengths8):
    i21 = ld i;
    check L236() else D72();
  L252():
    goto L47(r161);
  L254():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L255() else L256();
  L271():
    maxlength15 = force? maxlength14;
    checkMissing(maxlength15);
    r178 = seq_len(maxlength15);
    goto L54(r178);
  L276():
    p37 = prom<V +>{
      out16 = ld out;
      out17 = force? out16;
      checkMissing(out17);
      c54 = `is.object`(out17);
      if c54 then L1() else L2(out17);
    L0(dx22):
      return dx22;
    L1():
      dr20 = tryDispatchBuiltin.1("[[", out17);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(out19):
      i34 = ld i;
      i35 = force? i34;
      __5 = ldf `[[` in base;
      r179 = dyn __5(out19, i35);
      goto L0(r179);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx21);
    };
    r181 = dyn mode2(p37);
    check L277() else D92();
  D72():
    deopt 254 [i18, maxlength5, lengths8, i21];
  D73():
    deopt 259 [i20, r151];
  D92():
    deopt 322 [i31, factor_mode4, r181];
  L49(r164):
    st rn = r164;
    goto L50(r164);
  L82():
    x2 = `[[`(s2, i121, NULL, TRUE);
    st i = x2;
    sym34 = ldf `as.logical`;
    base34 = ldf `as.logical` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L376() else L377();
  L235():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L42(i11, maxlength3, dx15);
  L236():
    i22 = force? i21;
    __3 = ldf `[` in base;
    r149 = dyn __3(lengths8, i22);
    goto L42(i18, maxlength5, r149);
  L237():
    goto L41(i20, r151);
  L255():
    rn2 = ld rn;
    check L257() else D81();
  L256():
    r163 = dyn base19(<sym rn>, <lang paste0("row", `:`(`(`(`+`(ln, 1.0)), maxlength))>);
    goto L49(r163);
  L277():
    r182 = `!=`(factor_mode4, r181);
    c55 = `as.logical`(r182);
    if c55 then L278() else L56();
  L375():
    rn6 = ld rn;
    check L388() else D140();
  D81():
    deopt 289 [rn2];
  D140():
    deopt 497 [rn6];
  L56():
    attrlist = ld attrlist;
    check L281() else D93();
  L79(i126, r281):
    l14 = ld out;
    c75 = `is.object`(l14);
    if c75 then L384() else L385(i126, r281, l14);
  L257():
    rn3 = force? rn2;
    checkMissing(rn3);
    paste1 = ldf paste0;
    check L258() else D82();
  L278():
    goto L55(i31);
  L376():
    out32 = ld out;
    check L378() else D136();
  L377():
    r280 = dyn base34(<lang `[[`(out, i)>);
    goto L79(i121, r280);
  L388():
    rn7 = force? rn6;
    checkMissing(rn7);
    l17 = ld out;
    attr__ = ldf `attr<-`;
    check L389() else D141();
  D82():
    deopt 292 [];
  D93():
    deopt 328 [i31, attrlist];
  D136():
    deopt 482 [i121, out32];
  D141():
    deopt 500 [rn7, l17, rn7];
  L81(i136, dx50):
    st out = dx50;
    goto L78(i136);
  L258():
    p36 = prom<V +>{
      ln = ld ln;
      ln1 = force? ln;
      checkMissing(ln1);
      r165 = `+`(ln1, 1.0);
      maxlength10 = ld maxlength;
      maxlength11 = force? maxlength10;
      checkMissing(maxlength11);
      r166 = `:`(r165, maxlength11);
      return r166;
    };
    r168 = dyn paste1("row", p36);
    check L259() else D83();
  L281():
    attrlist1 = force? attrlist;
    checkMissing(attrlist1);
    c56 = `is.object`(attrlist1);
    if c56 then L282() else L283(i31, attrlist1);
  L378():
    out33 = force? out32;
    checkMissing(out33);
    c74 = `is.object`(out33);
    if c74 then L379() else L380(i121, out33);
  L384():
    dr48 = tryDispatchBuiltin.0("[[<-", l14, r281);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L386() else L385(i126, r281, dr48);
  L385(i134, r285, l16):
    i137 = ld i;
    check L387() else D139();
  L389():
    r289 = dyn attr__(l17, NULL, "row.names", rn7);
    check L390() else D142();
  D83():
    deopt 295 [r168];
  D139():
    deopt 490 [i134, r285, l16, r281, i137];
  D142():
    deopt 503 [rn7, r289];
  L58(i43, dx24):
    st a = dx24;
    factor_mode5 = ld `factor.mode`;
    check L286() else D95();
  L80(i130, dx48):
    as_logical = ldf `as.logical` in base;
    r283 = dyn as_logical(dx48);
    check L383() else D138();
  L259():
    c51 = ldf c in base;
    r169 = dyn c51(rn3, r168);
    check L260() else D84();
  L282():
    dr22 = tryDispatchBuiltin.1("[[", attrlist1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L284() else L283(i31, dr22);
  L283(i41, attrlist3):
    i44 = ld i;
    check L285() else D94();
  L379():
    dr46 = tryDispatchBuiltin.1("[[", out33);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L381() else L380(i121, dr46);
  L380(i128, out35):
    i131 = ld i;
    check L382() else D137();
  L386():
    dx49 = getTryDispatchBuiltinValue(dr48);
    goto L81(i126, dx49);
  L387():
    i138 = force? i137;
    ____2 = ldf `[[<-` in base;
    r288 = dyn ____2(l16, r281, i138);
    goto L81(i134, r288);
  L390():
    st out = r289;
    l18 = ld out;
    attr__1 = ldf `attr<-`;
    check L391() else D143();
  D84():
    deopt 297 [r169];
  D94():
    deopt 330 [i41, attrlist3, i44];
  D95():
    deopt 334 [i43, factor_mode5];
  D137():
    deopt 484 [i128, out35, i131];
  D138():
    deopt 488 [i130, r283];
  D143():
    deopt 508 ["data.frame", l18, "data.frame"];
  L260():
    goto L49(r169);
  L284():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L58(i31, dx23);
  L285():
    i45 = force? i44;
    __6 = ldf `[[` in base;
    r184 = dyn __6(attrlist3, i45);
    goto L58(i41, r184);
  L286():
    factor_mode6 = force? factor_mode5;
    checkMissing(factor_mode6);
    r185 = `==`(factor_mode6, "numeric");
    c57 = `as.logical`(r185);
    if c57 then L287() else L59();
  L381():
    dx47 = getTryDispatchBuiltinValue(dr46);
    goto L80(i121, dx47);
  L382():
    i132 = force? i131;
    __12 = ldf `[[` in base;
    r282 = dyn __12(out35, i132);
    goto L80(i128, r282);
  L383():
    goto L79(i130, r283);
  L391():
    r290 = dyn attr__1(l18, NULL, "class", "data.frame");
    check L392() else D144();
  D144():
    deopt 511 ["data.frame", r290];
  L59():
    out26 = ld out;
    check L326() else D113();
  L68(i79):
    o25 = ld o;
    check L369() else D133();
  L287():
    sym22 = ldf `as.integer`;
    base22 = ldf `as.integer` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L288() else L289();
  L392():
    st out = r290;
    edit_row_names7 = ld `edit.row.names`;
    check L393() else D145();
  D113():
    deopt 398 [i43, out26];
  D133():
    deopt 468 [i79, o25];
  D145():
    deopt 513 [edit_row_names7];
  L60(i50, r187):
    st o = r187;
    sym23 = ldf `is.na`;
    base23 = ldf `is.na` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L296() else L297();
  L288():
    out20 = ld out;
    check L290() else D96();
  L289():
    r186 = dyn base22(<lang `[[`(out, i)>);
    goto L60(i43, r186);
  L326():
    out27 = force? out26;
    checkMissing(out27);
    c63 = `is.object`(out27);
    if c63 then L327() else L328(i43, out27);
  L369():
    o26 = force? o25;
    checkMissing(o26);
    l10 = ld out;
    c72 = `is.object`(l10);
    if c72 then L370() else L371(i79, o26, l10);
  L393():
    edit_row_names8 = force? edit_row_names7;
    checkMissing(edit_row_names8);
    c76 = `as.logical`(edit_row_names8);
    if c76 then L394() else L83();
  D96():
    deopt 340 [i43, out20];
  L62(i59, r191):
    o2 = ld o;
    check L300() else D101();
  L69(i83, dx34):
    st o = dx34;
    sym27 = ldf any;
    base27 = ldf any in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L331() else L332();
  L76(i116, dx46):
    st out = dx46;
    goto L55(i116);
  L83():
    goto L87();
  L87():
    out36 = ld out;
    check L407() else D153();
  L290():
    out21 = force? out20;
    checkMissing(out21);
    c58 = `is.object`(out21);
    if c58 then L291() else L292(i43, out21);
  L296():
    o = ld o;
    check L298() else D99();
  L297():
    r190 = dyn base23(<sym o>);
    goto L62(i50, r190);
  L327():
    dr32 = tryDispatchBuiltin.1("[[", out27);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L329() else L328(i43, dr32);
  L328(i81, out29):
    i84 = ld i;
    check L330() else D114();
  L370():
    dr44 = tryDispatchBuiltin.0("[[<-", l10, o26);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L372() else L371(i79, o26, dr44);
  L371(i114, o28, l12):
    i117 = ld i;
    check L373() else D134();
  L394():
    anyDuplicated = ldf anyDuplicated;
    check L395() else D146();
  D99():
    deopt 350 [i50, o];
  D101():
    deopt 353 [i59, r191, o2];
  D114():
    deopt 400 [i81, out29, i84];
  D134():
    deopt 471 [i114, o28, l12, o26, i117];
  D146():
    deopt 516 [];
  D153():
    deopt 537 [out36];
  L61(i54, dx26):
    as_integer = ldf `as.integer` in base;
    r189 = dyn as_integer(dx26);
    check L295() else D98();
  L70(i88, r239):
    c66 = `as.logical`(r239);
    if c66 then L349() else L74();
  L291():
    dr24 = tryDispatchBuiltin.1("[[", out21);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L293() else L292(i43, dr24);
  L292(i52, out23):
    i55 = ld i;
    check L294() else D97();
  L298():
    o1 = force? o;
    checkMissing(o1);
    is_na = ldf `is.na` in base;
    r192 = dyn is_na(o1);
    check L299() else D100();
  L300():
    o3 = force? o2;
    checkMissing(o3);
    r193 = `>`(o3, 0.0);
    o4 = ld o;
    check L301() else D102();
  L329():
    dx33 = getTryDispatchBuiltinValue(dr32);
    goto L69(i43, dx33);
  L330():
    i85 = force? i84;
    __9 = ldf `[[` in base;
    r237 = dyn __9(out29, i85);
    goto L69(i81, r237);
  L331():
    sym28 = ldf `is.na`;
    base28 = ldf `is.na` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L333() else L334();
  L332():
    r238 = dyn base27(<lang `<-`(new, is.na(match(o, c(`$`(a, levels), NA_INT))))>);
    goto L70(i83, r238);
  L372():
    dx45 = getTryDispatchBuiltinValue(dr44);
    goto L76(i79, dx45);
  L373():
    i118 = force? i117;
    ____1 = ldf `[[<-` in base;
    r279 = dyn ____1(l12, o26, i118);
    goto L76(i114, r279);
  L395():
    p47 = prom<V +>{
      rn8 = ld rn;
      rn9 = force? rn8;
      checkMissing(rn9);
      return rn9;
    };
    r292 = dyn anyDuplicated(p47);
    check L396() else D147();
  L407():
    out37 = force? out36;
    checkMissing(out37);
    popenv;
    return out37;
  D97():
    deopt 342 [i52, out23, i55];
  D98():
    deopt 346 [i54, r189];
  D100():
    deopt 353 [i50, r192];
  D102():
    deopt 356 [i59, r191, r193, o4];
  D147():
    deopt 518 [r292];
  L71(i91, r241):
    st new = r241;
    any3 = ldf any in base;
    r250 = dyn any3(r241);
    check L348() else D120();
  L74():
    sym33 = ldf match;
    base33 = ldf match in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L357() else L358();
  L293():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L61(i43, dx25);
  L294():
    i56 = force? i55;
    __7 = ldf `[[` in base;
    r188 = dyn __7(out23, i56);
    goto L61(i52, r188);
  L295():
    goto L60(i54, r189);
  L299():
    goto L62(i50, r192);
  L301():
    o5 = force? o4;
    checkMissing(o5);
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L302() else L303();
  L333():
    sym29 = ldf match;
    base29 = ldf match in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L335() else L336();
  L334():
    r240 = dyn base28(<lang match(o, c(`$`(a, levels), NA_INT))>);
    goto L71(i83, r240);
  L349():
    unique = ldf unique;
    check L350() else D121();
  L396():
    c77 = `as.logical`(r292);
    if c77 then L397() else L84();
  D120():
    deopt 428 [i91, r250];
  D121():
    deopt 430 [i88];
  L63(i62, r199, r200, o8, r201):
    r212 = `<=`(o8, r201);
    r213 = `&&`(r200, r212);
    r214 = `||`(r199, r213);
    st ok = r214;
    sym25 = ldf any;
    base25 = ldf any in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L310() else L311();
  L72(i94, r243):
    is_na1 = ldf `is.na` in base;
    r249 = dyn is_na1(r243);
    check L347() else D119();
  L75(i108, r275):
    st o = r275;
    a19 = ld a;
    check L366() else D130();
  L84():
    goto L86(NULL);
  L86(r298):
    goto L87();
  L302():
    a = ld a;
    check L304() else D103();
  L303():
    r198 = dyn base24(<lang `$`(a, levels)>);
    goto L63(i59, r191, r193, o5, r198);
  L335():
    o13 = ld o;
    check L337() else D115();
  L336():
    r242 = dyn base29(<sym o>, <lang c(`$`(a, levels), NA_INT)>);
    goto L72(i83, r242);
  L348():
    goto L70(i91, r250);
  L350():
    p40 = prom<V +>{
      o15 = ld o;
      o16 = force? o15;
      checkMissing(o16);
      c67 = `is.object`(o16);
      if c67 then L1() else L2(o16);
    L0(dx38):
      return dx38;
    L1():
      dr36 = tryDispatchBuiltin.1("[", o16);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(o18):
      new = ld new;
      new1 = force? new;
      __10 = ldf `[` in base;
      r251 = dyn __10(o18, new1);
      goto L0(r251);
    L3():
      dx37 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx37);
    };
    r253 = dyn unique(p40);
    check L351() else D122();
  L357():
    o23 = ld o;
    check L359() else D127();
  L358():
    r274 = dyn base33(<sym o>, <lang `$`(a, levels)>);
    goto L75(i88, r274);
  L397():
    warning3 = ldf warning;
    check L398() else D148();
  D103():
    deopt 359 [i59, r191, r193, o5, a];
  D115():
    deopt 410 [i83, o13];
  D119():
    deopt 425 [i94, r249];
  D122():
    deopt 432 [i88, r253];
  D127():
    deopt 451 [i88, o23];
  D130():
    deopt 461 [i108, a19];
  D148():
    deopt 520 [];
  L64(i69, r216):
    c60 = `as.logical`(r216);
    if c60 then L314() else L65();
  L304():
    a1 = force? a;
    checkMissing(a1);
    c59 = `is.object`(a1);
    if c59 then L306() else L307(i59, r191, r193, o5, a1);
  L310():
    ok = ld ok;
    check L312() else D105();
  L311():
    r215 = dyn base25(<lang `!`(ok)>);
    goto L64(i62, r215);
  L337():
    o14 = force? o13;
    checkMissing(o14);
    sym30 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L338() else L339();
  L347():
    goto L71(i94, r249);
  L351():
    st new = r253;
    warning2 = ldf warning;
    check L352() else D123();
  L359():
    o24 = force? o23;
    checkMissing(o24);
    a15 = ld a;
    check L360() else D128();
  L366():
    a20 = force? a19;
    checkMissing(a20);
    l9 = ld o;
    attributes__1 = ldf `attributes<-`;
    check L367() else D131();
  L398():
    r293 = dyn warning3("edited row names contain duplicates and will be ignored");
    check L399() else D149();
  D105():
    deopt 370 [i62, ok];
  D123():
    deopt 435 [i88];
  D128():
    deopt 453 [i88, a15];
  D131():
    deopt 464 [i108, a20, l9, a20];
  D149():
    deopt 522 [r293];
  L65():
    goto L67(i69);
  L67(i78):
    a4 = ld a;
    check L322() else D110();
  L73(i97, r245):
    match = ldf match in base;
    r248 = dyn match(o14, r245, NA_INT, NULL);
    check L346() else D118();
  L305(i66, r208, r209, o12, dx28):
    length5 = ldf length in base;
    r211 = dyn length5(dx28);
    check L309() else D104();
  L306():
    dr26 = tryDispatchBuiltin.1("$", a1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L308() else L307(i59, r191, r193, o5, dr26);
  L307(i64, r204, r205, o10, a3):
    r210 = `$`(a3, <sym levels>);
    goto L305(i64, r204, r205, o10, r210);
  L312():
    ok1 = force? ok;
    checkMissing(ok1);
    r217 = `!`(ok1);
    any2 = ldf any in base;
    r218 = dyn any2(r217);
    check L313() else D106();
  L314():
    warning1 = ldf warning;
    check L315() else D107();
  L338():
    a7 = ld a;
    check L340() else D116();
  L339():
    r244 = dyn base30(<lang `$`(a, levels)>, NA_INT);
    goto L73(i83, r244);
  L352():
    p42 = prom<V +>{
      gettextf1 = ldf gettextf;
      p41 = prom<V +>{
        sym31 = ldf names;
        base31 = ldf names in base;
        guard31 = `==`.4(sym31, base31);
        if guard31 then L2() else L3();
      L0(r255):
        c68 = `is.object`(r255);
        if c68 then L4() else L5(r255);
      L2():
        out30 = ld out;
        out31 = force? out30;
        checkMissing(out31);
        names2 = ldf names in base;
        r256 = dyn names2(out31);
        goto L0(r256);
      L3():
        r254 = dyn base31(<sym out>);
        goto L0(r254);
      L1(dx40):
        return dx40;
      L4():
        dr38 = tryDispatchBuiltin.1("[", r255);
        dc19 = getTryDispatchBuiltinDispatched(dr38);
        if dc19 then L6() else L5(dr38);
      L5(r258):
        i104 = ld i;
        i105 = force? i104;
        __11 = ldf `[` in base;
        r259 = dyn __11(r258, i105);
        goto L1(r259);
      L6():
        dx39 = getTryDispatchBuiltinValue(dr38);
        goto L1(dx39);
      };
      r261 = dyn gettextf1("added factor levels in '%s'", p41);
      return r261;
    };
    r263 = dyn warning2[, domain](p42, NA_LGL);
    check L353() else D124();
  L360():
    a16 = force? a15;
    checkMissing(a16);
    c71 = `is.object`(a16);
    if c71 then L362() else L363(i88, a16);
  L367():
    r278 = dyn attributes__1(l9, NULL, a20);
    check L368() else D132();
  L399():
    sym35 = ldf seq_len;
    base35 = ldf seq_len in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L400() else L401();
  D104():
    deopt 363 [i66, r208, r209, o12, r211];
  D106():
    deopt 374 [i62, r218];
  D107():
    deopt 376 [i69];
  D110():
    deopt 391 [i78, a4];
  D116():
    deopt 414 [i83, a7];
  D118():
    deopt 423 [i97, r248];
  D124():
    deopt 439 [i88, r263];
  D132():
    deopt 466 [i108, a20, r278];
  L85(r295):
    l19 = ld out;
    attr__2 = ldf `attr<-`;
    check L403() else D151();
  L308():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L305(i59, r191, r193, o5, dx27);
  L309():
    goto L63(i66, r208, r209, o12, r211);
  L313():
    goto L64(i62, r218);
  L315():
    p39 = prom<V +>{
      gettextf = ldf gettextf;
      p38 = prom<V +>{
        sym26 = ldf names;
        base26 = ldf names in base;
        guard26 = `==`.4(sym26, base26);
        if guard26 then L2() else L3();
      L0(r220):
        c61 = `is.object`(r220);
        if c61 then L4() else L5(r220);
      L2():
        out24 = ld out;
        out25 = force? out24;
        checkMissing(out25);
        names1 = ldf names in base;
        r221 = dyn names1(out25);
        goto L0(r221);
      L3():
        r219 = dyn base26(<sym out>);
        goto L0(r219);
      L1(dx30):
        return dx30;
      L4():
        dr28 = tryDispatchBuiltin.1("[", r220);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L6() else L5(dr28);
      L5(r223):
        i72 = ld i;
        i73 = force? i72;
        __8 = ldf `[` in base;
        r224 = dyn __8(r223, i73);
        goto L1(r224);
      L6():
        dx29 = getTryDispatchBuiltinValue(dr28);
        goto L1(dx29);
      };
      r226 = dyn gettextf("invalid factor levels in '%s'", p38);
      return r226;
    };
    r228 = dyn warning1[, domain](p39, NA_LGL);
    check L316() else D108();
  L322():
    a5 = force? a4;
    checkMissing(a5);
    l8 = ld o;
    attributes__ = ldf `attributes<-`;
    check L323() else D111();
  L340():
    a8 = force? a7;
    checkMissing(a8);
    c64 = `is.object`(a8);
    if c64 then L342() else L343(i83, a8);
  L346():
    goto L72(i97, r248);
  L353():
    factor = ldf factor;
    check L354() else D125();
  L361(i112, dx44):
    match1 = ldf match in base;
    r277 = dyn match1(o24, dx44, NA_INT, NULL);
    check L365() else D129();
  L362():
    dr42 = tryDispatchBuiltin.1("$", a16);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L364() else L363(i88, dr42);
  L363(i110, a18):
    r276 = `$`(a18, <sym levels>);
    goto L361(i110, r276);
  L368():
    st o = r278;
    goto L68(i108);
  L400():
    maxlength16 = ld maxlength;
    check L402() else D150();
  L401():
    r294 = dyn base35(<sym maxlength>);
    goto L85(r294);
  D108():
    deopt 380 [i69, r228];
  D111():
    deopt 394 [i78, a5, l8, a5];
  D125():
    deopt 441 [i88];
  D129():
    deopt 459 [i112, r277];
  D150():
    deopt 524 [maxlength16];
  D151():
    deopt 528 [r295, l19, r295];
  L316():
    l5 = ld o;
    c62 = `is.object`(l5);
    if c62 then L317() else L318(i69, NA_LGL, l5);
  L323():
    r236 = dyn attributes__(l8, NULL, a5);
    check L324() else D112();
  L341(i101, dx36):
    c65 = ldf c in base;
    r247 = dyn c65(dx36, NA_INT);
    check L345() else D117();
  L342():
    dr34 = tryDispatchBuiltin.1("$", a8);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L344() else L343(i83, dr34);
  L343(i99, a10):
    r246 = `$`(a10, <sym levels>);
    goto L341(i99, r246);
  L354():
    p43 = prom<V +>{
      o19 = ld o;
      o20 = force? o19;
      checkMissing(o20);
      return o20;
    };
    p44 = prom<V +>{
      sym32 = ldf c;
      base32 = ldf c in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L1() else L2();
    L0(r266):
      return r266;
    L1():
      a11 = ld a;
      a12 = force? a11;
      checkMissing(a12);
      c69 = `is.object`(a12);
      if c69 then L4() else L5(a12);
    L2():
      r265 = dyn base32(<lang `$`(a, levels)>, <sym new>);
      goto L0(r265);
    L3(dx42):
      new2 = ld new;
      new3 = force? new2;
      checkMissing(new3);
      c70 = ldf c in base;
      r268 = dyn c70(dx42, new3);
      goto L0(r268);
    L4():
      dr40 = tryDispatchBuiltin.1("$", a12);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L6() else L5(dr40);
    L5(a14):
      r267 = `$`(a14, <sym levels>);
      goto L3(r267);
    L6():
      dx41 = getTryDispatchBuiltinValue(dr40);
      goto L3(dx41);
    };
    p46 = prom<V +>{
      is_ordered = ldf `is.ordered`;
      p45 = prom<V +>{
        o21 = ld o;
        o22 = force? o21;
        checkMissing(o22);
        return o22;
      };
      r271 = dyn is_ordered(p45);
      return r271;
    };
    r273 = dyn factor[, levels, ordered](p43, p44, p46);
    check L355() else D126();
  L364():
    dx43 = getTryDispatchBuiltinValue(dr42);
    goto L361(i88, dx43);
  L365():
    goto L75(i112, r277);
  L402():
    maxlength17 = force? maxlength16;
    checkMissing(maxlength17);
    r296 = seq_len(maxlength17);
    goto L85(r296);
  L403():
    r297 = dyn attr__2(l19, NULL, "row.names", r295);
    check L404() else D152();
  D112():
    deopt 396 [i78, a5, r236];
  D117():
    deopt 419 [i101, r247];
  D126():
    deopt 447 [i88, r273];
  D152():
    deopt 531 [r295, r297];
  L66(i77, r232, dx32):
    st o = dx32;
    goto L67(i77);
  L317():
    dr30 = tryDispatchBuiltin.0("[<-", l5, NA_LGL);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L319() else L318(i69, NA_LGL, dr30);
  L318(i75, r230, l7):
    ok2 = ld ok;
    check L320() else D109();
  L324():
    st o = r236;
    goto L68(i78);
  L344():
    dx35 = getTryDispatchBuiltinValue(dr34);
    goto L341(i83, dx35);
  L345():
    goto L73(i101, r247);
  L355():
    st o = r273;
    goto L68(i88);
  L404():
    st out = r297;
    goto L86(r295);
  D109():
    deopt 384 [i75, r230, l7, NA_LGL, ok2];
  L319():
    dx31 = getTryDispatchBuiltinValue(dr30);
    goto L66(i69, NA_LGL, dx31);
  L320():
    ok3 = force? ok2;
    checkMissing(ok3);
    r233 = `!`(ok3);
    ___ = ldf `[<-` in base;
    r234 = dyn ___(l7, NA_LGL, r233);
    goto L66(i75, r230, r234);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg unclass:cls, reg r4:V, reg is_vector:cls, reg r5:V |
    mkenv;
    st x = x;
    sym = ldf `is.vector`;
    base = ldf `is.vector` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf unclass;
    base1 = ldf unclass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang unclass(x)>);
    goto L0(r);
  L1(r3):
    is_vector = ldf `is.vector` in base;
    r5 = dyn is_vector(r3, "any");
    check L8() else D2();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  D0():
    deopt 4 [x1];
  D2():
    deopt 10 [r5];
  L6():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r4 = dyn unclass(x2);
    check L7() else D1();
  L8():
    goto L0(r5);
  D1():
    deopt 7 [r4];
  L7():
    goto L1(r4);
  }
}