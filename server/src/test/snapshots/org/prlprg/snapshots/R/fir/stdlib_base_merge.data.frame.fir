fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1836075707;
    st `merge.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1836075707(x, y, by, `by.x`, `by.y`, all, `all.x`, `all.y`, sort, suffixes, `no.dups`, incomparables, `...`) {
  (reg x:*, reg y:*, reg by:*, reg by_x:*, reg by_y:*, reg all:*, reg all_x:*, reg all_y:*, reg sort:*, reg suffixes:*, reg no_dups:*, reg incomparables:*, reg ddd:dots) -+> V { var x:*, var y:*, var by:*, reg by_isMissing:L, reg by_orDefault:*, reg intersect:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg y1:*, reg y2:V, reg names1:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), var `by.x`:*, reg by_x_isMissing:L, reg by_x_orDefault:*, reg by1:*, reg by2:V, reg p3:p(V +), var `by.y`:*, reg by_y_isMissing:L, reg by_y_orDefault:*, reg by3:*, reg by4:V, reg p4:p(V +), var all:*, reg all_isMissing:L, reg all_orDefault:*, var `all.x`:*, reg all_x_isMissing:L, reg all_x_orDefault:*, reg all1:*, reg all2:V, reg p5:p(V +), var `all.y`:*, reg all_y_isMissing:L, reg all_y_orDefault:*, reg all3:*, reg all4:V, reg p6:p(V +), var sort:*, reg sort_isMissing:L, reg sort_orDefault:*, var suffixes:*, reg suffixes_isMissing:L, reg suffixes_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c:cls, reg r16:V, reg p7:p(V +), var `no.dups`:*, reg no_dups_isMissing:L, reg no_dups_orDefault:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var `...`:dots?, reg r18:cls, reg nrow:cls, reg as_data_frame:cls, reg x3:*, reg x4:V, reg p8:p(V +), reg r20:V, reg p9:p(V +), reg r22:V, reg nrow1:cls, reg as_data_frame1:cls, reg y3:*, reg y4:V, reg p10:p(V +), reg r24:V, reg p11:p(V +), reg r26:V, reg nx:*, reg nx1:V, reg r27:V, reg c1:L, reg c2:V, reg ny:*, reg ny1:V, reg r28:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg r29:V, reg fix_by:cls, reg by_x1:*, reg by_x2:V, reg p12:p(V +), reg x5:*, reg x6:V, reg p13:p(V +), reg r33:V, reg fix_by1:cls, reg by_y1:*, reg by_y2:V, reg p14:p(V +), reg y5:*, reg y6:V, reg p15:p(V +), reg r36:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg by_x3:*, reg by_x4:V, reg length:cls, reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg r44:V, reg by_y3:*, reg by_y4:V, reg length1:cls, reg r45:V, reg r46:V, reg c8:L, reg stop1:cls, reg r47:V, reg l_b:*, reg l_b1:V, reg r49:V, reg c9:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg x7:*, reg x8:V, reg names2:cls, reg r52:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg y7:*, reg y8:V, reg names3:cls, reg r55:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg _in_:cls, reg nm_x:*, reg nm_x1:V, reg p16:p(V +), reg nm_y:*, reg nm_y1:V, reg p17:p(V +), reg r60:V, reg any:cls, reg r61:V, reg has_common_nms:*, reg has_common_nms1:V, reg c10:L, reg paste0:cls, reg nm_x2:*, reg nm_x3:V, reg c11:L, reg nm_x5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg cnm:*, reg cnm1:V, reg __:cls, reg r62:V, reg p18:p(V +), reg suffixes1:*, reg suffixes2:V, reg c12:L, reg suffixes4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r64:V, reg p19:p(V +), reg r66:V, reg l:*, reg names4:cls, reg r67:V, reg c13:L, reg r70:V, reg l2:*, reg r71:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r73:V, reg l4:*, reg dx5:V, reg cnm2:*, reg cnm3:V, reg ___:cls, reg r74:V, reg names__:cls, reg r75:V, reg _in_1:cls, reg nm_y2:*, reg nm_y3:V, reg p20:p(V +), reg nm:*, reg nm1:V, reg p21:p(V +), reg r78:V, reg paste1:cls, reg nm_y4:*, reg nm_y5:V, reg c14:L, reg nm_y7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg cnm4:*, reg cnm5:V, reg __2:cls, reg r79:V, reg p22:p(V +), reg suffixes5:*, reg suffixes6:V, reg c15:L, reg suffixes8:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r81:V, reg p23:p(V +), reg r83:V, reg l5:*, reg names5:cls, reg r84:V, reg c16:L, reg r87:V, reg l7:*, reg r88:V, reg dr10:V, reg dc5:L, reg dx10:V, reg r90:V, reg l9:*, reg dx11:V, reg cnm6:*, reg cnm7:V, reg ___1:cls, reg r91:V, reg names__1:cls, reg r92:V, reg nx2:*, reg nx3:V, reg r94:V, reg c17:L, reg c18:V, reg ny2:*, reg ny3:V, reg r95:V, reg c20:L, reg c21:V, reg c23:L, reg cbind:cls, reg x9:*, reg x10:V, reg c24:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r96:V, reg p24:p(V +), reg y9:*, reg y10:V, reg c25:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __5:cls, reg r98:V, reg p25:p(V +), reg r100:V, reg r101:V, reg expand_grid:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r102:V, reg r103:V, reg nx4:*, reg nx5:V, reg r104:I, reg p26:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r106:V, reg r107:V, reg ny4:*, reg ny5:V, reg r108:I, reg p27:p(V +), reg r110:V, reg cbind1:cls, reg x13:*, reg x14:V, reg c26:L, reg x16:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg ij:*, reg ij1:V, reg c27:L, reg x18:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __6:cls, reg r111:V, reg __7:cls, reg r112:V, reg p28:p(V +), reg y13:*, reg y14:V, reg c28:L, reg y16:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg ij4:*, reg ij5:V, reg c29:L, reg y18:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg __8:cls, reg r114:V, reg __9:cls, reg r115:V, reg p29:p(V +), reg r117:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r119:V, reg r120:V, reg by_x5:*, reg by_x6:V, reg r121:V, reg any1:cls, reg r122:V, reg c30:L, reg cbind2:cls, reg row_names:cls, reg x21:*, reg x22:V, reg p30:p(V +), reg r124:V, reg p31:p(V +), reg x23:*, reg x24:V, reg p32:p(V +), reg r127:V, reg by_x7:*, reg by_x8:V, reg r128:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r130:V, reg r131:V, reg by_y5:*, reg by_y6:V, reg r132:V, reg any2:cls, reg r133:V, reg c31:L, reg cbind3:cls, reg row_names1:cls, reg y21:*, reg y22:V, reg p33:p(V +), reg r135:V, reg p34:p(V +), reg y23:*, reg y24:V, reg p35:p(V +), reg r138:V, reg by_y7:*, reg by_y8:V, reg r139:V, reg l10:*, reg row_names__:cls, reg r141:V, reg l11:*, reg row_names__1:cls, reg r142:V, reg l_b2:*, reg l_b3:V, reg r143:V, reg c32:L, reg x25:*, reg x26:V, reg c33:L, reg x28:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg by_x9:*, reg by_x10:V, reg __10:cls, reg r144:V, reg is_factor:cls, reg bx:*, reg bx1:V, reg p36:p(V +), reg r146:V, reg c34:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r147:V, reg r148:V, reg bx2:*, reg bx3:V, reg as_character:cls, reg r149:V, reg y25:*, reg y26:V, reg c35:L, reg y28:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg by_y9:*, reg by_y10:V, reg __11:cls, reg r151:V, reg is_factor1:cls, reg by5:*, reg by6:V, reg p37:p(V +), reg r153:V, reg c36:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r154:V, reg r155:V, reg by7:*, reg by8:V, reg as_character1:cls, reg r156:V, reg r157:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r159:V, reg r160:V, reg incomparables1:*, reg incomparables2:V, reg c37:V, reg r161:V, reg c38:L, reg stop2:cls, reg r162:V, reg x29:*, reg x30:V, reg c39:L, reg x32:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg by_x11:*, reg by_x12:V, reg __12:cls, reg r164:V, reg y29:*, reg y30:V, reg c40:L, reg y32:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg by_y11:*, reg by_y12:V, reg __13:cls, reg r165:V, reg paste2:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r166:V, reg r167:V, reg ncol:cls, reg bx4:*, reg bx5:V, reg p38:p(V +), reg r169:V, reg r170:I, reg p39:p(V +), reg r172:V, reg l12:*, reg names__2:cls, reg r173:V, reg l13:*, reg names__3:cls, reg r174:V, reg do_call:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r175:V, reg r176:V, reg rbind:cls, reg bx6:*, reg bx7:V, reg p40:p(V +), reg by9:*, reg by10:V, reg p41:p(V +), reg r179:V, reg c41:cls, reg r180:V, reg p42:p(V +), reg r182:V, reg bz:*, reg bz1:V, reg c42:L, reg bz3:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r183:V, reg bz6:V, reg r184:V, reg nx6:*, reg nx7:V, reg r185:I, reg __14:cls, reg r186:V, reg bz7:*, reg bz8:V, reg c43:L, reg bz10:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg nx8:*, reg nx9:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r187:V, reg bz13:V, reg nx12:V, reg r188:V, reg ny6:*, reg ny7:V, reg r189:I, reg r190:V, reg __15:cls, reg r191:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r192:V, reg r193:V, reg bx8:*, reg bx9:V, reg by11:*, reg by12:V, reg match:cls, reg r194:V, reg bx10:*, reg bx11:V, reg c44:L, reg bx13:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg comm:*, reg comm1:V, reg r195:V, reg __16:cls, reg r196:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r197:V, reg r198:V, reg bx14:*, reg bx15:V, reg bxy:*, reg bxy1:V, reg incomparables3:*, reg incomparables4:V, reg match1:cls, reg r199:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r200:V, reg r201:V, reg by13:*, reg by14:V, reg bxy2:*, reg bxy3:V, reg incomparables5:*, reg incomparables6:V, reg match2:cls, reg r202:V, reg nx13:*, reg nx14:V, reg r203:V, reg c45:L, reg c47:V, reg ny8:*, reg ny9:V, reg r204:V, reg c48:L, reg c49:V, reg c51:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r205:V, reg r206:V, reg xinds:*, reg xinds1:V, reg yinds:*, reg yinds1:V, reg all_x1:*, reg all_x2:V, reg all_y1:*, reg all_y2:V, reg merge:cls, reg r207:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r209:V, reg r210:V, reg integer:cls, reg r211:V, reg integer1:cls, reg r212:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r213:V, reg r214:V, reg nx15:*, reg nx16:V, reg r215:I, reg sym25:cls, reg base25:cls, reg guard25:L, reg r216:V, reg r217:V, reg ny10:*, reg ny11:V, reg r218:I, reg list:cls, reg r219:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r220:V, reg r221:V, reg x33:*, reg x34:V, reg names6:cls, reg r222:V, reg c52:L, reg r224:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg by_x13:*, reg by_x14:V, reg r225:V, reg __17:cls, reg r226:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r227:V, reg r228:V, reg x35:*, reg x36:V, reg names7:cls, reg r229:V, reg c53:L, reg r231:V, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg by_x15:*, reg by_x16:V, reg __18:cls, reg r232:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r233:V, reg r234:V, reg y33:*, reg y34:V, reg names8:cls, reg r235:V, reg c54:L, reg r237:V, reg dr42:V, reg dc21:L, reg dx42:V, reg dx43:V, reg by_y13:*, reg by_y14:V, reg r238:V, reg __19:cls, reg r239:V, reg ncol1:cls, reg x37:*, reg x38:V, reg p43:p(V +), reg r241:V, reg all_x3:*, reg all_x4:V, reg c55:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r242:V, reg r243:V, reg m:*, reg m1:V, reg c56:L, reg m3:V, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg r244:V, reg length2:cls, reg r245:V, reg r246:V, reg all_y3:*, reg all_y4:V, reg c57:L, reg sym30:cls, reg base30:cls, reg guard30:L, reg r248:V, reg r249:V, reg m4:*, reg m5:V, reg c58:L, reg m7:V, reg dr46:V, reg dc23:L, reg dx46:V, reg dx47:V, reg r250:V, reg length3:cls, reg r251:V, reg r252:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r254:V, reg r255:V, reg m8:*, reg m9:V, reg c59:L, reg m11:V, reg dr48:V, reg dc24:L, reg dx48:V, reg dx49:V, reg r256:V, reg length4:cls, reg r257:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r258:V, reg r259:V, reg _in_2:cls, reg nm_x6:*, reg nm_x7:V, reg p44:p(V +), reg nm_y8:*, reg nm_y9:V, reg p45:p(V +), reg r262:V, reg any3:cls, reg r263:V, reg has_common_nms2:*, reg has_common_nms3:V, reg c60:L, reg c62:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r264:V, reg c65:L, reg r265:V, reg suffixes9:*, reg suffixes10:V, reg c66:L, reg c68:L, reg suffixes12:V, reg dr50:V, reg dc25:L, reg dx50:V, reg c70:L, reg dx51:V, reg __20:cls, reg r266:V, reg nzchar:cls, reg r267:V, reg c71:L, reg c72:V, reg c74:L, reg paste3:cls, reg nm_x8:*, reg nm_x9:V, reg c75:L, reg nm_x11:V, reg dr52:V, reg dc26:L, reg dx52:V, reg dx53:V, reg cnm8:*, reg cnm9:V, reg __21:cls, reg r268:V, reg p46:p(V +), reg suffixes13:*, reg suffixes14:V, reg c76:L, reg suffixes16:V, reg dr54:V, reg dc27:L, reg dx54:V, reg dx55:V, reg __22:cls, reg r270:V, reg p47:p(V +), reg r272:V, reg l14:*, reg c77:L, reg r274:V, reg l16:*, reg dr56:V, reg dc28:L, reg dx56:V, reg r276:V, reg dx57:V, reg cnm10:*, reg cnm11:V, reg ___2:cls, reg r277:V, reg x39:*, reg x40:V, reg c78:L, reg x42:V, reg dr58:V, reg dc29:L, reg dx58:V, reg dx59:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r279:V, reg x45:V, reg r280:V, reg m12:*, reg m13:V, reg c79:L, reg x47:V, reg m15:V, reg dr60:V, reg dc30:L, reg dx60:V, reg x49:V, reg dx61:V, reg r281:V, reg all_x5:*, reg all_x6:V, reg c80:L, reg m16:*, reg m17:V, reg c81:L, reg x53:V, reg m19:V, reg dr62:V, reg dc31:L, reg dx62:V, reg x55:V, reg dx63:V, reg r282:V, reg x56:V, reg dx64:V, reg c82:cls, reg r283:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r284:V, reg r285:V, reg by_x17:*, reg by_x18:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r286:V, reg x62:V, reg r287:V, reg ncx:*, reg ncx1:V, reg r288:I, reg c83:L, reg x64:V, reg r290:V, reg dr64:V, reg dc32:L, reg dx65:V, reg x66:V, reg dx66:V, reg by_x19:*, reg by_x20:V, reg r291:V, reg __23:cls, reg r292:V, reg c84:cls, reg r293:V, reg __24:cls, reg r294:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r295:V, reg r296:V, reg nm_by:*, reg nm_by1:V, reg nm_x12:*, reg nm_x13:V, reg c85:cls, reg r297:V, reg l17:*, reg names__4:cls, reg r298:V, reg all_y5:*, reg all_y6:V, reg c86:L, reg y35:*, reg y36:V, reg c87:L, reg y38:V, reg dr66:V, reg dc33:L, reg dx67:V, reg dx68:V, reg m20:*, reg m21:V, reg c88:L, reg y40:V, reg m23:V, reg dr68:V, reg dc34:L, reg dx69:V, reg y42:V, reg dx70:V, reg r299:V, reg by_y15:*, reg by_y16:V, reg __25:cls, reg r300:V, reg nm_by2:*, reg nm_by3:V, reg l18:*, reg names__5:cls, reg r301:V, reg x67:*, reg x68:V, reg c89:L, reg x70:V, reg dr70:V, reg dc35:L, reg dx71:V, reg dx72:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r302:V, reg x73:V, reg r303:V, reg nyy:*, reg nyy1:V, reg rep_int:cls, reg r304:V, reg nm_x14:*, reg nm_x15:V, reg __26:cls, reg r305:V, reg nm_x16:*, reg nm_x17:V, reg l19:*, reg names__6:cls, reg r306:V, reg rbind1:cls, reg x74:*, reg x75:V, reg p48:p(V +), reg cbind4:cls, reg ya:*, reg ya1:V, reg p49:p(V +), reg xa:*, reg xa1:V, reg p50:p(V +), reg r310:V, reg p51:p(V +), reg r312:V, reg has_common_nms4:*, reg has_common_nms5:V, reg c90:L, reg c92:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r314:V, reg c95:L, reg r315:V, reg suffixes17:*, reg suffixes18:V, reg c96:L, reg c98:L, reg suffixes20:V, reg dr72:V, reg dc36:L, reg dx73:V, reg c100:L, reg dx74:V, reg __27:cls, reg r316:V, reg nzchar1:cls, reg r317:V, reg c101:L, reg c102:V, reg c104:L, reg _in_3:cls, reg nm_y10:*, reg nm_y11:V, reg p52:p(V +), reg nm2:*, reg nm3:V, reg p53:p(V +), reg r320:V, reg paste4:cls, reg nm_y12:*, reg nm_y13:V, reg c105:L, reg nm_y15:V, reg dr74:V, reg dc37:L, reg dx75:V, reg dx76:V, reg cnm12:*, reg cnm13:V, reg __28:cls, reg r321:V, reg p54:p(V +), reg suffixes21:*, reg suffixes22:V, reg c106:L, reg suffixes24:V, reg dr76:V, reg dc38:L, reg dx77:V, reg dx78:V, reg __29:cls, reg r323:V, reg p55:p(V +), reg r325:V, reg l20:*, reg c107:L, reg r327:V, reg l22:*, reg dr78:V, reg dc39:L, reg dx79:V, reg r329:V, reg dx80:V, reg cnm14:*, reg cnm15:V, reg ___3:cls, reg r330:V, reg y43:*, reg y44:V, reg c108:L, reg y46:V, reg dr80:V, reg dc40:L, reg dx81:V, reg dx82:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r332:V, reg y49:V, reg r333:V, reg m24:*, reg m25:V, reg c109:L, reg y51:V, reg m27:V, reg dr82:V, reg dc41:L, reg dx83:V, reg y53:V, reg dx84:V, reg r334:V, reg all_x7:*, reg all_x8:V, reg c110:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r335:V, reg y58:V, reg r336:V, reg nxx:*, reg nxx1:V, reg rep_int1:cls, reg r337:V, reg y59:V, reg r338:V, reg all_y7:*, reg all_y8:V, reg c111:L, reg m28:*, reg m29:V, reg c112:L, reg y63:V, reg m31:V, reg dr84:V, reg dc42:L, reg dx85:V, reg y65:V, reg dx86:V, reg r339:V, reg y66:V, reg dx87:V, reg c113:cls, reg r340:V, reg by_y17:*, reg by_y18:V, reg r341:V, reg __30:cls, reg r342:V, reg all_x9:*, reg all_x10:V, reg c114:L, reg lxy:*, reg lxy1:V, reg r343:V, reg lxy2:*, reg lxy3:V, reg nxx2:*, reg nxx3:V, reg r344:V, reg r345:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r346:V, reg r347:V, reg y67:*, reg y68:V, reg r348:I, reg s:V, reg l23:I, reg i:I, reg i1:I, reg i2:I, reg c115:L, reg x76:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r349:V, reg i7:I, reg r350:V, reg y69:*, reg y70:V, reg c116:L, reg i9:I, reg y72:V, reg dr86:V, reg dc43:L, reg dx88:V, reg i11:I, reg dx89:V, reg i12:*, reg i13:V, reg __31:cls, reg r351:V, reg is_matrix:cls, reg r352:V, reg c117:L, reg l24:*, reg c118:L, reg i17:I, reg r355:L, reg l27:*, reg r356:L, reg l28:*, reg dr88:V, reg dc44:L, reg dx90:V, reg i19:I, reg r359:L, reg l30:*, reg r360:L, reg dx91:V, reg i20:*, reg i21:V, reg __32:cls, reg r361:V, reg c119:L, reg i23:I, reg r363:L, reg l32:*, reg dx93:V, reg dr90:V, reg dc45:L, reg dx94:V, reg i25:I, reg r365:L, reg l34:*, reg dx95:V, reg zap:*, reg zap1:V, reg ___4:cls, reg r366:V, reg c120:L, reg i27:I, reg r368:L, reg l36:*, reg dr92:V, reg dc46:L, reg dx96:V, reg i29:I, reg r370:L, reg dx97:V, reg i30:*, reg i31:V, reg ____:cls, reg r371:V, reg i32:I, reg zap2:*, reg zap3:V, reg l37:*, reg c121:L, reg i34:I, reg zap6:V, reg l40:*, reg zap7:V, reg l41:*, reg dr94:V, reg dc47:L, reg dx98:V, reg i36:I, reg zap10:V, reg l43:*, reg zap11:V, reg dx99:V, reg i37:*, reg i38:V, reg __33:cls, reg r373:V, reg is_na__:cls, reg r374:V, reg c122:L, reg i40:I, reg zap13:V, reg l45:*, reg dr96:V, reg dc48:L, reg dx100:V, reg i42:I, reg zap15:V, reg dx101:V, reg i43:*, reg i44:V, reg ____1:cls, reg r375:V, reg has_common_nms6:*, reg has_common_nms7:V, reg c123:L, reg nm_y16:*, reg nm_y17:V, reg l46:*, reg names__7:cls, reg r376:V, reg no_dups1:*, reg no_dups2:V, reg c124:L, reg c126:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r377:V, reg c129:L, reg r378:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r379:V, reg c132:L, reg r380:V, reg nm_by4:*, reg nm_by5:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r381:V, reg c135:L, reg r382:V, reg y73:*, reg y74:V, reg names9:cls, reg r383:V, reg match3:cls, reg r384:V, reg r385:V, reg any4:cls, reg r386:V, reg c136:L, reg c137:V, reg c139:L, reg c141:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r387:V, reg c144:L, reg r388:V, reg suffixes25:*, reg suffixes26:V, reg c145:L, reg c147:L, reg suffixes28:V, reg dr98:V, reg dc49:L, reg dx102:V, reg c149:L, reg dx103:V, reg __34:cls, reg r389:V, reg nzchar2:cls, reg r390:V, reg c150:L, reg c151:V, reg c153:L, reg paste5:cls, reg sym48:cls, reg base48:cls, reg guard48:L, reg r391:V, reg r392:V, reg y75:*, reg y76:V, reg names10:cls, reg r393:V, reg c154:L, reg r395:V, reg dr100:V, reg dc50:L, reg dx104:V, reg dx105:V, reg mi:*, reg mi1:V, reg __35:cls, reg r396:V, reg p56:p(V +), reg suffixes29:*, reg suffixes30:V, reg c155:L, reg suffixes32:V, reg dr102:V, reg dc51:L, reg dx106:V, reg dx107:V, reg __36:cls, reg r398:V, reg p57:p(V +), reg r400:V, reg l47:*, reg names11:cls, reg r401:V, reg c156:L, reg r404:V, reg l49:*, reg r405:V, reg dr104:V, reg dc52:L, reg dx108:V, reg r407:V, reg l51:*, reg dx109:V, reg mi2:*, reg mi3:V, reg ___5:cls, reg r408:V, reg names__8:cls, reg r409:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r411:V, reg r412:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r413:V, reg r414:V, reg x77:*, reg x78:V, reg names12:cls, reg r415:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r416:V, reg r417:V, reg y77:*, reg y78:V, reg names13:cls, reg r418:V, reg c157:cls, reg r419:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r420:V, reg r421:V, reg duplicated:cls, reg nm4:*, reg nm5:V, reg p58:p(V +), reg r423:V, reg any5:cls, reg r424:V, reg c158:L, reg sym53:cls, reg base53:cls, reg guard53:L, reg r425:V, reg r426:V, reg d:*, reg d1:V, reg sum:cls, reg r427:V, reg r428:V, reg c159:L, reg warning:cls, reg paste6:cls, reg sQuote:cls, reg nm6:*, reg nm7:V, reg c160:L, reg nm9:V, reg dr106:V, reg dc53:L, reg dx110:V, reg dx111:V, reg d2:*, reg d3:V, reg __37:cls, reg r429:V, reg p59:p(V +), reg r431:V, reg p60:p(V +), reg r433:V, reg p61:p(V +), reg r435:V, reg r436:V, reg warning1:cls, reg sQuote1:cls, reg nm10:*, reg nm11:V, reg c161:L, reg nm13:V, reg dr108:V, reg dc54:L, reg dx112:V, reg dx113:V, reg d4:*, reg d5:V, reg __38:cls, reg r437:V, reg p62:p(V +), reg r439:V, reg p63:p(V +), reg r441:V, reg cbind5:cls, reg x79:*, reg x80:V, reg p64:p(V +), reg y79:*, reg y80:V, reg p65:p(V +), reg r445:V, reg sort1:*, reg sort2:V, reg c162:L, reg res:*, reg res1:V, reg c163:L, reg res3:V, reg dr110:V, reg dc55:L, reg dx114:V, reg dx115:V, reg all_x11:*, reg all_x12:V, reg c164:L, reg res4:V, reg c165:V, reg all_y9:*, reg all_y10:V, reg c167:L, reg c168:V, reg c170:L, reg x81:*, reg x82:V, reg c171:L, reg res10:V, reg x84:V, reg dr112:V, reg dc56:L, reg dx116:V, reg res12:V, reg dx117:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r446:V, reg res15:V, reg r447:V, reg l_b4:*, reg l_b5:V, reg r448:I, reg __39:cls, reg r449:V, reg l52:*, reg attributes__:cls, reg r450:V, reg do_call1:cls, reg x88:*, reg x89:V, reg p66:p(V +), reg r452:V, reg r453:V, reg sort_list:cls, reg bx16:*, reg bx17:V, reg c172:L, reg bx19:V, reg dr114:V, reg dc57:L, reg dx118:V, reg dx119:V, reg m32:*, reg m33:V, reg c173:L, reg bx21:V, reg m35:V, reg dr116:V, reg dc58:L, reg dx120:V, reg bx23:V, reg dx121:V, reg r454:V, reg __40:cls, reg r455:V, reg p67:p(V +), reg r457:V, reg __41:cls, reg r458:V, reg _set_row_names:cls, reg nrow2:cls, reg res17:*, reg res18:V, reg p68:p(V +), reg r460:V, reg p69:p(V +), reg r462:V, reg l53:*, reg attr__:cls, reg r463:V, reg res19:*, reg res20:V |
    mkenv;
    st x = x;
    st y = y;
    by_isMissing = missing.0(by);
    if by_isMissing then L0() else L1(by);
  L0():
    p2 = prom<V +>{
      intersect = ldf intersect;
      p = prom<V +>{
        sym = ldf names;
        base = ldf names in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        names = ldf names in base;
        r2 = dyn names(x2);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      p1 = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        y1 = ld y;
        y2 = force? y1;
        checkMissing(y2);
        names1 = ldf names in base;
        r6 = dyn names1(y2);
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym y>);
        goto L0(r4);
      };
      r8 = dyn intersect(p, p1);
      return r8;
    };
    goto L1(p2);
  L1(by_orDefault):
    st by = by_orDefault;
    by_x_isMissing = missing.0(by_x);
    if by_x_isMissing then L2() else L3(by_x);
  L2():
    p3 = prom<V +>{
      by1 = ld by;
      by2 = force? by1;
      checkMissing(by2);
      return by2;
    };
    goto L3(p3);
  L3(by_x_orDefault):
    st `by.x` = by_x_orDefault;
    by_y_isMissing = missing.0(by_y);
    if by_y_isMissing then L4() else L5(by_y);
  L4():
    p4 = prom<V +>{
      by3 = ld by;
      by4 = force? by3;
      checkMissing(by4);
      return by4;
    };
    goto L5(p4);
  L5(by_y_orDefault):
    st `by.y` = by_y_orDefault;
    all_isMissing = missing.0(all);
    if all_isMissing then L6(FALSE) else L6(all);
  L6(all_orDefault):
    st all = all_orDefault;
    all_x_isMissing = missing.0(all_x);
    if all_x_isMissing then L7() else L8(all_x);
  L7():
    p5 = prom<V +>{
      all1 = ld all;
      all2 = force? all1;
      checkMissing(all2);
      return all2;
    };
    goto L8(p5);
  L8(all_x_orDefault):
    st `all.x` = all_x_orDefault;
    all_y_isMissing = missing.0(all_y);
    if all_y_isMissing then L9() else L10(all_y);
  L9():
    p6 = prom<V +>{
      all3 = ld all;
      all4 = force? all3;
      checkMissing(all4);
      return all4;
    };
    goto L10(p6);
  L10(all_y_orDefault):
    st `all.y` = all_y_orDefault;
    sort_isMissing = missing.0(sort);
    if sort_isMissing then L11(TRUE) else L11(sort);
  L11(sort_orDefault):
    st sort = sort_orDefault;
    suffixes_isMissing = missing.0(suffixes);
    if suffixes_isMissing then L12() else L13(suffixes);
  L12():
    p7 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c = ldf c in base;
      r16 = dyn c(".x", ".y");
      goto L0(r16);
    L2():
      r14 = dyn base2(".x", ".y");
      goto L0(r14);
    };
    goto L13(p7);
  L13(suffixes_orDefault):
    st suffixes = suffixes_orDefault;
    no_dups_isMissing = missing.0(no_dups);
    if no_dups_isMissing then L14(TRUE) else L14(no_dups);
  L14(no_dups_orDefault):
    st `no.dups` = no_dups_orDefault;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L15(NULL) else L15(incomparables);
  L15(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    st `...` = ddd;
    r18 = clos `inner-1745221970`;
    st `fix.by` = r18;
    nrow = ldf nrow;
    check L159() else D0();
  D0():
    deopt 4 [];
  L159():
    p9 = prom<V +>{
      as_data_frame = ldf `as.data.frame`;
      p8 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r20 = dyn as_data_frame(p8);
      st x = r20;
      invisible.0();
      return r20;
    };
    r22 = dyn nrow(p9);
    check L160() else D1();
  D1():
    deopt 6 [r22];
  L160():
    st nx = r22;
    nrow1 = ldf nrow;
    check L161() else D2();
  D2():
    deopt 9 [];
  L161():
    p11 = prom<V +>{
      as_data_frame1 = ldf `as.data.frame`;
      p10 = prom<V +>{
        y3 = ld y;
        y4 = force? y3;
        checkMissing(y4);
        return y4;
      };
      r24 = dyn as_data_frame1(p10);
      st y = r24;
      invisible.0();
      return r24;
    };
    r26 = dyn nrow1(p11);
    check L162() else D3();
  D3():
    deopt 11 [r26];
  L162():
    st ny = r26;
    nx = ld nx;
    check L163() else D4();
  D4():
    deopt 13 [nx];
  L163():
    nx1 = force? nx;
    checkMissing(nx1);
    r27 = `>=`(nx1, 2.147483648E9);
    c1 = `as.logical`(r27);
    if c1 then L16(c1) else L164();
  L16(c2):
    c7 = `as.logical`(c2);
    if c7 then L167() else L17();
  L164():
    ny = ld ny;
    check L165() else D5();
  D5():
    deopt 17 [c1, ny];
  L17():
    goto L18();
  L18():
    fix_by = ldf `fix.by`;
    check L171() else D8();
  L165():
    ny1 = force? ny;
    checkMissing(ny1);
    r28 = `>=`(ny1, 2.147483648E9);
    c4 = `as.logical`(r28);
    c5 = `||`(c1, c4);
    goto L16(c5);
  L167():
    stop = ldf stop;
    check L168() else D6();
  D6():
    deopt 23 [];
  D8():
    deopt 29 [];
  L168():
    r29 = dyn stop("long vectors are not supported");
    check L169() else D7();
  L171():
    p12 = prom<V +>{
      by_x1 = ld `by.x`;
      by_x2 = force? by_x1;
      checkMissing(by_x2);
      return by_x2;
    };
    p13 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r33 = dyn fix_by(p12, p13);
    check L172() else D9();
  D7():
    deopt 25 [r29];
  D9():
    deopt 32 [r33];
  L169():
    goto L18();
  L172():
    st `by.x` = r33;
    fix_by1 = ldf `fix.by`;
    check L173() else D10();
  D10():
    deopt 35 [];
  L173():
    p14 = prom<V +>{
      by_y1 = ld `by.y`;
      by_y2 = force? by_y1;
      checkMissing(by_y2);
      return by_y2;
    };
    p15 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r36 = dyn fix_by1(p14, p15);
    check L174() else D11();
  D11():
    deopt 38 [r36];
  L174():
    st `by.y` = r36;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L175() else L176();
  L19(r38):
    st `l.b` = r38;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L179() else L180();
  L175():
    by_x3 = ld `by.x`;
    check L177() else D12();
  L176():
    r37 = dyn base3(<sym by.x>);
    goto L19(r37);
  D12():
    deopt 42 [by_x3];
  L20(r43, r44):
    r46 = `!=`(r43, r44);
    c8 = `as.logical`(r46);
    if c8 then L183() else L21();
  L177():
    by_x4 = force? by_x3;
    checkMissing(by_x4);
    length = ldf length in base;
    r39 = dyn length(by_x4);
    check L178() else D13();
  L179():
    by_y3 = ld `by.y`;
    check L181() else D14();
  L180():
    r42 = dyn base4(<sym by.y>);
    goto L20(r38, r42);
  D13():
    deopt 45 [r39];
  D14():
    deopt 48 [r38, by_y3];
  L21():
    goto L22();
  L22():
    l_b = ld `l.b`;
    check L187() else D18();
  L178():
    goto L19(r39);
  L181():
    by_y4 = force? by_y3;
    checkMissing(by_y4);
    length1 = ldf length in base;
    r45 = dyn length1(by_y4);
    check L182() else D15();
  L183():
    stop1 = ldf stop;
    check L184() else D16();
  D15():
    deopt 51 [r38, r45];
  D16():
    deopt 54 [];
  D18():
    deopt 59 [l_b];
  L182():
    goto L20(r38, r45);
  L184():
    r47 = dyn stop1("'by.x' and 'by.y' specify different numbers of columns");
    check L185() else D17();
  L187():
    l_b1 = force? l_b;
    checkMissing(l_b1);
    r49 = `==`(l_b1, 0);
    c9 = `as.logical`(r49);
    if c9 then L188() else L23();
  D17():
    deopt 56 [r47];
  L23():
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L240() else L241();
  L34():
    _set_row_names = ldf `.set_row_names`;
    check L714() else D263();
  L185():
    goto L22();
  L188():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L189() else L190();
  D263():
    deopt 929 [];
  L24(r51):
    st `nm.x` = r51;
    st nm = r51;
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L193() else L194();
  L35(r120):
    c30 = `as.logical`(r120);
    if c30 then L244() else L36();
  L189():
    x7 = ld x;
    check L191() else D19();
  L190():
    r50 = dyn base5(<sym x>);
    goto L24(r50);
  L240():
    by_x5 = ld `by.x`;
    check L242() else D51();
  L241():
    r119 = dyn base10(<lang `==`(by.x, 0)>);
    goto L35(r119);
  L714():
    p69 = prom<V +>{
      nrow2 = ldf nrow;
      p68 = prom<V +>{
        res17 = ld res;
        res18 = force? res17;
        checkMissing(res18);
        return res18;
      };
      r460 = dyn nrow2(p68);
      return r460;
    };
    r462 = dyn _set_row_names(p69);
    check L715() else D264();
  D19():
    deopt 65 [x7];
  D51():
    deopt 162 [by_x5];
  D264():
    deopt 931 [r462];
  L25(r54):
    st `nm.y` = r54;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L197() else L198();
  L36():
    goto L37();
  L37():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L249() else L250();
  L191():
    x8 = force? x7;
    checkMissing(x8);
    names2 = ldf names in base;
    r52 = dyn names2(x8);
    check L192() else D20();
  L193():
    y7 = ld y;
    check L195() else D21();
  L194():
    r53 = dyn base6(<sym y>);
    goto L25(r53);
  L242():
    by_x6 = force? by_x5;
    checkMissing(by_x6);
    r121 = `==`(by_x6, 0);
    any1 = ldf any in base;
    r122 = dyn any1(r121);
    check L243() else D52();
  L244():
    cbind2 = ldf cbind;
    check L245() else D53();
  L715():
    l53 = ld res;
    attr__ = ldf `attr<-`;
    check L716() else D265();
  D20():
    deopt 68 [r52];
  D21():
    deopt 73 [y7];
  D52():
    deopt 167 [r122];
  D53():
    deopt 169 [];
  D265():
    deopt 933 [r462, l53, r462];
  L26(r57):
    st `has.common.nms` = r57;
    has_common_nms = ld `has.common.nms`;
    check L202() else D26();
  L38(r131):
    c31 = `as.logical`(r131);
    if c31 then L253() else L39();
  L192():
    goto L24(r52);
  L195():
    y8 = force? y7;
    checkMissing(y8);
    names3 = ldf names in base;
    r55 = dyn names3(y8);
    check L196() else D22();
  L197():
    _in_ = ldf `%in%`;
    check L199() else D23();
  L198():
    r56 = dyn base7(<lang `<-`(cnm, `%in%`(nm.x, nm.y))>);
    goto L26(r56);
  L243():
    goto L35(r122);
  L245():
    p31 = prom<V +>{
      row_names = ldf `row.names`;
      p30 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        return x22;
      };
      r124 = dyn row_names(p30);
      return r124;
    };
    p32 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    r127 = dyn cbind2[`Row.names`, ](p31, p32);
    check L246() else D54();
  L249():
    by_y5 = ld `by.y`;
    check L251() else D56();
  L250():
    r130 = dyn base11(<lang `==`(by.y, 0)>);
    goto L38(r130);
  L716():
    r463 = dyn attr__(l53, NULL, "row.names", r462);
    check L717() else D266();
  D22():
    deopt 76 [r55];
  D23():
    deopt 81 [];
  D26():
    deopt 89 [has_common_nms];
  D54():
    deopt 173 [r127];
  D56():
    deopt 184 [by_y5];
  D266():
    deopt 936 [r462, r463];
  L39():
    goto L40();
  L40():
    l10 = ld x;
    row_names__ = ldf `row.names<-`;
    check L258() else D61();
  L196():
    goto L25(r55);
  L199():
    p16 = prom<V +>{
      nm_x = ld `nm.x`;
      nm_x1 = force? nm_x;
      checkMissing(nm_x1);
      return nm_x1;
    };
    p17 = prom<V +>{
      nm_y = ld `nm.y`;
      nm_y1 = force? nm_y;
      checkMissing(nm_y1);
      return nm_y1;
    };
    r60 = dyn _in_(p16, p17);
    check L200() else D24();
  L202():
    has_common_nms1 = force? has_common_nms;
    checkMissing(has_common_nms1);
    c10 = `as.logical`(has_common_nms1);
    if c10 then L203() else L27();
  L246():
    st x = r127;
    by_x7 = ld `by.x`;
    check L247() else D55();
  L251():
    by_y6 = force? by_y5;
    checkMissing(by_y6);
    r132 = `==`(by_y6, 0);
    any2 = ldf any in base;
    r133 = dyn any2(r132);
    check L252() else D57();
  L253():
    cbind3 = ldf cbind;
    check L254() else D58();
  L717():
    st res = r463;
    res19 = ld res;
    check L718() else D267();
  D24():
    deopt 84 [r60];
  D55():
    deopt 175 [by_x7];
  D57():
    deopt 189 [r133];
  D58():
    deopt 191 [];
  D61():
    deopt 207 [NULL, l10, NULL];
  D267():
    deopt 938 [res19];
  L27():
    goto L30();
  L30():
    nx2 = ld nx;
    check L227() else D43();
  L200():
    st cnm = r60;
    any = ldf any in base;
    r61 = dyn any(r60);
    check L201() else D25();
  L203():
    paste0 = ldf paste0;
    check L204() else D27();
  L247():
    by_x8 = force? by_x7;
    checkMissing(by_x8);
    r128 = `+`(by_x8, 1);
    st `by.x` = r128;
    goto L37();
  L252():
    goto L38(r133);
  L254():
    p34 = prom<V +>{
      row_names1 = ldf `row.names`;
      p33 = prom<V +>{
        y21 = ld y;
        y22 = force? y21;
        checkMissing(y22);
        return y22;
      };
      r135 = dyn row_names1(p33);
      return r135;
    };
    p35 = prom<V +>{
      y23 = ld y;
      y24 = force? y23;
      checkMissing(y24);
      return y24;
    };
    r138 = dyn cbind3[`Row.names`, ](p34, p35);
    check L255() else D59();
  L258():
    r141 = dyn row_names__(l10, NULL, NULL);
    check L259() else D62();
  L718():
    res20 = force? res19;
    checkMissing(res20);
    popenv;
    return res20;
  D25():
    deopt 87 [r61];
  D27():
    deopt 92 [];
  D43():
    deopt 133 [nx2];
  D59():
    deopt 195 [r138];
  D62():
    deopt 209 [NULL, r141];
  L201():
    goto L26(r61);
  L204():
    p18 = prom<V +>{
      nm_x2 = ld `nm.x`;
      nm_x3 = force? nm_x2;
      checkMissing(nm_x3);
      c11 = `is.object`(nm_x3);
      if c11 then L1() else L2(nm_x3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", nm_x3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(nm_x5):
      cnm = ld cnm;
      cnm1 = force? cnm;
      __ = ldf `[` in base;
      r62 = dyn __(nm_x5, cnm1);
      goto L0(r62);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p19 = prom<V +>{
      suffixes1 = ld suffixes;
      suffixes2 = force? suffixes1;
      checkMissing(suffixes2);
      c12 = `is.object`(suffixes2);
      if c12 then L1() else L2(suffixes2);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", suffixes2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(suffixes4):
      __1 = ldf `[` in base;
      r64 = dyn __1(suffixes4, 1);
      goto L0(r64);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r66 = dyn paste0(p18, p19);
    check L205() else D28();
  L227():
    nx3 = force? nx2;
    checkMissing(nx3);
    r94 = `==`(nx3, 0);
    c17 = `as.logical`(r94);
    if c17 then L31(c17) else L228();
  L255():
    st y = r138;
    by_y7 = ld `by.y`;
    check L256() else D60();
  L259():
    st x = r141;
    l11 = ld y;
    row_names__1 = ldf `row.names<-`;
    check L260() else D63();
  D28():
    deopt 95 [r66];
  D60():
    deopt 197 [by_y7];
  D63():
    deopt 214 [NULL, l11, NULL];
  L31(c18):
    c23 = `as.logical`(c18);
    if c23 then L231() else L32();
  L205():
    l = ld x;
    names4 = ldf names;
    check L206() else D29();
  L228():
    ny2 = ld ny;
    check L229() else D44();
  L256():
    by_y8 = force? by_y7;
    checkMissing(by_y8);
    r139 = `+`(by_y8, 1);
    st `by.y` = r139;
    goto L40();
  L260():
    r142 = dyn row_names__1(l11, NULL, NULL);
    check L261() else D64();
  D29():
    deopt 97 [r66, l, r66];
  D44():
    deopt 137 [c17, ny2];
  D64():
    deopt 216 [NULL, r142];
  L32():
    expand_grid = ldf `expand.grid`;
    check L235() else D47();
  L33(r101):
    goto L34();
  L206():
    r67 = dyn names4(r66, NULL);
    check L207() else D30();
  L229():
    ny3 = force? ny2;
    checkMissing(ny3);
    r95 = `==`(ny3, 0);
    c20 = `as.logical`(r95);
    c21 = `||`(c17, c20);
    goto L31(c21);
  L231():
    cbind = ldf cbind;
    check L232() else D45();
  L261():
    st y = r142;
    l_b2 = ld `l.b`;
    check L262() else D65();
  D30():
    deopt 99 [r66, l, r66, r67];
  D45():
    deopt 143 [];
  D47():
    deopt 149 [];
  D65():
    deopt 218 [l_b2];
  L207():
    c13 = `is.object`(r67);
    if c13 then L208() else L209(r66, l, r67);
  L232():
    p24 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c24 = `is.object`(x10);
      if c24 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", x10);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r96 = dyn __4(x10, FALSE, <missing>);
      goto L0(r96);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p25 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      c25 = `is.object`(y10);
      if c25 then L1() else L2();
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", y10);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r98 = dyn __5(y10, FALSE, <missing>);
      goto L0(r98);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r100 = dyn cbind(p24, p25);
    check L233() else D46();
  L235():
    p26 = prom<V +>{
      sym8 = ldf seq_len;
      base8 = ldf seq_len in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r103):
      return r103;
    L1():
      nx4 = ld nx;
      nx5 = force? nx4;
      checkMissing(nx5);
      r104 = seq_len(nx5);
      goto L0(r104);
    L2():
      r102 = dyn base8(<sym nx>);
      goto L0(r102);
    };
    p27 = prom<V +>{
      sym9 = ldf seq_len;
      base9 = ldf seq_len in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r107):
      return r107;
    L1():
      ny4 = ld ny;
      ny5 = force? ny4;
      checkMissing(ny5);
      r108 = seq_len(ny5);
      goto L0(r108);
    L2():
      r106 = dyn base9(<sym ny>);
      goto L0(r106);
    };
    r110 = dyn expand_grid(p26, p27);
    check L236() else D48();
  L262():
    l_b3 = force? l_b2;
    checkMissing(l_b3);
    r143 = `==`(l_b3, 1);
    c32 = `as.logical`(r143);
    if c32 then L263() else L41();
  D46():
    deopt 146 [r100];
  D48():
    deopt 152 [r110];
  L28(r73, l4, dx5):
    names__ = ldf `names<-`;
    check L212() else D32();
  L41():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L291() else L292();
  L50():
    sym19 = ldf match;
    base19 = ldf match in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L331() else L332();
  L208():
    dr4 = tryDispatchBuiltin.0("[<-", r67, r66);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L210() else L209(r66, l, dr4);
  L209(r70, l2, r71):
    cnm2 = ld cnm;
    check L211() else D31();
  L233():
    st res = r100;
    goto L33(r100);
  L236():
    st ij = r110;
    cbind1 = ldf cbind;
    check L237() else D49();
  L263():
    x25 = ld x;
    check L264() else D66();
  D31():
    deopt 101 [r70, l2, r71, r66, cnm2];
  D32():
    deopt 104 [r73, l4, dx5];
  D49():
    deopt 155 [];
  D66():
    deopt 222 [x25];
  L51(r160):
    r161 = `!`(r160);
    c38 = `as.logical`(r161);
    if c38 then L294() else L52();
  L60(r193):
    st comm = r193;
    bx10 = ld bx;
    check L336() else D101();
  L210():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L28(r66, l, dx4);
  L211():
    cnm3 = force? cnm2;
    ___ = ldf `[<-` in base;
    r74 = dyn ___(r71, r66, cnm3);
    goto L28(r70, l2, r74);
  L212():
    r75 = dyn names__(l4, NULL, dx5);
    check L213() else D33();
  L237():
    p28 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c26 = `is.object`(x14);
      if c26 then L2() else L3(x14);
    L0(dx17):
      return dx17;
    L2():
      dr16 = tryDispatchBuiltin.1("[", x14);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(x16):
      ij = ld ij;
      ij1 = force? ij;
      checkMissing(ij1);
      c27 = `is.object`(ij1);
      if c27 then L5() else L6(x16);
    L1(dx19):
      __7 = ldf `[` in base;
      r112 = dyn __7(x14, dx19, <missing>, FALSE);
      goto L0(r112);
    L4():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    L5():
      dr18 = tryDispatchBuiltin.1("[", ij1);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(x16);
    L6(x18):
      __6 = ldf `[` in base;
      r111 = dyn __6(ij1, <missing>, 1);
      goto L1(r111);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L1(dx18);
    };
    p29 = prom<V +>{
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      c28 = `is.object`(y14);
      if c28 then L2() else L3(y14);
    L0(dx21):
      return dx21;
    L2():
      dr20 = tryDispatchBuiltin.1("[", y14);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L4() else L3(dr20);
    L3(y16):
      ij4 = ld ij;
      ij5 = force? ij4;
      checkMissing(ij5);
      c29 = `is.object`(ij5);
      if c29 then L5() else L6(y16);
    L1(dx23):
      __9 = ldf `[` in base;
      r115 = dyn __9(y14, dx23, <missing>, FALSE);
      goto L0(r115);
    L4():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    L5():
      dr22 = tryDispatchBuiltin.1("[", ij5);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L7() else L6(y16);
    L6(y18):
      __8 = ldf `[` in base;
      r114 = dyn __8(ij5, <missing>, 2);
      goto L1(r114);
    L7():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L1(dx22);
    };
    r117 = dyn cbind1(p28, p29);
    check L238() else D50();
  L264():
    x26 = force? x25;
    checkMissing(x26);
    c33 = `is.object`(x26);
    if c33 then L265() else L266(x26);
  L291():
    incomparables1 = ld incomparables;
    check L293() else D78();
  L292():
    r159 = dyn base14(<sym incomparables>);
    goto L51(r159);
  L331():
    bx8 = ld bx;
    check L333() else D98();
  L332():
    r192 = dyn base19(<sym bx>, <sym by>, 0);
    goto L60(r192);
  D33():
    deopt 106 [r73, r75];
  D50():
    deopt 158 [r117];
  D78():
    deopt 265 [incomparables1];
  D98():
    deopt 336 [bx8];
  D101():
    deopt 345 [bx10];
  L42(dx25):
    st bx = dx25;
    is_factor = ldf `is.factor`;
    check L269() else D68();
  L52():
    goto L53();
  L53():
    x29 = ld x;
    check L298() else D81();
  L213():
    st x = r75;
    _in_1 = ldf `%in%`;
    check L214() else D34();
  L238():
    st res = r117;
    goto L33(r117);
  L265():
    dr24 = tryDispatchBuiltin.1("[", x26);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L267() else L266(dr24);
  L266(x28):
    by_x9 = ld `by.x`;
    check L268() else D67();
  L293():
    incomparables2 = force? incomparables1;
    checkMissing(incomparables2);
    c37 = `==`(incomparables2, NULL);
    goto L51(c37);
  L294():
    stop2 = ldf stop;
    check L295() else D79();
  L333():
    bx9 = force? bx8;
    checkMissing(bx9);
    by11 = ld by;
    check L334() else D99();
  L336():
    bx11 = force? bx10;
    checkMissing(bx11);
    c44 = `is.object`(bx11);
    if c44 then L337() else L338(bx11);
  D34():
    deopt 109 [];
  D67():
    deopt 225 [x28, by_x9];
  D68():
    deopt 231 [];
  D79():
    deopt 270 [];
  D81():
    deopt 275 [x29];
  D99():
    deopt 338 [by11];
  L61(dx37):
    st bxy = dx37;
    sym20 = ldf match;
    base20 = ldf match in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L341() else L342();
  L214():
    p20 = prom<V +>{
      nm_y2 = ld `nm.y`;
      nm_y3 = force? nm_y2;
      checkMissing(nm_y3);
      return nm_y3;
    };
    p21 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    r78 = dyn _in_1(p20, p21);
    check L215() else D35();
  L267():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L42(dx24);
  L268():
    by_x10 = force? by_x9;
    __10 = ldf `[` in base;
    r144 = dyn __10(x26, <missing>, by_x10);
    goto L42(r144);
  L269():
    p36 = prom<V +>{
      bx = ld bx;
      bx1 = force? bx;
      checkMissing(bx1);
      return bx1;
    };
    r146 = dyn is_factor(p36);
    check L270() else D69();
  L295():
    r162 = dyn stop2("'incomparables' is supported only for merging on a single column");
    check L296() else D80();
  L298():
    x30 = force? x29;
    checkMissing(x30);
    c39 = `is.object`(x30);
    if c39 then L299() else L300(x30);
  L334():
    by12 = force? by11;
    checkMissing(by12);
    match = ldf match in base;
    r194 = dyn match(bx9, by12, 0, NULL);
    check L335() else D100();
  L337():
    dr36 = tryDispatchBuiltin.1("[", bx11);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L339() else L338(dr36);
  L338(bx13):
    comm = ld comm;
    check L340() else D102();
  D35():
    deopt 112 [r78];
  D69():
    deopt 233 [r146];
  D80():
    deopt 272 [r162];
  D100():
    deopt 343 [r194];
  D102():
    deopt 347 [bx13, comm];
  L54(dx29):
    st bx = dx29;
    y29 = ld y;
    check L303() else D83();
  L62(r198):
    st xinds = r198;
    sym21 = ldf match;
    base21 = ldf match in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L347() else L348();
  L215():
    st cnm = r78;
    paste1 = ldf paste0;
    check L216() else D36();
  L270():
    c34 = `as.logical`(r146);
    if c34 then L271() else L43();
  L296():
    goto L53();
  L299():
    dr28 = tryDispatchBuiltin.1("[", x30);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L301() else L300(dr28);
  L300(x32):
    by_x11 = ld `by.x`;
    check L302() else D82();
  L335():
    goto L60(r194);
  L339():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L61(dx36);
  L340():
    comm1 = force? comm;
    checkMissing(comm1);
    r195 = `>`(comm1, 0);
    __16 = ldf `[` in base;
    r196 = dyn __16(bx13, r195);
    goto L61(r196);
  L341():
    bx14 = ld bx;
    check L343() else D103();
  L342():
    r197 = dyn base20(<sym bx>, <sym bxy>, 0, <sym incomparables>);
    goto L62(r197);
  D36():
    deopt 115 [];
  D82():
    deopt 278 [x32, by_x11];
  D83():
    deopt 285 [y29];
  D103():
    deopt 355 [bx14];
  L43():
    goto L45();
  L45():
    y25 = ld y;
    check L277() else D72();
  L63(r201):
    st yinds = r201;
    nx13 = ld nx;
    check L353() else D111();
  L216():
    p22 = prom<V +>{
      nm_y4 = ld `nm.y`;
      nm_y5 = force? nm_y4;
      checkMissing(nm_y5);
      c14 = `is.object`(nm_y5);
      if c14 then L1() else L2(nm_y5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", nm_y5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(nm_y7):
      cnm4 = ld cnm;
      cnm5 = force? cnm4;
      __2 = ldf `[` in base;
      r79 = dyn __2(nm_y7, cnm5);
      goto L0(r79);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p23 = prom<V +>{
      suffixes5 = ld suffixes;
      suffixes6 = force? suffixes5;
      checkMissing(suffixes6);
      c15 = `is.object`(suffixes6);
      if c15 then L1() else L2(suffixes6);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", suffixes6);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(suffixes8):
      __3 = ldf `[` in base;
      r81 = dyn __3(suffixes8, 2);
      goto L0(r81);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r83 = dyn paste1(p22, p23);
    check L217() else D37();
  L271():
    sym12 = ldf `as.character`;
    base12 = ldf `as.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L272() else L273();
  L301():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L54(dx28);
  L302():
    by_x12 = force? by_x11;
    __12 = ldf `[` in base;
    r164 = dyn __12(x30, <missing>, by_x12, FALSE);
    goto L54(r164);
  L303():
    y30 = force? y29;
    checkMissing(y30);
    c40 = `is.object`(y30);
    if c40 then L304() else L305(y30);
  L343():
    bx15 = force? bx14;
    checkMissing(bx15);
    bxy = ld bxy;
    check L344() else D104();
  L347():
    by13 = ld by;
    check L349() else D107();
  L348():
    r200 = dyn base21(<sym by>, <sym bxy>, 0, <sym incomparables>);
    goto L63(r200);
  D37():
    deopt 118 [r83];
  D72():
    deopt 243 [y25];
  D104():
    deopt 357 [bxy];
  D107():
    deopt 367 [by13];
  D111():
    deopt 377 [nx13];
  L44(r148):
    st bx = r148;
    goto L45();
  L55(dx31):
    st by = dx31;
    paste2 = ldf paste0;
    check L308() else D85();
  L217():
    l5 = ld y;
    names5 = ldf names;
    check L218() else D38();
  L272():
    bx2 = ld bx;
    check L274() else D70();
  L273():
    r147 = dyn base12(<sym bx>);
    goto L44(r147);
  L277():
    y26 = force? y25;
    checkMissing(y26);
    c35 = `is.object`(y26);
    if c35 then L278() else L279(y26);
  L304():
    dr30 = tryDispatchBuiltin.1("[", y30);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L306() else L305(dr30);
  L305(y32):
    by_y11 = ld `by.y`;
    check L307() else D84();
  L344():
    bxy1 = force? bxy;
    checkMissing(bxy1);
    incomparables3 = ld incomparables;
    check L345() else D105();
  L349():
    by14 = force? by13;
    checkMissing(by14);
    bxy2 = ld bxy;
    check L350() else D108();
  L353():
    nx14 = force? nx13;
    checkMissing(nx14);
    r203 = `>`(nx14, 0);
    c45 = `as.logical`(r203);
    if c45 then L354() else L64(c45);
  D38():
    deopt 120 [r83, l5, r83];
  D70():
    deopt 236 [bx2];
  D84():
    deopt 288 [y32, by_y11];
  D85():
    deopt 296 [];
  D105():
    deopt 360 [incomparables3];
  D108():
    deopt 369 [bxy2];
  L46(dx27):
    st by = dx27;
    is_factor1 = ldf `is.factor`;
    check L282() else D74();
  L64(c47):
    c51 = `as.logical`(c47);
    if c51 then L357() else L65();
  L218():
    r84 = dyn names5(r83, NULL);
    check L219() else D39();
  L274():
    bx3 = force? bx2;
    checkMissing(bx3);
    as_character = ldf `as.character` in base;
    r149 = dyn as_character(bx3);
    check L275() else D71();
  L278():
    dr26 = tryDispatchBuiltin.1("[", y26);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L280() else L279(dr26);
  L279(y28):
    by_y9 = ld `by.y`;
    check L281() else D73();
  L306():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L55(dx30);
  L307():
    by_y12 = force? by_y11;
    __13 = ldf `[` in base;
    r165 = dyn __13(y30, <missing>, by_y12, FALSE);
    goto L55(r165);
  L308():
    p39 = prom<V +>{
      sym15 = ldf seq_len;
      base15 = ldf seq_len in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r167):
      return r167;
    L1():
      ncol = ldf ncol;
      p38 = prom<V +>{
        bx4 = ld bx;
        bx5 = force? bx4;
        checkMissing(bx5);
        return bx5;
      };
      r169 = dyn ncol(p38);
      r170 = seq_len(r169);
      goto L0(r170);
    L2():
      r166 = dyn base15(<lang ncol(bx)>);
      goto L0(r166);
    };
    r172 = dyn paste2("V", p39);
    check L309() else D86();
  L345():
    incomparables4 = force? incomparables3;
    checkMissing(incomparables4);
    match1 = ldf match in base;
    r199 = dyn match1(bx15, bxy1, 0, incomparables4);
    check L346() else D106();
  L350():
    bxy3 = force? bxy2;
    checkMissing(bxy3);
    incomparables5 = ld incomparables;
    check L351() else D109();
  L354():
    ny8 = ld ny;
    check L355() else D112();
  D39():
    deopt 122 [r83, l5, r83, r84];
  D71():
    deopt 239 [r149];
  D73():
    deopt 246 [y28, by_y9];
  D74():
    deopt 252 [];
  D86():
    deopt 299 [r172];
  D106():
    deopt 363 [r199];
  D109():
    deopt 372 [incomparables5];
  D112():
    deopt 381 [c45, ny8];
  L65():
    sym23 = ldf list;
    base23 = ldf list in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L366() else L367();
  L67():
    sym26 = ldf names;
    base26 = ldf names in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L379() else L380();
  L219():
    c16 = `is.object`(r84);
    if c16 then L220() else L221(r83, l5, r84);
  L275():
    goto L44(r149);
  L280():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L46(dx26);
  L281():
    by_y10 = force? by_y9;
    __11 = ldf `[` in base;
    r151 = dyn __11(y26, <missing>, by_y10);
    goto L46(r151);
  L282():
    p37 = prom<V +>{
      by5 = ld by;
      by6 = force? by5;
      checkMissing(by6);
      return by6;
    };
    r153 = dyn is_factor1(p37);
    check L283() else D75();
  L309():
    l12 = ld by;
    names__2 = ldf `names<-`;
    check L310() else D87();
  L346():
    goto L62(r199);
  L351():
    incomparables6 = force? incomparables5;
    checkMissing(incomparables6);
    match2 = ldf match in base;
    r202 = dyn match2(by14, bxy3, 0, incomparables6);
    check L352() else D110();
  L355():
    ny9 = force? ny8;
    checkMissing(ny9);
    r204 = `>`(ny9, 0);
    c48 = `as.logical`(r204);
    c49 = `&&`(c45, c48);
    goto L64(c49);
  L357():
    sym22 = ldf `.Internal`;
    base22 = ldf `.Internal` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L358() else L359();
  D75():
    deopt 254 [r153];
  D87():
    deopt 301 [r172, l12, r172];
  D110():
    deopt 375 [r202];
  L29(r90, l9, dx11):
    names__1 = ldf `names<-`;
    check L224() else D41();
  L66(r206):
    st m = r206;
    goto L67();
  L68(r210):
    st m = r210;
    goto L67();
  L71(r221):
    c52 = `is.object`(r221);
    if c52 then L383() else L384(r221);
  L220():
    dr10 = tryDispatchBuiltin.0("[<-", r84, r83);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L222() else L221(r83, l5, dr10);
  L221(r87, l7, r88):
    cnm6 = ld cnm;
    check L223() else D40();
  L283():
    c36 = `as.logical`(r153);
    if c36 then L284() else L47();
  L310():
    r173 = dyn names__2(l12, NULL, r172);
    check L311() else D88();
  L352():
    goto L63(r202);
  L358():
    xinds = ld xinds;
    check L360() else D113();
  L359():
    r205 = dyn base22(<lang merge(xinds, yinds, all.x, all.y)>);
    goto L66(r205);
  L366():
    integer = ldf integer;
    check L368() else D118();
  L367():
    r209 = dyn base23[xi, yi, `x.alone`, `y.alone`](<lang integer()>, <lang integer()>, <lang seq_len(nx)>, <lang seq_len(ny)>);
    goto L68(r209);
  L379():
    x33 = ld x;
    check L381() else D125();
  L380():
    r220 = dyn base26(<sym x>);
    goto L71(r220);
  D40():
    deopt 124 [r87, l7, r88, r83, cnm6];
  D41():
    deopt 127 [r90, l9, dx11];
  D88():
    deopt 303 [r172, r173];
  D113():
    deopt 388 [xinds];
  D118():
    deopt 402 [];
  D125():
    deopt 424 [x33];
  L47():
    goto L49(NULL);
  L49(r157):
    goto L50();
  L72(dx39):
    st `nm.x` = dx39;
    st nm = dx39;
    sym27 = ldf names;
    base27 = ldf names in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L387() else L388();
  L222():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L29(r83, l5, dx10);
  L223():
    cnm7 = force? cnm6;
    ___1 = ldf `[<-` in base;
    r91 = dyn ___1(r88, r83, cnm7);
    goto L29(r87, l7, r91);
  L224():
    r92 = dyn names__1(l9, NULL, dx11);
    check L225() else D42();
  L284():
    sym13 = ldf `as.character`;
    base13 = ldf `as.character` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L285() else L286();
  L311():
    st by = r173;
    l13 = ld bx;
    names__3 = ldf `names<-`;
    check L312() else D89();
  L360():
    xinds1 = force? xinds;
    checkMissing(xinds1);
    yinds = ld yinds;
    check L361() else D114();
  L368():
    r211 = dyn integer();
    check L369() else D119();
  L381():
    x34 = force? x33;
    checkMissing(x34);
    names6 = ldf names in base;
    r222 = dyn names6(x34);
    check L382() else D126();
  L383():
    dr38 = tryDispatchBuiltin.1("[", r221);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L385() else L384(dr38);
  L384(r224):
    by_x13 = ld `by.x`;
    check L386() else D127();
  D42():
    deopt 129 [r90, r92];
  D89():
    deopt 306 [r172, l13, r172];
  D114():
    deopt 390 [yinds];
  D119():
    deopt 403 [r211];
  D126():
    deopt 427 [r222];
  D127():
    deopt 428 [r224, by_x13];
  L48(r155):
    st by = r155;
    goto L49(r155);
  L73(r228):
    c53 = `is.object`(r228);
    if c53 then L391() else L392(r228);
  L225():
    st y = r92;
    goto L30();
  L285():
    by7 = ld by;
    check L287() else D76();
  L286():
    r154 = dyn base13(<sym by>);
    goto L48(r154);
  L312():
    r174 = dyn names__3(l13, NULL, r172);
    check L313() else D90();
  L361():
    yinds1 = force? yinds;
    checkMissing(yinds1);
    all_x1 = ld `all.x`;
    check L362() else D115();
  L369():
    integer1 = ldf integer;
    check L370() else D120();
  L382():
    goto L71(r222);
  L385():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L72(dx38);
  L386():
    by_x14 = force? by_x13;
    checkMissing(by_x14);
    r225 = `-`(<missing>, by_x14);
    __17 = ldf `[` in base;
    r226 = dyn __17(r224, r225);
    goto L72(r226);
  L387():
    x35 = ld x;
    check L389() else D128();
  L388():
    r227 = dyn base27(<sym x>);
    goto L73(r227);
  D76():
    deopt 257 [by7];
  D90():
    deopt 308 [r172, r174];
  D115():
    deopt 392 [all_x1];
  D120():
    deopt 406 [];
  D128():
    deopt 436 [x35];
  L74(dx41):
    st `nm.by` = dx41;
    sym28 = ldf names;
    base28 = ldf names in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L395() else L396();
  L287():
    by8 = force? by7;
    checkMissing(by8);
    as_character1 = ldf `as.character` in base;
    r156 = dyn as_character1(by8);
    check L288() else D77();
  L313():
    st bx = r174;
    do_call = ldf `do.call`;
    check L314() else D91();
  L362():
    all_x2 = force? all_x1;
    checkMissing(all_x2);
    all_y1 = ld `all.y`;
    check L363() else D116();
  L370():
    r212 = dyn integer1();
    check L371() else D121();
  L389():
    x36 = force? x35;
    checkMissing(x36);
    names7 = ldf names in base;
    r229 = dyn names7(x36);
    check L390() else D129();
  L391():
    dr40 = tryDispatchBuiltin.1("[", r228);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L393() else L392(dr40);
  L392(r231):
    by_x15 = ld `by.x`;
    check L394() else D130();
  D77():
    deopt 260 [r156];
  D91():
    deopt 311 [];
  D116():
    deopt 394 [all_y1];
  D121():
    deopt 407 [r212];
  D129():
    deopt 439 [r229];
  D130():
    deopt 440 [r231, by_x15];
  L75(r234):
    c54 = `is.object`(r234);
    if c54 then L399() else L400(r234);
  L288():
    goto L48(r156);
  L314():
    p42 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r176):
      return r176;
    L1():
      rbind = ldf rbind;
      p40 = prom<V +>{
        bx6 = ld bx;
        bx7 = force? bx6;
        checkMissing(bx7);
        return bx7;
      };
      p41 = prom<V +>{
        by9 = ld by;
        by10 = force? by9;
        checkMissing(by10);
        return by10;
      };
      r179 = dyn rbind(p40, p41);
      c41 = ldf c in base;
      r180 = dyn c41(r179, "\r");
      goto L0(r180);
    L2():
      r175 = dyn base16[, sep](<lang rbind(bx, by)>, "\r");
      goto L0(r175);
    };
    r182 = dyn do_call("paste", p42);
    check L315() else D92();
  L363():
    all_y2 = force? all_y1;
    checkMissing(all_y2);
    merge = ldf merge in base;
    r207 = dyn merge(xinds1, yinds1, all_x2, all_y2);
    check L364() else D117();
  L371():
    sym24 = ldf seq_len;
    base24 = ldf seq_len in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L372() else L373();
  L390():
    goto L73(r229);
  L393():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L74(dx40);
  L394():
    by_x16 = force? by_x15;
    __18 = ldf `[` in base;
    r232 = dyn __18(r231, by_x16);
    goto L74(r232);
  L395():
    y33 = ld y;
    check L397() else D131();
  L396():
    r233 = dyn base28(<sym y>);
    goto L75(r233);
  D92():
    deopt 314 [r182];
  D117():
    deopt 397 [r207];
  D131():
    deopt 446 [y33];
  L69(r214):
    sym25 = ldf seq_len;
    base25 = ldf seq_len in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L375() else L376();
  L76(dx43):
    st `nm.y` = dx43;
    ncol1 = ldf ncol;
    check L403() else D134();
  L315():
    st bz = r182;
    bz = ld bz;
    check L316() else D93();
  L364():
    goto L66(r207);
  L372():
    nx15 = ld nx;
    check L374() else D122();
  L373():
    r213 = dyn base24(<sym nx>);
    goto L69(r213);
  L397():
    y34 = force? y33;
    checkMissing(y34);
    names8 = ldf names in base;
    r235 = dyn names8(y34);
    check L398() else D132();
  L399():
    dr42 = tryDispatchBuiltin.1("[", r234);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L401() else L400(dr42);
  L400(r237):
    by_y13 = ld `by.y`;
    check L402() else D133();
  D93():
    deopt 316 [bz];
  D122():
    deopt 410 [nx15];
  D132():
    deopt 449 [r235];
  D133():
    deopt 450 [r237, by_y13];
  D134():
    deopt 456 [];
  L70(r217):
    list = ldf list in base;
    r219 = dyn list(r211, r212, r214, r217);
    check L378() else D124();
  L316():
    bz1 = force? bz;
    checkMissing(bz1);
    c42 = `is.object`(bz1);
    if c42 then L317() else L318(bz1);
  L374():
    nx16 = force? nx15;
    checkMissing(nx16);
    r215 = seq_len(nx16);
    goto L69(r215);
  L375():
    ny10 = ld ny;
    check L377() else D123();
  L376():
    r216 = dyn base25(<sym ny>);
    goto L70(r216);
  L398():
    goto L75(r235);
  L401():
    dx42 = getTryDispatchBuiltinValue(dr42);
    goto L76(dx42);
  L402():
    by_y14 = force? by_y13;
    checkMissing(by_y14);
    r238 = `-`(<missing>, by_y14);
    __19 = ldf `[` in base;
    r239 = dyn __19(r237, r238);
    goto L76(r239);
  L403():
    p43 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      return x38;
    };
    r241 = dyn ncol1(p43);
    check L404() else D135();
  D123():
    deopt 415 [ny10];
  D124():
    deopt 420 [r219];
  D135():
    deopt 458 [r241];
  L56(dx33):
    st bx = dx33;
    bz7 = ld bz;
    check L323() else D95();
  L317():
    dr32 = tryDispatchBuiltin.1("[", bz1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L319() else L318(dr32);
  L318(bz3):
    sym17 = ldf seq_len;
    base17 = ldf seq_len in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L320() else L321();
  L377():
    ny11 = force? ny10;
    checkMissing(ny11);
    r218 = seq_len(ny11);
    goto L70(r218);
  L378():
    goto L68(r219);
  L404():
    st ncx = r241;
    all_x3 = ld `all.x`;
    check L405() else D136();
  D95():
    deopt 324 [bz7];
  D136():
    deopt 460 [all_x3];
  L57(bz6, r184):
    __14 = ldf `[` in base;
    r186 = dyn __14(bz6, r184);
    goto L56(r186);
  L319():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L56(dx32);
  L320():
    nx6 = ld nx;
    check L322() else D94();
  L321():
    r183 = dyn base17(<sym nx>);
    goto L57(bz3, r183);
  L323():
    bz8 = force? bz7;
    checkMissing(bz8);
    c43 = `is.object`(bz8);
    if c43 then L324() else L325(bz8);
  L405():
    all_x4 = force? all_x3;
    checkMissing(all_x4);
    c55 = `as.logical`(all_x4);
    if c55 then L406() else L77();
  D94():
    deopt 319 [bz3, nx6];
  L58(dx35):
    st by = dx35;
    goto L50();
  L77():
    goto L79();
  L79():
    all_y3 = ld `all.y`;
    check L416() else D139();
  L322():
    nx7 = force? nx6;
    checkMissing(nx7);
    r185 = seq_len(nx7);
    goto L57(bz3, r185);
  L324():
    dr34 = tryDispatchBuiltin.1("[", bz8);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L326() else L325(dr34);
  L325(bz10):
    nx8 = ld nx;
    check L327() else D96();
  L406():
    sym29 = ldf length;
    base29 = ldf length in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L407() else L408();
  D96():
    deopt 326 [bz10, nx8];
  D139():
    deopt 475 [all_y3];
  L78(r243):
    st nxx = r243;
    r246 = `>`(r243, 0);
    st `all.x` = r246;
    goto L79();
  L326():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L58(dx34);
  L327():
    nx9 = force? nx8;
    checkMissing(nx9);
    sym18 = ldf seq_len;
    base18 = ldf seq_len in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L328() else L329();
  L407():
    m = ld m;
    check L409() else D137();
  L408():
    r242 = dyn base29(<lang `$`(m, x.alone)>);
    goto L78(r242);
  L416():
    all_y4 = force? all_y3;
    checkMissing(all_y4);
    c57 = `as.logical`(all_y4);
    if c57 then L417() else L80();
  D137():
    deopt 464 [m];
  L59(bz13, nx12, r188):
    r190 = `+`(nx12, r188);
    __15 = ldf `[` in base;
    r191 = dyn __15(bz13, r190);
    goto L58(r191);
  L80():
    goto L82();
  L82():
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L427() else L428();
  L328():
    ny6 = ld ny;
    check L330() else D97();
  L329():
    r187 = dyn base18(<sym ny>);
    goto L59(bz10, nx9, r187);
  L409():
    m1 = force? m;
    checkMissing(m1);
    c56 = `is.object`(m1);
    if c56 then L411() else L412(m1);
  L417():
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L418() else L419();
  D97():
    deopt 328 [bz10, nx9, ny6];
  L81(r249):
    st nyy = r249;
    r252 = `>`(r249, 0);
    st `all.y` = r252;
    goto L82();
  L83(r255):
    st lxy = r255;
    sym32 = ldf any;
    base32 = ldf any in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L435() else L436();
  L330():
    ny7 = force? ny6;
    checkMissing(ny7);
    r189 = seq_len(ny7);
    goto L59(bz10, nx9, r189);
  L410(dx45):
    length2 = ldf length in base;
    r245 = dyn length2(dx45);
    check L414() else D138();
  L411():
    dr44 = tryDispatchBuiltin.1("$", m1);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L413() else L412(dr44);
  L412(m3):
    r244 = `$`(m3, <sym x.alone>);
    goto L410(r244);
  L418():
    m4 = ld m;
    check L420() else D140();
  L419():
    r248 = dyn base30(<lang `$`(m, y.alone)>);
    goto L81(r248);
  L427():
    m8 = ld m;
    check L429() else D142();
  L428():
    r254 = dyn base31(<lang `$`(m, xi)>);
    goto L83(r254);
  D138():
    deopt 468 [r245];
  D140():
    deopt 479 [m4];
  D142():
    deopt 492 [m8];
  L84(r259):
    st `has.common.nms` = r259;
    has_common_nms2 = ld `has.common.nms`;
    check L440() else D147();
  L413():
    dx44 = getTryDispatchBuiltinValue(dr44);
    goto L410(dx44);
  L414():
    goto L78(r245);
  L420():
    m5 = force? m4;
    checkMissing(m5);
    c58 = `is.object`(m5);
    if c58 then L422() else L423(m5);
  L429():
    m9 = force? m8;
    checkMissing(m9);
    c59 = `is.object`(m9);
    if c59 then L431() else L432(m9);
  L435():
    _in_2 = ldf `%in%`;
    check L437() else D144();
  L436():
    r258 = dyn base32(<lang `<-`(cnm, `%in%`(nm.x, nm.y))>);
    goto L84(r258);
  D144():
    deopt 501 [];
  D147():
    deopt 509 [has_common_nms2];
  L421(dx47):
    length3 = ldf length in base;
    r251 = dyn length3(dx47);
    check L425() else D141();
  L422():
    dr46 = tryDispatchBuiltin.1("$", m5);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L424() else L423(dr46);
  L423(m7):
    r250 = `$`(m7, <sym y.alone>);
    goto L421(r250);
  L430(dx49):
    length4 = ldf length in base;
    r257 = dyn length4(dx49);
    check L434() else D143();
  L431():
    dr48 = tryDispatchBuiltin.1("$", m9);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L433() else L432(dr48);
  L432(m11):
    r256 = `$`(m11, <sym xi>);
    goto L430(r256);
  L437():
    p44 = prom<V +>{
      nm_x6 = ld `nm.x`;
      nm_x7 = force? nm_x6;
      checkMissing(nm_x7);
      return nm_x7;
    };
    p45 = prom<V +>{
      nm_y8 = ld `nm.y`;
      nm_y9 = force? nm_y8;
      checkMissing(nm_y9);
      return nm_y9;
    };
    r262 = dyn _in_2(p44, p45);
    check L438() else D145();
  L440():
    has_common_nms3 = force? has_common_nms2;
    checkMissing(has_common_nms3);
    c60 = `as.logical`(has_common_nms3);
    if c60 then L441() else L85(c60);
  D141():
    deopt 483 [r251];
  D143():
    deopt 496 [r257];
  D145():
    deopt 504 [r262];
  L85(c62):
    c74 = `as.logical`(c62);
    if c74 then L450() else L88();
  L424():
    dx46 = getTryDispatchBuiltinValue(dr46);
    goto L421(dx46);
  L425():
    goto L81(r251);
  L433():
    dx48 = getTryDispatchBuiltinValue(dr48);
    goto L430(dx48);
  L434():
    goto L83(r257);
  L438():
    st cnm = r262;
    any3 = ldf any in base;
    r263 = dyn any3(r262);
    check L439() else D146();
  L441():
    sym33 = ldf nzchar;
    base33 = ldf nzchar in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L442() else L443();
  D146():
    deopt 507 [r263];
  L86(c65, r265):
    c71 = `as.logical`(r265);
    c72 = `&&`(c65, c71);
    goto L85(c72);
  L88():
    goto L90();
  L90():
    x39 = ld x;
    check L458() else D153();
  L439():
    goto L84(r263);
  L442():
    suffixes9 = ld suffixes;
    check L444() else D148();
  L443():
    r264 = dyn base33(<lang `[`(suffixes, 1)>);
    goto L86(c60, r264);
  L450():
    paste3 = ldf paste0;
    check L451() else D150();
  D148():
    deopt 513 [c60, suffixes9];
  D150():
    deopt 522 [];
  D153():
    deopt 533 [x39];
  L444():
    suffixes10 = force? suffixes9;
    checkMissing(suffixes10);
    c66 = `is.object`(suffixes10);
    if c66 then L445() else L446(c60, suffixes10);
  L451():
    p46 = prom<V +>{
      nm_x8 = ld `nm.x`;
      nm_x9 = force? nm_x8;
      checkMissing(nm_x9);
      c75 = `is.object`(nm_x9);
      if c75 then L1() else L2(nm_x9);
    L0(dx53):
      return dx53;
    L1():
      dr52 = tryDispatchBuiltin.1("[", nm_x9);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(nm_x11):
      cnm8 = ld cnm;
      cnm9 = force? cnm8;
      __21 = ldf `[` in base;
      r268 = dyn __21(nm_x11, cnm9);
      goto L0(r268);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx52);
    };
    p47 = prom<V +>{
      suffixes13 = ld suffixes;
      suffixes14 = force? suffixes13;
      checkMissing(suffixes14);
      c76 = `is.object`(suffixes14);
      if c76 then L1() else L2(suffixes14);
    L0(dx55):
      return dx55;
    L1():
      dr54 = tryDispatchBuiltin.1("[", suffixes14);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(suffixes16):
      __22 = ldf `[` in base;
      r270 = dyn __22(suffixes16, 1);
      goto L0(r270);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx54);
    };
    r272 = dyn paste3(p46, p47);
    check L452() else D151();
  L458():
    x40 = force? x39;
    checkMissing(x40);
    c78 = `is.object`(x40);
    if c78 then L459() else L460(x40);
  D151():
    deopt 525 [r272];
  L87(c70, dx51):
    nzchar = ldf nzchar in base;
    r267 = dyn nzchar(dx51);
    check L448() else D149();
  L91(dx59):
    st x = dx59;
    sym37 = ldf c;
    base37 = ldf c in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L489() else L490();
  L445():
    dr50 = tryDispatchBuiltin.1("[", suffixes10);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L447() else L446(c60, dr50);
  L446(c68, suffixes12):
    __20 = ldf `[` in base;
    r266 = dyn __20(suffixes12, 1);
    goto L87(c68, r266);
  L452():
    l14 = ld `nm.x`;
    c77 = `is.object`(l14);
    if c77 then L453() else L454(r272, l14);
  L459():
    dr58 = tryDispatchBuiltin.1("[", x40);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L461() else L460(dr58);
  L460(x42):
    sym34 = ldf c;
    base34 = ldf c in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L462() else L463();
  D149():
    deopt 519 [c70, r267];
  L89(r276, dx57):
    st `nm.x` = dx57;
    goto L90();
  L92(x45, r280):
    sym35 = ldf c;
    base35 = ldf c in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L478() else L479();
  L98(r296):
    l17 = ld x;
    names__4 = ldf `names<-`;
    check L494() else D165();
  L447():
    dx50 = getTryDispatchBuiltinValue(dr50);
    goto L87(c60, dx50);
  L448():
    goto L86(c70, r267);
  L453():
    dr56 = tryDispatchBuiltin.0("[<-", l14, r272);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L455() else L454(r272, dr56);
  L454(r274, l16):
    cnm10 = ld cnm;
    check L456() else D152();
  L461():
    dx58 = getTryDispatchBuiltinValue(dr58);
    goto L91(dx58);
  L462():
    m12 = ld m;
    check L464() else D154();
  L463():
    r279 = dyn base34(<lang `$`(m, xi)>, <lang if(all.x, `$`(m, x.alone))>);
    goto L92(x42, r279);
  L489():
    nm_by = ld `nm.by`;
    check L491() else D162();
  L490():
    r295 = dyn base37(<sym nm.by>, <sym nm.x>);
    goto L98(r295);
  D152():
    deopt 527 [r274, l16, r272, cnm10];
  D154():
    deopt 537 [x42, m12];
  D162():
    deopt 570 [nm_by];
  D165():
    deopt 577 [r296, l17, r296];
  L95(r285):
    __24 = ldf `[` in base;
    r294 = dyn __24(x40, r280, r285, FALSE);
    goto L91(r294);
  L455():
    dx56 = getTryDispatchBuiltinValue(dr56);
    goto L89(r272, dx56);
  L456():
    cnm11 = force? cnm10;
    ___2 = ldf `[<-` in base;
    r277 = dyn ___2(l16, r272, cnm11);
    goto L89(r274, r277);
  L464():
    m13 = force? m12;
    checkMissing(m13);
    c79 = `is.object`(m13);
    if c79 then L466() else L467(x42, m13);
  L478():
    by_x17 = ld `by.x`;
    check L480() else D158();
  L479():
    r284 = dyn base35(<sym by.x>, <lang `[`(seq_len(ncx), `-`(by.x))>);
    goto L95(r284);
  L491():
    nm_by1 = force? nm_by;
    checkMissing(nm_by1);
    nm_x12 = ld `nm.x`;
    check L492() else D163();
  L494():
    r298 = dyn names__4(l17, NULL, r296);
    check L495() else D166();
  D158():
    deopt 551 [x45, by_x17];
  D163():
    deopt 572 [nm_x12];
  D166():
    deopt 579 [r296, r298];
  L465(x49, dx61):
    all_x5 = ld `all.x`;
    check L469() else D155();
  L466():
    dr60 = tryDispatchBuiltin.1("$", m13);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L468() else L467(x42, dr60);
  L467(x47, m15):
    r281 = `$`(m15, <sym xi>);
    goto L465(x47, r281);
  L480():
    by_x18 = force? by_x17;
    checkMissing(by_x18);
    sym36 = ldf seq_len;
    base36 = ldf seq_len in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L481() else L482();
  L492():
    nm_x13 = force? nm_x12;
    checkMissing(nm_x13);
    c85 = ldf c in base;
    r297 = dyn c85(nm_by1, nm_x13);
    check L493() else D164();
  L495():
    st x = r298;
    all_y5 = ld `all.y`;
    check L496() else D167();
  D155():
    deopt 540 [x49, all_x5];
  D164():
    deopt 575 [r297];
  D167():
    deopt 581 [all_y5];
  L96(x62, r287):
    c83 = `is.object`(r287);
    if c83 then L484() else L485(x62, r287);
  L468():
    dx60 = getTryDispatchBuiltinValue(dr60);
    goto L465(x42, dx60);
  L469():
    all_x6 = force? all_x5;
    checkMissing(all_x6);
    c80 = `as.logical`(all_x6);
    if c80 then L470() else L93();
  L481():
    ncx = ld ncx;
    check L483() else D159();
  L482():
    r286 = dyn base36(<sym ncx>);
    goto L96(x45, r286);
  L493():
    goto L98(r297);
  L496():
    all_y6 = force? all_y5;
    checkMissing(all_y6);
    c86 = `as.logical`(all_y6);
    if c86 then L497() else L99();
  D159():
    deopt 554 [x45, ncx];
  L93():
    goto L94(x49, NULL);
  L94(x56, dx64):
    c82 = ldf c in base;
    r283 = dyn c82(dx61, dx64);
    check L477() else D157();
  L97(x66, dx66):
    c84 = ldf c in base;
    r293 = dyn c84(by_x18, dx66);
    check L488() else D161();
  L99():
    goto L103();
  L103():
    has_common_nms4 = ld `has.common.nms`;
    check L526() else D183();
  L470():
    m16 = ld m;
    check L471() else D156();
  L483():
    ncx1 = force? ncx;
    checkMissing(ncx1);
    r288 = seq_len(ncx1);
    goto L96(x45, r288);
  L484():
    dr64 = tryDispatchBuiltin.1("[", r287);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L486() else L485(x62, dr64);
  L485(x64, r290):
    by_x19 = ld `by.x`;
    check L487() else D160();
  L497():
    y35 = ld y;
    check L498() else D168();
  D156():
    deopt 542 [x49, m16];
  D157():
    deopt 548 [x56, r283];
  D160():
    deopt 557 [x64, r290, by_x19];
  D161():
    deopt 562 [x66, r293];
  D168():
    deopt 583 [y35];
  D183():
    deopt 633 [has_common_nms4];
  L471():
    m17 = force? m16;
    checkMissing(m17);
    c81 = `is.object`(m17);
    if c81 then L473() else L474(x49, m17);
  L477():
    goto L92(x56, r283);
  L486():
    dx65 = getTryDispatchBuiltinValue(dr64);
    goto L97(x62, dx65);
  L487():
    by_x20 = force? by_x19;
    checkMissing(by_x20);
    r291 = `-`(<missing>, by_x20);
    __23 = ldf `[` in base;
    r292 = dyn __23(r290, r291);
    goto L97(x64, r292);
  L488():
    goto L95(r293);
  L498():
    y36 = force? y35;
    checkMissing(y36);
    c87 = `is.object`(y36);
    if c87 then L499() else L500(y36);
  L526():
    has_common_nms5 = force? has_common_nms4;
    checkMissing(has_common_nms5);
    c90 = `as.logical`(has_common_nms5);
    if c90 then L527() else L104(c90);
  L100(dx68):
    st ya = dx68;
    nm_by2 = ld `nm.by`;
    check L508() else D171();
  L104(c92):
    c104 = `as.logical`(c92);
    if c104 then L536() else L107();
  L472(x55, dx63):
    goto L94(x55, dx63);
  L473():
    dr62 = tryDispatchBuiltin.1("$", m17);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L475() else L474(x49, dr62);
  L474(x53, m19):
    r282 = `$`(m19, <sym x.alone>);
    goto L472(x53, r282);
  L499():
    dr66 = tryDispatchBuiltin.1("[", y36);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L501() else L500(dr66);
  L500(y38):
    m20 = ld m;
    check L502() else D169();
  L527():
    sym39 = ldf nzchar;
    base39 = ldf nzchar in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L528() else L529();
  D169():
    deopt 585 [y38, m20];
  D171():
    deopt 595 [nm_by2];
  L105(c95, r315):
    c101 = `as.logical`(r315);
    c102 = `&&`(c95, c101);
    goto L104(c102);
  L107():
    goto L109();
  L109():
    y43 = ld y;
    check L546() else D191();
  L475():
    dx62 = getTryDispatchBuiltinValue(dr62);
    goto L472(x49, dx62);
  L501():
    dx67 = getTryDispatchBuiltinValue(dr66);
    goto L100(dx67);
  L502():
    m21 = force? m20;
    checkMissing(m21);
    c88 = `is.object`(m21);
    if c88 then L504() else L505(y38, m21);
  L508():
    nm_by3 = force? nm_by2;
    checkMissing(nm_by3);
    l18 = ld ya;
    names__5 = ldf `names<-`;
    check L509() else D172();
  L528():
    suffixes17 = ld suffixes;
    check L530() else D184();
  L529():
    r314 = dyn base39(<lang `[`(suffixes, 2)>);
    goto L105(c90, r314);
  L536():
    _in_3 = ldf `%in%`;
    check L537() else D186();
  D172():
    deopt 598 [nm_by3, l18, nm_by3];
  D184():
    deopt 637 [c90, suffixes17];
  D186():
    deopt 646 [];
  D191():
    deopt 663 [y43];
  L503(y42, dx70):
    by_y15 = ld `by.y`;
    check L507() else D170();
  L504():
    dr68 = tryDispatchBuiltin.1("$", m21);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L506() else L505(y38, dr68);
  L505(y40, m23):
    r299 = `$`(m23, <sym y.alone>);
    goto L503(y40, r299);
  L509():
    r301 = dyn names__5(l18, NULL, nm_by3);
    check L510() else D173();
  L530():
    suffixes18 = force? suffixes17;
    checkMissing(suffixes18);
    c96 = `is.object`(suffixes18);
    if c96 then L531() else L532(c90, suffixes18);
  L537():
    p52 = prom<V +>{
      nm_y10 = ld `nm.y`;
      nm_y11 = force? nm_y10;
      checkMissing(nm_y11);
      return nm_y11;
    };
    p53 = prom<V +>{
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      return nm3;
    };
    r320 = dyn _in_3(p52, p53);
    check L538() else D187();
  L546():
    y44 = force? y43;
    checkMissing(y44);
    c108 = `is.object`(y44);
    if c108 then L547() else L548(y44);
  D170():
    deopt 588 [y42, by_y15];
  D173():
    deopt 600 [nm_by3, r301];
  D187():
    deopt 649 [r320];
  L106(c100, dx74):
    nzchar1 = ldf nzchar in base;
    r317 = dyn nzchar1(dx74);
    check L534() else D185();
  L110(dx82):
    st y = dx82;
    all_x9 = ld `all.x`;
    check L574() else D200();
  L506():
    dx69 = getTryDispatchBuiltinValue(dr68);
    goto L503(y38, dx69);
  L507():
    by_y16 = force? by_y15;
    __25 = ldf `[` in base;
    r300 = dyn __25(y36, dx70, by_y16, FALSE);
    goto L100(r300);
  L510():
    st ya = r301;
    x67 = ld x;
    check L511() else D174();
  L531():
    dr72 = tryDispatchBuiltin.1("[", suffixes18);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L533() else L532(c90, dr72);
  L532(c98, suffixes20):
    __27 = ldf `[` in base;
    r316 = dyn __27(suffixes20, 2);
    goto L106(c98, r316);
  L538():
    st cnm = r320;
    paste4 = ldf paste0;
    check L539() else D188();
  L547():
    dr80 = tryDispatchBuiltin.1("[", y44);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L549() else L548(dr80);
  L548(y46):
    sym40 = ldf c;
    base40 = ldf c in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L550() else L551();
  D174():
    deopt 602 [x67];
  D185():
    deopt 643 [c100, r317];
  D188():
    deopt 652 [];
  D200():
    deopt 698 [all_x9];
  L111(y49, r333):
    by_y17 = ld `by.y`;
    check L573() else D199();
  L511():
    x68 = force? x67;
    checkMissing(x68);
    c89 = `is.object`(x68);
    if c89 then L512() else L513(x68);
  L533():
    dx73 = getTryDispatchBuiltinValue(dr72);
    goto L106(c90, dx73);
  L534():
    goto L105(c100, r317);
  L539():
    p54 = prom<V +>{
      nm_y12 = ld `nm.y`;
      nm_y13 = force? nm_y12;
      checkMissing(nm_y13);
      c105 = `is.object`(nm_y13);
      if c105 then L1() else L2(nm_y13);
    L0(dx76):
      return dx76;
    L1():
      dr74 = tryDispatchBuiltin.1("[", nm_y13);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L3() else L2(dr74);
    L2(nm_y15):
      cnm12 = ld cnm;
      cnm13 = force? cnm12;
      __28 = ldf `[` in base;
      r321 = dyn __28(nm_y15, cnm13);
      goto L0(r321);
    L3():
      dx75 = getTryDispatchBuiltinValue(dr74);
      goto L0(dx75);
    };
    p55 = prom<V +>{
      suffixes21 = ld suffixes;
      suffixes22 = force? suffixes21;
      checkMissing(suffixes22);
      c106 = `is.object`(suffixes22);
      if c106 then L1() else L2(suffixes22);
    L0(dx78):
      return dx78;
    L1():
      dr76 = tryDispatchBuiltin.1("[", suffixes22);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(suffixes24):
      __29 = ldf `[` in base;
      r323 = dyn __29(suffixes24, 2);
      goto L0(r323);
    L3():
      dx77 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx77);
    };
    r325 = dyn paste4(p54, p55);
    check L540() else D189();
  L549():
    dx81 = getTryDispatchBuiltinValue(dr80);
    goto L110(dx81);
  L550():
    m24 = ld m;
    check L552() else D192();
  L551():
    r332 = dyn base40(<lang `$`(m, yi)>, <lang if(all.x, rep.int(1, nxx))>, <lang if(all.y, `$`(m, y.alone))>);
    goto L111(y46, r332);
  L574():
    all_x10 = force? all_x9;
    checkMissing(all_x10);
    c114 = `as.logical`(all_x10);
    if c114 then L575() else L117();
  D189():
    deopt 655 [r325];
  D192():
    deopt 667 [y46, m24];
  D199():
    deopt 690 [y49, by_y17];
  L101(dx72):
    st xa = dx72;
    nm_x16 = ld `nm.x`;
    check L520() else D178();
  L117():
    goto L130();
  L130():
    has_common_nms6 = ld `has.common.nms`;
    check L617() else D216();
  L512():
    dr70 = tryDispatchBuiltin.1("[", x68);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L514() else L513(dr70);
  L513(x70):
    sym38 = ldf `rep.int`;
    base38 = ldf `rep.int` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L515() else L516();
  L540():
    l20 = ld `nm.y`;
    c107 = `is.object`(l20);
    if c107 then L541() else L542(r325, l20);
  L552():
    m25 = force? m24;
    checkMissing(m25);
    c109 = `is.object`(m25);
    if c109 then L554() else L555(y46, m25);
  L573():
    by_y18 = force? by_y17;
    checkMissing(by_y18);
    r341 = `-`(<missing>, by_y18);
    __30 = ldf `[` in base;
    r342 = dyn __30(y44, r333, r341, FALSE);
    goto L110(r342);
  L575():
    lxy = ld lxy;
    check L576() else D201();
  D178():
    deopt 618 [nm_x16];
  D201():
    deopt 700 [lxy];
  D216():
    deopt 759 [has_common_nms6];
  L102(x73, r303):
    nm_x14 = ld `nm.x`;
    check L519() else D177();
  L108(r329, dx80):
    st `nm.y` = dx80;
    goto L109();
  L514():
    dx71 = getTryDispatchBuiltinValue(dr70);
    goto L101(dx71);
  L515():
    nyy = ld nyy;
    check L517() else D175();
  L516():
    r302 = dyn base38(NA_INT, <sym nyy>);
    goto L102(x70, r302);
  L520():
    nm_x17 = force? nm_x16;
    checkMissing(nm_x17);
    l19 = ld xa;
    names__6 = ldf `names<-`;
    check L521() else D179();
  L541():
    dr78 = tryDispatchBuiltin.0("[<-", l20, r325);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L543() else L542(r325, dr78);
  L542(r327, l22):
    cnm14 = ld cnm;
    check L544() else D190();
  L553(y53, dx84):
    all_x7 = ld `all.x`;
    check L557() else D193();
  L554():
    dr82 = tryDispatchBuiltin.1("$", m25);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L556() else L555(y46, dr82);
  L555(y51, m27):
    r334 = `$`(m27, <sym yi>);
    goto L553(y51, r334);
  L576():
    lxy1 = force? lxy;
    checkMissing(lxy1);
    r343 = `+`(lxy1, 1);
    lxy2 = ld lxy;
    check L577() else D202();
  L617():
    has_common_nms7 = force? has_common_nms6;
    checkMissing(has_common_nms7);
    c123 = `as.logical`(has_common_nms7);
    if c123 then L618() else L131();
  D175():
    deopt 607 [x70, nyy];
  D177():
    deopt 611 [x73, nm_x14];
  D179():
    deopt 621 [nm_x17, l19, nm_x17];
  D190():
    deopt 657 [r327, l22, r325, cnm14];
  D193():
    deopt 670 [y53, all_x7];
  D202():
    deopt 703 [r343, lxy2];
  L131():
    goto L132();
  L132():
    no_dups1 = ld `no.dups`;
    check L623() else D220();
  L517():
    nyy1 = force? nyy;
    checkMissing(nyy1);
    rep_int = ldf `rep.int` in base;
    r304 = dyn rep_int(NA_INT, nyy1);
    check L518() else D176();
  L519():
    nm_x15 = force? nm_x14;
    __26 = ldf `[` in base;
    r305 = dyn __26(x68, r303, nm_x15, FALSE);
    goto L101(r305);
  L521():
    r306 = dyn names__6(l19, NULL, nm_x17);
    check L522() else D180();
  L543():
    dx79 = getTryDispatchBuiltinValue(dr78);
    goto L108(r325, dx79);
  L544():
    cnm15 = force? cnm14;
    ___3 = ldf `[<-` in base;
    r330 = dyn ___3(l22, r325, cnm15);
    goto L108(r327, r330);
  L556():
    dx83 = getTryDispatchBuiltinValue(dr82);
    goto L553(y46, dx83);
  L557():
    all_x8 = force? all_x7;
    checkMissing(all_x8);
    c110 = `as.logical`(all_x8);
    if c110 then L558() else L112();
  L577():
    lxy3 = force? lxy2;
    checkMissing(lxy3);
    nxx2 = ld nxx;
    check L578() else D203();
  L618():
    nm_y16 = ld `nm.y`;
    check L619() else D217();
  D176():
    deopt 610 [x70, r304];
  D180():
    deopt 623 [nm_x17, r306];
  D203():
    deopt 704 [r343, lxy3, nxx2];
  D217():
    deopt 761 [nm_y16];
  D220():
    deopt 770 [no_dups1];
  L112():
    goto L114(y53, NULL);
  L114(y59, r338):
    all_y7 = ld `all.y`;
    check L564() else D196();
  L518():
    goto L102(x70, r304);
  L522():
    st xa = r306;
    rbind1 = ldf rbind;
    check L523() else D181();
  L558():
    sym41 = ldf `rep.int`;
    base41 = ldf `rep.int` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L559() else L560();
  L578():
    nxx3 = force? nxx2;
    checkMissing(nxx3);
    r344 = `+`(lxy3, nxx3);
    r345 = `:`(r343, r344);
    st zap = r345;
    sym42 = ldf seq_along;
    base42 = ldf seq_along in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L579() else L580();
  L619():
    nm_y17 = force? nm_y16;
    checkMissing(nm_y17);
    l46 = ld y;
    names__7 = ldf `names<-`;
    check L620() else D218();
  L623():
    no_dups2 = force? no_dups1;
    checkMissing(no_dups2);
    c124 = `as.logical`(no_dups2);
    if c124 then L624() else L133(c124);
  D181():
    deopt 626 [];
  D196():
    deopt 681 [y59, all_y7];
  D218():
    deopt 764 [nm_y17, l46, nm_y17];
  L113(y58, r336):
    goto L114(y58, r336);
  L118(r347):
    s = toForSeq(r347);
    l23 = length(s);
    i = 0;
    goto L119(i);
  L133(c126):
    c139 = `as.logical`(c126);
    if c139 then L637() else L137(c139);
  L523():
    p48 = prom<V +>{
      x74 = ld x;
      x75 = force? x74;
      checkMissing(x75);
      return x75;
    };
    p51 = prom<V +>{
      cbind4 = ldf cbind;
      p49 = prom<V +>{
        ya = ld ya;
        ya1 = force? ya;
        checkMissing(ya1);
        return ya1;
      };
      p50 = prom<V +>{
        xa = ld xa;
        xa1 = force? xa;
        checkMissing(xa1);
        return xa1;
      };
      r310 = dyn cbind4(p49, p50);
      return r310;
    };
    r312 = dyn rbind1(p48, p51);
    check L524() else D182();
  L559():
    nxx = ld nxx;
    check L561() else D194();
  L560():
    r335 = dyn base41(1, <sym nxx>);
    goto L113(y53, r335);
  L564():
    all_y8 = force? all_y7;
    checkMissing(all_y8);
    c111 = `as.logical`(all_y8);
    if c111 then L565() else L115();
  L579():
    y67 = ld y;
    check L581() else D204();
  L580():
    r346 = dyn base42(<sym y>);
    goto L118(r346);
  L620():
    r376 = dyn names__7(l46, NULL, nm_y17);
    check L621() else D219();
  L624():
    sym44 = ldf any;
    base44 = ldf any in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L625() else L626();
  D182():
    deopt 629 [r312];
  D194():
    deopt 675 [y53, nxx];
  D204():
    deopt 710 [y67];
  D219():
    deopt 766 [nm_y17, r376];
  L115():
    goto L116(y59, NULL);
  L116(y66, dx87):
    c113 = ldf c in base;
    r340 = dyn c113(dx84, r338, dx87);
    check L572() else D198();
  L119(i1):
    i2 = `+`.1(i1, 1);
    c115 = `<`.1(l23, i2);
    if c115 then L582() else L129();
  L134(c129, r378):
    c136 = `as.logical`(r378);
    c137 = `&&`(c129, c136);
    goto L133(c137);
  L137(c141):
    c153 = `as.logical`(c141);
    if c153 then L646() else L140();
  L524():
    st x = r312;
    goto L103();
  L561():
    nxx1 = force? nxx;
    checkMissing(nxx1);
    rep_int1 = ldf `rep.int` in base;
    r337 = dyn rep_int1(1, nxx1);
    check L562() else D195();
  L565():
    m28 = ld m;
    check L566() else D197();
  L581():
    y68 = force? y67;
    checkMissing(y68);
    r348 = seq_along(y68);
    goto L118(r348);
  L621():
    st y = r376;
    goto L132();
  L625():
    sym45 = ldf match;
    base45 = ldf match in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L627() else L628();
  L626():
    r377 = dyn base44(<lang `>`(`(`(`<-`(mi, match(nm.by, names(y), 0))), 0)>);
    goto L134(c124, r377);
  L637():
    sym47 = ldf nzchar;
    base47 = ldf nzchar in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L638() else L639();
  D195():
    deopt 678 [y53, r337];
  D197():
    deopt 683 [y59, m28];
  D198():
    deopt 689 [y66, r340];
  L129():
    x76 = `[[`(s, i2, NULL, TRUE);
    st i = x76;
    sym43 = ldf `is.matrix`;
    base43 = ldf `is.matrix` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L583() else L584();
  L135(c132, r380):
    st mi = r380;
    r385 = `>`(r380, 0);
    any4 = ldf any in base;
    r386 = dyn any4(r385);
    check L635() else D225();
  L138(c144, r388):
    c150 = `as.logical`(r388);
    c151 = `&&`(c144, c150);
    goto L137(c151);
  L140():
    goto L142();
  L142():
    sym49 = ldf c;
    base49 = ldf c in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L658() else L659();
  L562():
    goto L113(y53, r337);
  L566():
    m29 = force? m28;
    checkMissing(m29);
    c112 = `is.object`(m29);
    if c112 then L568() else L569(y59, m29);
  L572():
    goto L111(y66, r340);
  L582():
    goto L130();
  L627():
    nm_by4 = ld `nm.by`;
    check L629() else D221();
  L628():
    r379 = dyn base45(<sym nm.by>, <lang names(y)>, 0);
    goto L135(c124, r379);
  L638():
    suffixes25 = ld suffixes;
    check L640() else D226();
  L639():
    r387 = dyn base47(<lang `[`(suffixes, 2)>);
    goto L138(c139, r387);
  L646():
    paste5 = ldf paste0;
    check L647() else D228();
  D221():
    deopt 776 [c124, nm_by4];
  D225():
    deopt 792 [c132, r386];
  D226():
    deopt 796 [c139, suffixes25];
  D228():
    deopt 805 [];
  L120(i7, r350):
    c117 = `as.logical`(r350);
    if c117 then L591() else L122();
  L143(r412):
    st nm = r412;
    sym52 = ldf any;
    base52 = ldf any in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L669() else L670();
  L567(y65, dx86):
    goto L116(y65, dx86);
  L568():
    dr84 = tryDispatchBuiltin.1("$", m29);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L570() else L569(y59, dr84);
  L569(y63, m31):
    r339 = `$`(m31, <sym y.alone>);
    goto L567(y63, r339);
  L583():
    y69 = ld y;
    check L585() else D205();
  L584():
    r349 = dyn base43(<lang `[[`(y, i)>);
    goto L120(i2, r349);
  L629():
    nm_by5 = force? nm_by4;
    checkMissing(nm_by5);
    sym46 = ldf names;
    base46 = ldf names in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L630() else L631();
  L635():
    goto L134(c132, r386);
  L640():
    suffixes26 = force? suffixes25;
    checkMissing(suffixes26);
    c145 = `is.object`(suffixes26);
    if c145 then L641() else L642(c139, suffixes26);
  L647():
    p56 = prom<V +>{
      sym48 = ldf names;
      base48 = ldf names in base;
      guard48 = `==`.4(sym48, base48);
      if guard48 then L2() else L3();
    L0(r392):
      c154 = `is.object`(r392);
      if c154 then L4() else L5(r392);
    L2():
      y75 = ld y;
      y76 = force? y75;
      checkMissing(y76);
      names10 = ldf names in base;
      r393 = dyn names10(y76);
      goto L0(r393);
    L3():
      r391 = dyn base48(<sym y>);
      goto L0(r391);
    L1(dx105):
      return dx105;
    L4():
      dr100 = tryDispatchBuiltin.1("[", r392);
      dc50 = getTryDispatchBuiltinDispatched(dr100);
      if dc50 then L6() else L5(dr100);
    L5(r395):
      mi = ld mi;
      mi1 = force? mi;
      __35 = ldf `[` in base;
      r396 = dyn __35(r395, mi1);
      goto L1(r396);
    L6():
      dx104 = getTryDispatchBuiltinValue(dr100);
      goto L1(dx104);
    };
    p57 = prom<V +>{
      suffixes29 = ld suffixes;
      suffixes30 = force? suffixes29;
      checkMissing(suffixes30);
      c155 = `is.object`(suffixes30);
      if c155 then L1() else L2(suffixes30);
    L0(dx107):
      return dx107;
    L1():
      dr102 = tryDispatchBuiltin.1("[", suffixes30);
      dc51 = getTryDispatchBuiltinDispatched(dr102);
      if dc51 then L3() else L2(dr102);
    L2(suffixes32):
      __36 = ldf `[` in base;
      r398 = dyn __36(suffixes32, 2);
      goto L0(r398);
    L3():
      dx106 = getTryDispatchBuiltinValue(dr102);
      goto L0(dx106);
    };
    r400 = dyn paste5(p56, p57);
    check L648() else D229();
  L658():
    sym50 = ldf names;
    base50 = ldf names in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L660() else L661();
  L659():
    r411 = dyn base49(<lang names(x)>, <lang names(y)>);
    goto L143(r411);
  D205():
    deopt 715 [i2, y69];
  D229():
    deopt 808 [r400];
  L122():
    zap2 = ld zap;
    check L605() else D211();
  L126(i32):
    goto L119(i32);
  L136(c135, r382):
    match3 = ldf match in base;
    r384 = dyn match3(nm_by5, r382, 0, NULL);
    check L634() else D224();
  L139(c149, dx103):
    nzchar2 = ldf nzchar in base;
    r390 = dyn nzchar2(dx103);
    check L644() else D227();
  L144(r414):
    sym51 = ldf names;
    base51 = ldf names in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L664() else L665();
  L146(r421):
    c158 = `as.logical`(r421);
    if c158 then L674() else L147();
  L570():
    dx85 = getTryDispatchBuiltinValue(dr84);
    goto L567(y59, dx85);
  L585():
    y70 = force? y69;
    checkMissing(y70);
    c116 = `is.object`(y70);
    if c116 then L586() else L587(i2, y70);
  L591():
    l24 = ld y;
    c118 = `is.object`(l24);
    if c118 then L592() else L593(i7, NA_LGL, l24, NA_LGL, l24);
  L630():
    y73 = ld y;
    check L632() else D222();
  L631():
    r381 = dyn base46(<sym y>);
    goto L136(c124, r381);
  L641():
    dr98 = tryDispatchBuiltin.1("[", suffixes26);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L643() else L642(c139, dr98);
  L642(c147, suffixes28):
    __34 = ldf `[` in base;
    r389 = dyn __34(suffixes28, 2);
    goto L139(c147, r389);
  L648():
    l47 = ld y;
    names11 = ldf names;
    check L649() else D230();
  L660():
    x77 = ld x;
    check L662() else D235();
  L661():
    r413 = dyn base50(<sym x>);
    goto L144(r413);
  L669():
    duplicated = ldf duplicated;
    check L671() else D240();
  L670():
    r420 = dyn base52(<lang `<-`(d, duplicated(nm))>);
    goto L146(r420);
  D211():
    deopt 739 [i7, zap2];
  D222():
    deopt 780 [c124, y73];
  D224():
    deopt 787 [c135, r384];
  D227():
    deopt 802 [c149, r390];
  D230():
    deopt 810 [r400, l47, r400];
  D235():
    deopt 827 [x77];
  D240():
    deopt 843 [];
  L121(i11, dx89):
    is_matrix = ldf `is.matrix` in base;
    r352 = dyn is_matrix(dx89);
    check L590() else D207();
  L123(i19, r359, l30, r360, dx91):
    c119 = `is.object`(dx91);
    if c119 then L596() else L597(i19, r359, l30, dx91);
  L145(r417):
    c157 = ldf c in base;
    r419 = dyn c157(r414, r417);
    check L668() else D239();
  L147():
    goto L151();
  L151():
    cbind5 = ldf cbind;
    check L686() else D249();
  L586():
    dr86 = tryDispatchBuiltin.1("[[", y70);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L588() else L587(i2, dr86);
  L587(i9, y72):
    i12 = ld i;
    check L589() else D206();
  L592():
    dr88 = tryDispatchBuiltin.1("[[", l24);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L594() else L593(i7, NA_LGL, l24, NA_LGL, dr88);
  L593(i17, r355, l27, r356, l28):
    i20 = ld i;
    check L595() else D208();
  L605():
    zap3 = force? zap2;
    checkMissing(zap3);
    l37 = ld y;
    c121 = `is.object`(l37);
    if c121 then L606() else L607(i7, zap3, l37, zap3, l37);
  L632():
    y74 = force? y73;
    checkMissing(y74);
    names9 = ldf names in base;
    r383 = dyn names9(y74);
    check L633() else D223();
  L634():
    goto L135(c135, r384);
  L643():
    dx102 = getTryDispatchBuiltinValue(dr98);
    goto L139(c139, dx102);
  L644():
    goto L138(c149, r390);
  L649():
    r401 = dyn names11(r400, NULL);
    check L650() else D231();
  L662():
    x78 = force? x77;
    checkMissing(x78);
    names12 = ldf names in base;
    r415 = dyn names12(x78);
    check L663() else D236();
  L664():
    y77 = ld y;
    check L666() else D237();
  L665():
    r416 = dyn base51(<sym y>);
    goto L145(r416);
  L671():
    p58 = prom<V +>{
      nm4 = ld nm;
      nm5 = force? nm4;
      checkMissing(nm5);
      return nm5;
    };
    r423 = dyn duplicated(p58);
    check L672() else D241();
  L674():
    sym53 = ldf sum;
    base53 = ldf sum in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L675() else L676();
  D206():
    deopt 717 [i9, y72, i12];
  D207():
    deopt 721 [i11, r352];
  D208():
    deopt 726 [i17, r355, l27, r356, l28, i20];
  D223():
    deopt 783 [c124, r383];
  D231():
    deopt 812 [r400, l47, r400, r401];
  D236():
    deopt 830 [r415];
  D237():
    deopt 833 [y77];
  D239():
    deopt 838 [r419];
  D241():
    deopt 845 [r423];
  D249():
    deopt 876 [];
  L124(i25, r365, l34, dx95):
    c120 = `is.object`(l34);
    if c120 then L600() else L601(i25, r365, l34);
  L127(i36, zap10, l43, zap11, dx99):
    is_na__ = ldf `is.na<-`;
    check L610() else D213();
  L148(r426):
    r428 = `>`(r426, 1);
    c159 = `as.logical`(r428);
    if c159 then L679() else L149();
  L588():
    dx88 = getTryDispatchBuiltinValue(dr86);
    goto L121(i2, dx88);
  L589():
    i13 = force? i12;
    __31 = ldf `[[` in base;
    r351 = dyn __31(y72, i13);
    goto L121(i9, r351);
  L590():
    goto L120(i11, r352);
  L594():
    dx90 = getTryDispatchBuiltinValue(dr88);
    goto L123(i7, NA_LGL, l24, NA_LGL, dx90);
  L595():
    i21 = force? i20;
    __32 = ldf `[[` in base;
    r361 = dyn __32(l28, i21);
    goto L123(i17, r355, l27, r356, r361);
  L596():
    dr90 = tryDispatchBuiltin.0("[<-", dx91, r360);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L598() else L597(i19, r359, l30, dr90);
  L597(i23, r363, l32, dx93):
    zap = ld zap;
    check L599() else D209();
  L606():
    dr94 = tryDispatchBuiltin.1("[[", l37);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L608() else L607(i7, zap3, l37, zap3, dr94);
  L607(i34, zap6, l40, zap7, l41):
    i37 = ld i;
    check L609() else D212();
  L633():
    goto L136(c124, r383);
  L650():
    c156 = `is.object`(r401);
    if c156 then L651() else L652(r400, l47, r401);
  L663():
    goto L144(r415);
  L666():
    y78 = force? y77;
    checkMissing(y78);
    names13 = ldf names in base;
    r418 = dyn names13(y78);
    check L667() else D238();
  L668():
    goto L143(r419);
  L672():
    st d = r423;
    any5 = ldf any in base;
    r424 = dyn any5(r423);
    check L673() else D242();
  L675():
    d = ld d;
    check L677() else D243();
  L676():
    r425 = dyn base53(<sym d>);
    goto L148(r425);
  L686():
    p64 = prom<V +>{
      x79 = ld x;
      x80 = force? x79;
      checkMissing(x80);
      return x80;
    };
    p65 = prom<V +>{
      y79 = ld y;
      y80 = force? y79;
      checkMissing(y80);
      return y80;
    };
    r445 = dyn cbind5(p64, p65);
    check L687() else D250();
  D209():
    deopt 730 [i23, r363, l32, dx93, r360, zap];
  D212():
    deopt 743 [i34, zap6, l40, zap7, l41, i37];
  D213():
    deopt 747 [i36, zap10, l43, dx99, zap11];
  D238():
    deopt 836 [r418];
  D242():
    deopt 848 [r424];
  D243():
    deopt 851 [d];
  D250():
    deopt 879 [r445];
  L125(i29, r370, dx97):
    st y = dx97;
    goto L126(i29);
  L141(r407, l51, dx109):
    names__8 = ldf `names<-`;
    check L655() else D233();
  L149():
    warning1 = ldf warning;
    check L683() else D247();
  L150(r436):
    goto L151();
  L598():
    dx94 = getTryDispatchBuiltinValue(dr90);
    goto L124(i19, r359, l30, dx94);
  L599():
    zap1 = force? zap;
    ___4 = ldf `[<-` in base;
    r366 = dyn ___4(dx91, zap1, <missing>, r360);
    goto L124(i23, r363, l32, r366);
  L600():
    dr92 = tryDispatchBuiltin.0("[[<-", l34, dx95);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L602() else L601(i25, r365, dr92);
  L601(i27, r368, l36):
    i30 = ld i;
    check L603() else D210();
  L608():
    dx98 = getTryDispatchBuiltinValue(dr94);
    goto L127(i7, zap3, l37, zap3, dx98);
  L609():
    i38 = force? i37;
    __33 = ldf `[[` in base;
    r373 = dyn __33(l41, i38);
    goto L127(i34, zap6, l40, zap7, r373);
  L610():
    r374 = dyn is_na__(dx99, NULL, zap11);
    check L611() else D214();
  L651():
    dr104 = tryDispatchBuiltin.0("[<-", r401, r400);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L653() else L652(r400, l47, dr104);
  L652(r404, l49, r405):
    mi2 = ld mi;
    check L654() else D232();
  L667():
    goto L145(r418);
  L673():
    goto L146(r424);
  L677():
    d1 = force? d;
    checkMissing(d1);
    sum = ldf sum in base;
    r427 = dyn sum(d1);
    check L678() else D244();
  L679():
    warning = ldf warning;
    check L680() else D245();
  L687():
    st res = r445;
    sort1 = ld sort;
    check L688() else D251();
  D210():
    deopt 735 [i27, r368, l36, dx95, i30];
  D214():
    deopt 749 [i36, zap10, l43, r374];
  D232():
    deopt 814 [r404, l49, r405, r400, mi2];
  D233():
    deopt 817 [r407, l51, dx109];
  D244():
    deopt 854 [r427];
  D245():
    deopt 858 [];
  D247():
    deopt 866 [];
  D251():
    deopt 881 [sort1];
  L602():
    dx96 = getTryDispatchBuiltinValue(dr92);
    goto L125(i25, r365, dx96);
  L603():
    i31 = force? i30;
    ____ = ldf `[[<-` in base;
    r371 = dyn ____(l36, dx95, i31);
    goto L125(i27, r368, r371);
  L611():
    c122 = `is.object`(l43);
    if c122 then L612() else L613(i36, zap10, l43);
  L653():
    dx108 = getTryDispatchBuiltinValue(dr104);
    goto L141(r400, l47, dx108);
  L654():
    mi3 = force? mi2;
    ___5 = ldf `[<-` in base;
    r408 = dyn ___5(r405, r400, mi3);
    goto L141(r404, l49, r408);
  L655():
    r409 = dyn names__8(l51, NULL, dx109);
    check L656() else D234();
  L678():
    goto L148(r427);
  L680():
    p61 = prom<V +>{
      paste6 = ldf paste;
      p60 = prom<V +>{
        sQuote = ldf sQuote;
        p59 = prom<V +>{
          nm6 = ld nm;
          nm7 = force? nm6;
          checkMissing(nm7);
          c160 = `is.object`(nm7);
          if c160 then L1() else L2(nm7);
        L0(dx111):
          return dx111;
        L1():
          dr106 = tryDispatchBuiltin.1("[", nm7);
          dc53 = getTryDispatchBuiltinDispatched(dr106);
          if dc53 then L3() else L2(dr106);
        L2(nm9):
          d2 = ld d;
          d3 = force? d2;
          __37 = ldf `[` in base;
          r429 = dyn __37(nm9, d3);
          goto L0(r429);
        L3():
          dx110 = getTryDispatchBuiltinValue(dr106);
          goto L0(dx110);
        };
        r431 = dyn sQuote(p59);
        return r431;
      };
      r433 = dyn paste6[, collapse](p60, ", ");
      return r433;
    };
    r435 = dyn warning[, , , domain]("column names ", p61, " are duplicated in the result", NA_LGL);
    check L681() else D246();
  L683():
    p63 = prom<V +>{
      sQuote1 = ldf sQuote;
      p62 = prom<V +>{
        nm10 = ld nm;
        nm11 = force? nm10;
        checkMissing(nm11);
        c161 = `is.object`(nm11);
        if c161 then L1() else L2(nm11);
      L0(dx113):
        return dx113;
      L1():
        dr108 = tryDispatchBuiltin.1("[", nm11);
        dc54 = getTryDispatchBuiltinDispatched(dr108);
        if dc54 then L3() else L2(dr108);
      L2(nm13):
        d4 = ld d;
        d5 = force? d4;
        __38 = ldf `[` in base;
        r437 = dyn __38(nm13, d5);
        goto L0(r437);
      L3():
        dx112 = getTryDispatchBuiltinValue(dr108);
        goto L0(dx112);
      };
      r439 = dyn sQuote1(p62);
      return r439;
    };
    r441 = dyn warning1[, , , domain]("column name ", p63, " is duplicated in the result", NA_LGL);
    check L684() else D248();
  L688():
    sort2 = force? sort1;
    checkMissing(sort2);
    c162 = `as.logical`(sort2);
    if c162 then L689() else L152();
  D234():
    deopt 819 [r407, r409];
  D246():
    deopt 864 [r435];
  D248():
    deopt 872 [r441];
  L128(i42, zap15, dx101):
    st y = dx101;
    goto L126(i42);
  L152():
    goto L34();
  L612():
    dr96 = tryDispatchBuiltin.0("[[<-", l43, r374);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L614() else L613(i36, zap10, dr96);
  L613(i40, zap13, l45):
    i43 = ld i;
    check L615() else D215();
  L656():
    st y = r409;
    goto L142();
  L681():
    goto L150(r435);
  L684():
    goto L150(r441);
  L689():
    res = ld res;
    check L690() else D252();
  D215():
    deopt 750 [i40, zap13, l45, r374, i43];
  D252():
    deopt 883 [res];
  L614():
    dx100 = getTryDispatchBuiltinValue(dr96);
    goto L128(i36, zap10, dx100);
  L615():
    i44 = force? i43;
    ____1 = ldf `[[<-` in base;
    r375 = dyn ____1(l45, r374, i44);
    goto L128(i40, zap13, r375);
  L690():
    res1 = force? res;
    checkMissing(res1);
    c163 = `is.object`(res1);
    if c163 then L691() else L692(res1);
  L153(dx115):
    st res = dx115;
    goto L34();
  L691():
    dr110 = tryDispatchBuiltin.1("[", res1);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L693() else L692(dr110);
  L692(res3):
    all_x11 = ld `all.x`;
    check L694() else D253();
  D253():
    deopt 885 [res3, all_x11];
  L693():
    dx114 = getTryDispatchBuiltinValue(dr110);
    goto L153(dx114);
  L694():
    all_x12 = force? all_x11;
    checkMissing(all_x12);
    c164 = `as.logical`(all_x12);
    if c164 then L154(res3, c164) else L695();
  L154(res4, c165):
    c170 = `as.logical`(c165);
    if c170 then L698() else L155();
  L695():
    all_y9 = ld `all.y`;
    check L696() else D254();
  D254():
    deopt 887 [res3, c164, all_y9];
  L155():
    sort_list = ldf `sort.list`;
    check L711() else D261();
  L158(r453):
    __41 = ldf `[` in base;
    r458 = dyn __41(res1, r453, <missing>, FALSE);
    goto L153(r458);
  L696():
    all_y10 = force? all_y9;
    checkMissing(all_y10);
    c167 = `as.logical`(all_y10);
    c168 = `||`(c164, c167);
    goto L154(res3, c168);
  L698():
    x81 = ld x;
    check L699() else D255();
  D255():
    deopt 890 [res4, x81];
  D261():
    deopt 917 [res4];
  L699():
    x82 = force? x81;
    checkMissing(x82);
    c171 = `is.object`(x82);
    if c171 then L700() else L701(res4, x82);
  L711():
    p67 = prom<V +>{
      bx16 = ld bx;
      bx17 = force? bx16;
      checkMissing(bx17);
      c172 = `is.object`(bx17);
      if c172 then L1() else L2(bx17);
    L0(dx119):
      return dx119;
    L1():
      dr114 = tryDispatchBuiltin.1("[", bx17);
      dc57 = getTryDispatchBuiltinDispatched(dr114);
      if dc57 then L3() else L2(dr114);
    L2(bx19):
      m32 = ld m;
      m33 = force? m32;
      checkMissing(m33);
      c173 = `is.object`(m33);
      if c173 then L5() else L6(bx19, m33);
    L3():
      dx118 = getTryDispatchBuiltinValue(dr114);
      goto L0(dx118);
    L4(bx23, dx121):
      __40 = ldf `[` in base;
      r455 = dyn __40(bx23, dx121);
      goto L0(r455);
    L5():
      dr116 = tryDispatchBuiltin.1("$", m33);
      dc58 = getTryDispatchBuiltinDispatched(dr116);
      if dc58 then L7() else L6(bx19, dr116);
    L6(bx21, m35):
      r454 = `$`(m35, <sym xi>);
      goto L4(bx21, r454);
    L7():
      dx120 = getTryDispatchBuiltinValue(dr116);
      goto L4(bx19, dx120);
    };
    r457 = dyn sort_list(p67);
    check L712() else D262();
  D262():
    deopt 919 [res4, r457];
  L156(res12, dx117):
    st x = dx117;
    l52 = ld x;
    attributes__ = ldf `attributes<-`;
    check L706() else D257();
  L700():
    dr112 = tryDispatchBuiltin.1("[", x82);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L702() else L701(res4, dr112);
  L701(res10, x84):
    sym54 = ldf seq_len;
    base54 = ldf seq_len in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L703() else L704();
  L712():
    goto L158(r457);
  D257():
    deopt 906 [res12, NULL, l52, NULL];
  L157(res15, r447):
    __39 = ldf `[` in base;
    r449 = dyn __39(x82, <missing>, r447, FALSE);
    goto L156(res15, r449);
  L702():
    dx116 = getTryDispatchBuiltinValue(dr112);
    goto L156(res4, dx116);
  L703():
    l_b4 = ld `l.b`;
    check L705() else D256();
  L704():
    r446 = dyn base54(<sym l.b>);
    goto L157(res10, r446);
  L706():
    r450 = dyn attributes__(l52, NULL, NULL);
    check L707() else D258();
  D256():
    deopt 894 [res10, x84, l_b4];
  D258():
    deopt 908 [res12, NULL, r450];
  L705():
    l_b5 = force? l_b4;
    checkMissing(l_b5);
    r448 = seq_len(l_b5);
    goto L157(res10, r448);
  L707():
    st x = r450;
    do_call1 = ldf `do.call`;
    check L708() else D259();
  D259():
    deopt 912 [res12];
  L708():
    p66 = prom<V +>{
      x88 = ld x;
      x89 = force? x88;
      checkMissing(x89);
      return x89;
    };
    r452 = dyn do_call1("order", p66);
    check L709() else D260();
  D260():
    deopt 915 [res12, r452];
  L709():
    goto L158(r452);
  }
}
fun `inner-1745221970`(by, df) {
  (reg by:*, reg df:*) -+> V { var by:*, var df:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg by1:*, reg by2:V, reg c:V, reg c1:L, reg numeric:cls, reg r2:V, reg as_vector:cls, reg by3:*, reg by4:V, reg p:p(V +), reg r5:V, reg ncol:cls, reg df1:*, reg df2:V, reg p1:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg by5:*, reg by6:V, reg c2:L, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg df3:*, reg df4:V, reg names:cls, reg r14:V, reg c4:cls, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg charmatch:cls, reg by7:*, reg by8:V, reg p2:p(V +), reg poss:*, reg poss1:V, reg p3:p(V +), reg r20:V, reg r21:V, reg any:cls, reg r22:V, reg c5:L, reg stop:cls, reg ngettext:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg bad:*, reg bad1:V, reg sum:cls, reg r25:V, reg p4:p(V +), reg r27:V, reg p5:p(V +), reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg by9:*, reg by10:V, reg poss2:*, reg poss3:V, reg match:cls, reg r33:V, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg by11:*, reg by12:V, reg is_numeric:cls, reg r38:V, reg c6:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg by13:*, reg by14:V, reg r41:V, reg any1:cls, reg r42:V, reg c7:L, reg c8:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg c12:L, reg r44:V, reg by15:*, reg by16:V, reg nc:*, reg nc1:V, reg r45:V, reg any2:cls, reg r46:V, reg c13:L, reg c14:V, reg c16:L, reg stop1:cls, reg r47:V, reg r48:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r49:V, reg r50:V, reg by17:*, reg by18:V, reg c17:L, reg c18:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r51:V, reg r52:V, reg by19:*, reg by20:V, reg length:cls, reg r53:V, reg nc2:*, reg nc3:V, reg r54:V, reg c19:L, reg stop2:cls, reg r55:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r57:V, reg r58:V, reg by21:*, reg by22:V, reg r59:I, reg c20:L, reg r61:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg by23:*, reg by24:V, reg __:cls, reg r62:V, reg stop3:cls, reg r63:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg r65:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r66:V, reg r67:V, reg by25:*, reg by26:V, reg is_na:cls, reg r68:V, reg any3:cls, reg r69:V, reg c21:L, reg stop4:cls, reg ngettext1:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r70:V, reg r71:V, reg bad2:*, reg bad3:V, reg sum1:cls, reg r72:V, reg p6:p(V +), reg r74:V, reg p7:p(V +), reg r76:V, reg unique:cls, reg by27:*, reg by28:V, reg p8:p(V +), reg r79:V |
    mkenv;
    st by = by;
    st df = df;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L33() else L1();
  L30():
    by1 = ld by;
    check L32() else D0();
  L31():
    r = dyn base(<sym by>);
    goto L0(r);
  D0():
    deopt 1 [by1];
  L1():
    goto L2();
  L2():
    as_vector = ldf `as.vector`;
    check L37() else D3();
  L32():
    by2 = force? by1;
    checkMissing(by2);
    c = `==`(by2, NULL);
    goto L0(c);
  L33():
    numeric = ldf numeric;
    check L34() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 11 [];
  L34():
    r2 = dyn numeric();
    check L35() else D2();
  L37():
    p = prom<V +>{
      by3 = ld by;
      by4 = force? by3;
      checkMissing(by4);
      return by4;
    };
    r5 = dyn as_vector(p);
    check L38() else D4();
  D2():
    deopt 6 [r2];
  D4():
    deopt 13 [r5];
  L35():
    st by = r2;
    goto L2();
  L38():
    st by = r5;
    ncol = ldf ncol;
    check L39() else D5();
  D5():
    deopt 16 [];
  L39():
    p1 = prom<V +>{
      df1 = ld df;
      df2 = force? df1;
      checkMissing(df2);
      return df2;
    };
    r7 = dyn ncol(p1);
    check L40() else D6();
  D6():
    deopt 18 [r7];
  L40():
    st nc = r7;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L3(r9):
    c3 = `as.logical`(r9);
    if c3 then L44() else L4();
  L41():
    by5 = ld by;
    check L43() else D7();
  L42():
    r8 = dyn base1(<sym by>);
    goto L3(r8);
  D7():
    deopt 21 [by5];
  L4():
    sym7 = ldf `is.numeric`;
    base7 = ldf `is.numeric` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L67() else L68();
  L11():
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L111() else L112();
  L43():
    by6 = force? by5;
    checkMissing(by6);
    c2 = `is.character`(by6);
    goto L3(c2);
  L44():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L5(r11):
    st poss = r11;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L12(r37):
    c6 = `as.logical`(r37);
    if c6 then L71() else L13();
  L26(r65):
    c21 = `as.logical`(r65);
    if c21 then L118() else L28();
  L45():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L46():
    r10 = dyn base2("row.names", <lang names(df)>);
    goto L5(r10);
  L67():
    by11 = ld by;
    check L69() else D19();
  L68():
    r36 = dyn base7(<sym by>);
    goto L12(r36);
  L111():
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L113() else L114();
  L112():
    r64 = dyn base13(<lang `<-`(bad, is.na(by))>);
    goto L26(r64);
  D19():
    deopt 71 [by11];
  L6(r13):
    c4 = ldf c in base;
    r15 = dyn c4("row.names", r13);
    check L51() else D10();
  L7(r17):
    c5 = `as.logical`(r17);
    if c5 then L57() else L8();
  L13():
    sym10 = ldf `is.logical`;
    base10 = ldf `is.logical` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L88() else L89();
  L27(r67):
    st bad = r67;
    any3 = ldf any in base;
    r69 = dyn any3(r67);
    check L117() else D40();
  L28():
    goto L29();
  L29():
    unique = ldf unique;
    check L122() else D43();
  L47():
    df3 = ld df;
    check L49() else D8();
  L48():
    r12 = dyn base3(<sym df>);
    goto L6(r12);
  L52():
    charmatch = ldf charmatch;
    check L54() else D11();
  L53():
    r16 = dyn base4(<lang `<-`(bad, `!`(charmatch(by, poss, 0)))>);
    goto L7(r16);
  L69():
    by12 = force? by11;
    checkMissing(by12);
    is_numeric = ldf `is.numeric` in base;
    r38 = dyn is_numeric(by12);
    check L70() else D20();
  L71():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L72() else L73();
  L113():
    by25 = ld by;
    check L115() else D38();
  L114():
    r66 = dyn base14(<sym by>);
    goto L27(r66);
  L118():
    stop4 = ldf stop;
    check L119() else D41();
  D8():
    deopt 29 [df3];
  D10():
    deopt 34 [r15];
  D11():
    deopt 39 [];
  D20():
    deopt 74 [r38];
  D38():
    deopt 132 [by25];
  D40():
    deopt 138 [r69];
  D41():
    deopt 140 [];
  D43():
    deopt 148 [];
  L8():
    goto L9();
  L9():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L14(r40):
    c7 = `as.logical`(r40);
    if c7 then L15(c7) else L76();
  L19(r50):
    c18 = `as.logical`(r50);
    if c18 then L91() else L20();
  L49():
    df4 = force? df3;
    checkMissing(df4);
    names = ldf names in base;
    r14 = dyn names(df4);
    check L50() else D9();
  L51():
    goto L5(r15);
  L54():
    p2 = prom<V +>{
      by7 = ld by;
      by8 = force? by7;
      checkMissing(by8);
      return by8;
    };
    p3 = prom<V +>{
      poss = ld poss;
      poss1 = force? poss;
      checkMissing(poss1);
      return poss1;
    };
    r20 = dyn charmatch(p2, p3, 0);
    check L55() else D12();
  L57():
    stop = ldf stop;
    check L58() else D14();
  L70():
    goto L12(r38);
  L72():
    by13 = ld by;
    check L74() else D21();
  L73():
    r39 = dyn base8(<lang `<`(by, 0)>);
    goto L14(r39);
  L88():
    by17 = ld by;
    check L90() else D28();
  L89():
    r49 = dyn base10(<sym by>);
    goto L19(r49);
  L115():
    by26 = force? by25;
    checkMissing(by26);
    is_na = ldf `is.na` in base;
    r68 = dyn is_na(by26);
    check L116() else D39();
  L117():
    goto L26(r69);
  L119():
    p7 = prom<V +>{
      ngettext1 = ldf ngettext;
      p6 = prom<V +>{
        sym15 = ldf sum;
        base15 = ldf sum in base;
        guard15 = `==`.4(sym15, base15);
        if guard15 then L1() else L2();
      L0(r71):
        return r71;
      L1():
        bad2 = ld bad;
        bad3 = force? bad2;
        checkMissing(bad3);
        sum1 = ldf sum in base;
        r72 = dyn sum1(bad3);
        goto L0(r72);
      L2():
        r70 = dyn base15(<sym bad>);
        goto L0(r70);
      };
      r74 = dyn ngettext1(p6, "'by' must specify a uniquely valid column", "'by' must specify uniquely valid columns");
      return r74;
    };
    r76 = dyn stop4[, domain](p7, NA_LGL);
    check L120() else D42();
  L122():
    p8 = prom<V +>{
      by27 = ld by;
      by28 = force? by27;
      checkMissing(by28);
      return by28;
    };
    r79 = dyn unique(p8);
    check L123() else D44();
  D9():
    deopt 32 [r14];
  D12():
    deopt 43 [r20];
  D14():
    deopt 49 [];
  D21():
    deopt 77 [by13];
  D28():
    deopt 99 [by17];
  D39():
    deopt 135 [r68];
  D42():
    deopt 144 [r76];
  D44():
    deopt 150 [r79];
  L10(r32):
    r34 = `-`(r32, 1);
    st by = r34;
    goto L11();
  L15(c8):
    c16 = `as.logical`(c8);
    if c16 then L83() else L17();
  L20():
    stop3 = ldf stop;
    check L109() else D36();
  L50():
    goto L6(r14);
  L55():
    r21 = `!`(r20);
    st bad = r21;
    any = ldf any in base;
    r22 = dyn any(r21);
    check L56() else D13();
  L58():
    p5 = prom<V +>{
      ngettext = ldf ngettext;
      p4 = prom<V +>{
        sym5 = ldf sum;
        base5 = ldf sum in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r24):
        return r24;
      L1():
        bad = ld bad;
        bad1 = force? bad;
        checkMissing(bad1);
        sum = ldf sum in base;
        r25 = dyn sum(bad1);
        goto L0(r25);
      L2():
        r23 = dyn base5(<sym bad>);
        goto L0(r23);
      };
      r27 = dyn ngettext(p4, "'by' must specify a uniquely valid column", "'by' must specify uniquely valid columns");
      return r27;
    };
    r29 = dyn stop[, domain](p5, NA_LGL);
    check L59() else D15();
  L61():
    by9 = ld by;
    check L63() else D16();
  L62():
    r31 = dyn base6(<sym by>, <sym poss>);
    goto L10(r31);
  L74():
    by14 = force? by13;
    checkMissing(by14);
    r41 = `<`(by14, 0);
    any1 = ldf any in base;
    r42 = dyn any1(r41);
    check L75() else D22();
  L76():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L77() else L78();
  L90():
    by18 = force? by17;
    checkMissing(by18);
    c17 = `is.logical`(by18);
    goto L19(c17);
  L91():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L92() else L93();
  L116():
    goto L27(r68);
  L120():
    goto L29();
  L123():
    popenv;
    return r79;
  D13():
    deopt 47 [r22];
  D15():
    deopt 53 [r29];
  D16():
    deopt 58 [by9];
  D22():
    deopt 82 [r42];
  D36():
    deopt 125 [];
  L16(c12, r44):
    c13 = `as.logical`(r44);
    c14 = `||`(c12, c13);
    goto L15(c14);
  L17():
    goto L18(NULL);
  L18(r48):
    goto L11();
  L21(r52):
    nc2 = ld nc;
    check L96() else D31();
  L56():
    goto L7(r22);
  L59():
    goto L9();
  L63():
    by10 = force? by9;
    checkMissing(by10);
    poss2 = ld poss;
    check L64() else D17();
  L75():
    goto L14(r42);
  L77():
    by15 = ld by;
    check L79() else D23();
  L78():
    r43 = dyn base9(<lang `>`(by, nc)>);
    goto L16(c7, r43);
  L83():
    stop1 = ldf stop;
    check L84() else D26();
  L92():
    by19 = ld by;
    check L94() else D29();
  L93():
    r51 = dyn base11(<sym by>);
    goto L21(r51);
  L109():
    r63 = dyn stop3("'by' must specify one or more columns as numbers, names or logical");
    check L110() else D37();
  D17():
    deopt 60 [poss2];
  D23():
    deopt 85 [c7, by15];
  D26():
    deopt 93 [];
  D29():
    deopt 104 [by19];
  D31():
    deopt 107 [r52, nc2];
  D37():
    deopt 127 [r63];
  L64():
    poss3 = force? poss2;
    checkMissing(poss3);
    match = ldf match in base;
    r33 = dyn match(by10, poss3, NA_INT, NULL);
    check L65() else D18();
  L79():
    by16 = force? by15;
    checkMissing(by16);
    nc = ld nc;
    check L80() else D24();
  L84():
    r47 = dyn stop1("'by' must match numbers of columns");
    check L85() else D27();
  L94():
    by20 = force? by19;
    checkMissing(by20);
    length = ldf length in base;
    r53 = dyn length(by20);
    check L95() else D30();
  L96():
    nc3 = force? nc2;
    checkMissing(nc3);
    r54 = `!=`(r52, nc3);
    c19 = `as.logical`(r54);
    if c19 then L97() else L22();
  L110():
    goto L11();
  D18():
    deopt 65 [r33];
  D24():
    deopt 86 [c7, by16, nc];
  D27():
    deopt 95 [r47];
  D30():
    deopt 107 [r53];
  L22():
    goto L23();
  L23():
    sym12 = ldf seq_along;
    base12 = ldf seq_along in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L101() else L102();
  L65():
    goto L10(r33);
  L80():
    nc1 = force? nc;
    checkMissing(nc1);
    r45 = `>`(by16, nc1);
    any2 = ldf any in base;
    r46 = dyn any2(r45);
    check L81() else D25();
  L85():
    goto L18(r47);
  L95():
    goto L21(r53);
  L97():
    stop2 = ldf stop;
    check L98() else D32();
  D25():
    deopt 90 [c7, r46];
  D32():
    deopt 111 [];
  L24(r58):
    c20 = `is.object`(r58);
    if c20 then L104() else L105(r58);
  L81():
    goto L16(c7, r46);
  L98():
    r55 = dyn stop2("'by' must match number of columns");
    check L99() else D33();
  L101():
    by21 = ld by;
    check L103() else D34();
  L102():
    r57 = dyn base12(<sym by>);
    goto L24(r57);
  D33():
    deopt 113 [r55];
  D34():
    deopt 117 [by21];
  L25(dx1):
    st by = dx1;
    goto L11();
  L99():
    goto L23();
  L103():
    by22 = force? by21;
    checkMissing(by22);
    r59 = seq_along(by22);
    goto L24(r59);
  L104():
    dr = tryDispatchBuiltin.1("[", r58);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L106() else L105(dr);
  L105(r61):
    by23 = ld by;
    check L107() else D35();
  D35():
    deopt 120 [r61, by23];
  L106():
    dx = getTryDispatchBuiltinValue(dr);
    goto L25(dx);
  L107():
    by24 = force? by23;
    __ = ldf `[` in base;
    r62 = dyn __(r61, by24);
    goto L25(r62);
  }
}