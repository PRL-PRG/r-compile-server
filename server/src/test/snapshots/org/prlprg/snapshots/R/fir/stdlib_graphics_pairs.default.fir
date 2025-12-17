fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1903080338;
    st `pairs.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1903080338(x, labels, panel, `...`, horInd, verInd, `lower.panel`, `upper.panel`, `diag.panel`, `text.panel`, `label.pos`, `line.main`, `cex.labels`, `font.labels`, row1attop, gap, log, horOdd, verOdd) {
  (reg x:*, reg labels:*, reg panel:*, reg ddd:dots, reg horInd:*, reg verInd:*, reg lower_panel:*, reg upper_panel:*, reg diag_panel:*, reg text_panel:*, reg label_pos:*, reg line_main:*, reg cex_labels:*, reg font_labels:*, reg row1attop:*, reg gap:*, reg log:*, reg horOdd:*, reg verOdd:*) -+> V { var x:*, var labels:*, var panel:*, reg panel_isMissing:L, reg panel_orDefault:*, reg points:*, reg points1:V, reg p:p(V +), var `...`:dots?, var horInd:*, reg horInd_isMissing:L, reg horInd_orDefault:*, reg nc:*, reg nc1:V, reg r1:V, reg p1:p(V +), var verInd:*, reg verInd_isMissing:L, reg verInd_orDefault:*, reg nc2:*, reg nc3:V, reg r3:V, reg p2:p(V +), var `lower.panel`:*, reg lower_panel_isMissing:L, reg lower_panel_orDefault:*, reg panel1:*, reg panel2:V, reg p3:p(V +), var `upper.panel`:*, reg upper_panel_isMissing:L, reg upper_panel_orDefault:*, reg panel3:*, reg panel4:V, reg p4:p(V +), var `diag.panel`:*, reg diag_panel_isMissing:L, reg diag_panel_orDefault:*, var `text.panel`:*, reg text_panel_isMissing:L, reg text_panel_orDefault:*, reg textPanel:*, reg textPanel1:V, reg p5:p(V +), var `label.pos`:*, reg label_pos_isMissing:L, reg label_pos_orDefault:*, reg has_diag:*, reg has_diag1:V, reg r8:V, reg r9:V, reg p6:p(V +), var `line.main`:*, reg line_main_isMissing:L, reg line_main_orDefault:*, var `cex.labels`:*, reg cex_labels_isMissing:L, reg cex_labels_orDefault:*, var `font.labels`:*, reg font_labels_isMissing:L, reg font_labels_orDefault:*, var row1attop:*, reg row1attop_isMissing:L, reg row1attop_orDefault:*, var gap:*, reg gap_isMissing:L, reg gap_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var horOdd:*, reg horOdd_isMissing:L, reg horOdd_orDefault:*, reg row1attop1:*, reg row1attop2:V, reg r11:V, reg p7:p(V +), var verOdd:*, reg verOdd_isMissing:L, reg verOdd_orDefault:*, reg row1attop3:*, reg row1attop4:V, reg r13:V, reg p8:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg missing:cls, reg r17:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg c5:L, reg r19:V, reg text_panel1:*, reg text_panel2:V, reg is_function:cls, reg r20:V, reg c6:L, reg c7:V, reg c9:L, reg r21:cls, reg r23:cls, reg r24:cls, reg r25:cls, reg r26:cls, reg r27:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg list:cls, reg ddd1:dots?, reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg dots:*, reg dots1:V, reg names:cls, reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r36:V, reg r37:V, reg c10:L, reg as_data_frame:cls, reg x3:*, reg x4:V, reg p9:p(V +), reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg x5:*, reg x6:V, reg names1:cls, reg r44:V, reg r45:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c11:L, reg x7:V, reg is_factor:cls, reg x8:*, reg x9:V, reg c12:L, reg x11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r46:V, reg p10:p(V +), reg r48:V, reg c13:L, reg i7:I, reg c14:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg i11:I, reg c18:L, reg r50:V, reg x12:*, reg x13:V, reg c19:L, reg i13:I, reg c21:L, reg x15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i15:I, reg c23:L, reg dx3:V, reg i16:*, reg i17:V, reg __1:cls, reg r51:V, reg c24:L, reg c25:L, reg c26:V, reg c28:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg i23:I, reg r53:V, reg x16:*, reg x17:V, reg c29:L, reg i25:I, reg x19:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i27:I, reg dx5:V, reg i28:*, reg i29:V, reg __2:cls, reg r54:V, reg as_numeric:cls, reg r55:V, reg l1:*, reg c30:L, reg i31:I, reg r57:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i33:I, reg r59:V, reg dx7:V, reg i34:*, reg i35:V, reg ____:cls, reg r60:V, reg i36:I, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg i39:I, reg r63:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r64:V, reg i42:I, reg r65:V, reg x20:*, reg x21:V, reg c31:L, reg i44:I, reg x23:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i46:I, reg dx9:V, reg i47:*, reg i48:V, reg __3:cls, reg r66:V, reg unclass:cls, reg r67:V, reg is_numeric:cls, reg r68:V, reg r69:V, reg c32:L, reg stop:cls, reg r70:V, reg i51:I, reg sym11:cls, reg base11:cls, reg guard11:L, reg r72:V, reg r73:V, reg x24:*, reg x25:V, reg is_numeric1:cls, reg r74:V, reg r75:V, reg c33:L, reg stop1:cls, reg r76:V, reg match_fun:cls, reg panel5:*, reg panel6:V, reg p11:p(V +), reg r78:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r79:V, reg r80:V, reg lower_panel1:*, reg lower_panel2:V, reg c34:V, reg r81:V, reg c35:L, reg c37:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r82:V, reg c40:L, reg r83:V, reg missing1:cls, reg r84:V, reg r85:V, reg c41:L, reg c42:V, reg c44:L, reg match_fun1:cls, reg lower_panel3:*, reg lower_panel4:V, reg p12:p(V +), reg r87:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r89:V, reg r90:V, reg upper_panel1:*, reg upper_panel2:V, reg c45:V, reg r91:V, reg c46:L, reg c48:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r92:V, reg c51:L, reg r93:V, reg missing2:cls, reg r94:V, reg r95:V, reg c52:L, reg c53:V, reg c55:L, reg match_fun2:cls, reg upper_panel3:*, reg upper_panel4:V, reg p13:p(V +), reg r97:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r99:V, reg r100:V, reg diag_panel1:*, reg diag_panel2:V, reg c56:V, reg r101:V, reg c57:L, reg c59:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r102:V, reg c62:L, reg r103:V, reg missing3:cls, reg r104:V, reg r105:V, reg c63:L, reg c64:V, reg c66:L, reg match_fun3:cls, reg diag_panel3:*, reg diag_panel4:V, reg p14:p(V +), reg r107:V, reg row1attop5:*, reg row1attop6:V, reg c67:L, reg lower_panel5:*, reg lower_panel6:V, reg upper_panel5:*, reg upper_panel6:V, reg tmp:*, reg tmp1:V, reg has_lower:*, reg has_lower1:V, reg has_upper:*, reg has_upper1:V, reg tmp2:*, reg tmp3:V, reg ncol:cls, reg x26:*, reg x27:V, reg p15:p(V +), reg r110:V, reg nc4:*, reg nc5:V, reg r111:V, reg c68:L, reg stop2:cls, reg r112:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r114:V, reg r115:V, reg horInd1:*, reg horInd2:V, reg r116:V, reg horInd3:*, reg horInd4:V, reg nc6:*, reg nc7:V, reg r117:V, reg r118:V, reg all:cls, reg r119:V, reg r120:V, reg c69:L, reg stop3:cls, reg r121:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r123:V, reg r124:V, reg verInd1:*, reg verInd2:V, reg r125:V, reg verInd3:*, reg verInd4:V, reg nc8:*, reg nc9:V, reg r126:V, reg r127:V, reg all1:cls, reg r128:V, reg r129:V, reg c70:L, reg stop4:cls, reg r130:V, reg doText:*, reg doText1:V, reg c71:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r132:V, reg r133:V, reg missing4:cls, reg r134:V, reg c72:L, reg colnames:cls, reg x28:*, reg x29:V, reg p16:p(V +), reg r136:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r137:V, reg r138:V, reg labels1:*, reg labels2:V, reg c73:V, reg c74:L, reg paste:cls, reg nc10:*, reg nc11:V, reg r139:V, reg p17:p(V +), reg r141:V, reg r142:V, reg r143:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r144:V, reg r145:V, reg labels3:*, reg labels4:V, reg c75:V, reg c76:L, reg _in_:cls, reg nmdots:*, reg nmdots1:V, reg p18:p(V +), reg r148:V, reg c77:L, reg dots2:*, reg dots3:V, reg c78:L, reg dots5:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r149:V, reg dx12:V, reg _in_1:cls, reg nmdots2:*, reg nmdots3:V, reg p19:p(V +), reg r151:V, reg c79:L, reg dots6:*, reg dots7:V, reg c80:L, reg dots9:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r152:V, reg dx15:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r153:V, reg r154:V, reg oma:*, reg oma1:V, reg c81:V, reg c82:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r155:V, reg r156:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r157:V, reg r158:V, reg main:*, reg main1:V, reg c83:V, reg r159:V, reg c84:L, reg r160:R, reg c85:cls, reg r161:V, reg par:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r163:V, reg r164:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r165:V, reg r166:V, reg horInd5:*, reg horInd6:V, reg length:cls, reg r167:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r168:V, reg r169:V, reg verInd5:*, reg verInd6:V, reg length1:cls, reg r170:V, reg c86:cls, reg r171:V, reg p20:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r173:V, reg r174:V, reg gap1:*, reg gap2:V, reg r175:V, reg rep_int:cls, reg r176:V, reg p21:p(V +), reg oma2:*, reg oma3:V, reg p22:p(V +), reg r179:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r180:V, reg on_exit:cls, reg r182:V, reg dev_hold:cls, reg r183:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r184:V, reg on_exit1:cls, reg r186:V, reg logical:cls, reg nc12:*, reg nc13:V, reg p23:p(V +), reg r188:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r189:V, reg r190:V, reg log1:*, reg log2:V, reg is_numeric2:cls, reg r191:V, reg c87:L, reg l4:*, reg c88:L, reg r193:L, reg l6:*, reg dr14:V, reg dc7:L, reg dx16:V, reg r195:L, reg dx17:V, reg log3:*, reg log4:V, reg ___:cls, reg r196:V, reg l7:*, reg c89:L, reg r198:L, reg l9:*, reg dr16:V, reg dc8:L, reg dx18:V, reg r200:L, reg dx19:V, reg log5:*, reg log6:V, reg ___1:cls, reg r201:V, reg grepl:cls, reg log7:*, reg log8:V, reg p24:p(V +), reg r204:V, reg l10:*, reg c90:L, reg r206:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg ___2:cls, reg r209:V, reg grepl1:cls, reg log9:*, reg log10:V, reg p25:p(V +), reg r211:V, reg l13:*, reg c91:L, reg r213:V, reg dr20:V, reg dc10:L, reg dx22:V, reg r215:V, reg dx23:V, reg ___3:cls, reg r216:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r217:V, reg r218:V, reg row1attop7:*, reg row1attop8:V, reg c92:L, reg horInd7:*, reg horInd8:V, reg horInd9:V, reg rev:cls, reg horInd10:*, reg horInd11:V, reg p26:p(V +), reg r220:V, reg length2:cls, reg r221:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r222:V, reg r223:V, reg verInd7:*, reg verInd8:V, reg length3:cls, reg r224:V, reg jSet:*, reg jSet1:V, reg s1:V, reg l16:I, reg i53:I, reg i54:I, reg i55:I, reg c93:L, reg x30:V, reg iSet:*, reg iSet1:V, reg s2:V, reg l17:I, reg i58:I, reg i59:I, reg i60:I, reg i61:I, reg c94:L, reg x31:V, reg paste1:cls, reg xl:*, reg xl1:V, reg c95:L, reg xl3:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg j:*, reg j1:V, reg __4:cls, reg r225:V, reg c96:L, reg p27:p(V +), reg yl:*, reg yl1:V, reg c97:L, reg yl3:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg i66:*, reg i67:V, reg __5:cls, reg r227:V, reg c98:L, reg p28:p(V +), reg r229:V, reg localPlot:cls, reg x32:*, reg x33:V, reg c99:L, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg j2:*, reg j3:V, reg __6:cls, reg r230:V, reg p29:p(V +), reg x36:*, reg x37:V, reg c100:L, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg i68:*, reg i69:V, reg __7:cls, reg r232:V, reg p30:p(V +), reg ddd2:dots?, reg l18:*, reg l19:V, reg p31:p(V +), reg r235:V, reg i70:*, reg i71:V, reg j4:*, reg j5:V, reg r236:V, reg c101:L, reg i72:I, reg i73:I, reg c102:V, reg i76:*, reg i77:V, reg j6:*, reg j7:V, reg r237:V, reg c104:L, reg i80:I, reg i81:I, reg c107:L, reg c108:V, reg has_lower2:*, reg has_lower3:V, reg c109:L, reg c110:V, reg c113:L, reg c114:V, reg c116:L, reg i86:I, reg i87:I, reg c117:V, reg i90:*, reg i91:V, reg j8:*, reg j9:V, reg r238:V, reg c119:L, reg i94:I, reg i95:I, reg c122:L, reg c123:V, reg has_upper2:*, reg has_upper3:V, reg c124:L, reg c125:V, reg c128:L, reg c129:V, reg c131:L, reg box:cls, reg r239:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r240:V, reg i108:I, reg i109:I, reg r241:V, reg j10:*, reg j11:V, reg jSet2:*, reg jSet3:V, reg match:cls, reg r242:V, reg horOdd1:*, reg horOdd2:V, reg r243:V, reg __8:cls, reg r244:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r245:V, reg i114:I, reg i115:I, reg r246:V, reg i116:*, reg i117:V, reg iSet2:*, reg iSet3:V, reg match1:cls, reg r247:V, reg verOdd1:*, reg verOdd2:V, reg r248:V, reg __9:cls, reg r249:V, reg i118:*, reg i119:V, reg iSet4:*, reg iSet5:V, reg c132:L, reg i123:I, reg i124:I, reg i125:V, reg iSet7:V, reg dr30:V, reg dc15:L, reg dx32:V, reg i129:I, reg i130:I, reg i131:V, reg dx33:V, reg __10:cls, reg r250:V, reg r251:V, reg c133:L, reg i134:I, reg i135:I, reg c135:V, reg j_odd:*, reg j_odd1:V, reg r252:V, reg c136:L, reg i136:I, reg i137:I, reg c137:L, reg c138:V, reg has_upper4:*, reg has_upper5:V, reg r253:V, reg c141:L, reg c142:V, reg c145:L, reg i142:I, reg i143:I, reg c146:L, reg c147:V, reg has_lower4:*, reg has_lower5:V, reg r254:V, reg c150:L, reg c151:V, reg c154:L, reg c155:V, reg c157:L, reg localAxis:cls, reg x40:*, reg x41:V, reg c158:L, reg dr32:V, reg dc16:L, reg dx34:V, reg dx35:V, reg j12:*, reg j13:V, reg __11:cls, reg r255:V, reg p32:p(V +), reg x44:*, reg x45:V, reg c159:L, reg dr34:V, reg dc17:L, reg dx36:V, reg dx37:V, reg i154:*, reg i155:V, reg __12:cls, reg r257:V, reg p33:p(V +), reg ddd3:dots?, reg r259:V, reg i156:I, reg i157:I, reg i158:*, reg i159:V, reg iSet8:*, reg iSet9:V, reg c160:L, reg i163:I, reg i164:I, reg i165:V, reg iSet11:V, reg dr36:V, reg dc18:L, reg dx38:V, reg i169:I, reg i170:I, reg i171:V, reg dx39:V, reg ni:*, reg ni1:V, reg __13:cls, reg r261:V, reg r262:V, reg c161:L, reg i174:I, reg i175:I, reg c163:V, reg j_odd2:*, reg j_odd3:V, reg c164:L, reg i176:I, reg i177:I, reg c165:L, reg c166:V, reg has_upper6:*, reg has_upper7:V, reg r263:V, reg c169:L, reg c170:V, reg c173:L, reg i182:I, reg i183:I, reg c174:L, reg c175:V, reg has_lower6:*, reg has_lower7:V, reg r264:V, reg c178:L, reg c179:V, reg c182:L, reg c183:V, reg c185:L, reg localAxis1:cls, reg x48:*, reg x49:V, reg c186:L, reg dr38:V, reg dc19:L, reg dx40:V, reg dx41:V, reg j14:*, reg j15:V, reg __14:cls, reg r265:V, reg p34:p(V +), reg x52:*, reg x53:V, reg c187:L, reg dr40:V, reg dc20:L, reg dx42:V, reg dx43:V, reg i194:*, reg i195:V, reg __15:cls, reg r267:V, reg p35:p(V +), reg ddd4:dots?, reg r269:V, reg i196:I, reg i197:I, reg j16:*, reg j17:V, reg jSet4:*, reg jSet5:V, reg c188:L, reg i200:I, reg i201:I, reg j19:V, reg jSet7:V, reg dr42:V, reg dc21:L, reg dx44:V, reg i204:I, reg i205:I, reg j21:V, reg dx45:V, reg __16:cls, reg r271:V, reg r272:V, reg c189:L, reg i208:I, reg i209:I, reg c191:V, reg i_odd:*, reg i_odd1:V, reg r273:V, reg c192:L, reg i210:I, reg i211:I, reg c193:L, reg c194:V, reg has_upper8:*, reg has_upper9:V, reg r274:V, reg c197:L, reg c198:V, reg c201:L, reg i216:I, reg i217:I, reg c202:L, reg c203:V, reg has_lower8:*, reg has_lower9:V, reg r275:V, reg c206:L, reg c207:V, reg c210:L, reg c211:V, reg c213:L, reg localAxis2:cls, reg x56:*, reg x57:V, reg c214:L, reg dr44:V, reg dc22:L, reg dx46:V, reg dx47:V, reg j22:*, reg j23:V, reg __17:cls, reg r276:V, reg p36:p(V +), reg x60:*, reg x61:V, reg c215:L, reg dr46:V, reg dc23:L, reg dx48:V, reg dx49:V, reg i228:*, reg i229:V, reg __18:cls, reg r278:V, reg p37:p(V +), reg ddd5:dots?, reg r280:V, reg i230:I, reg i231:I, reg j24:*, reg j25:V, reg jSet8:*, reg jSet9:V, reg c216:L, reg i234:I, reg i235:I, reg j27:V, reg jSet11:V, reg dr48:V, reg dc24:L, reg dx50:V, reg i238:I, reg i239:I, reg j29:V, reg dx51:V, reg nj:*, reg nj1:V, reg __19:cls, reg r282:V, reg r283:V, reg c217:L, reg i242:I, reg i243:I, reg c219:V, reg i_odd2:*, reg i_odd3:V, reg c220:L, reg i244:I, reg i245:I, reg c221:L, reg c222:V, reg has_upper10:*, reg has_upper11:V, reg r284:V, reg c225:L, reg c226:V, reg c229:L, reg i250:I, reg i251:I, reg c230:L, reg c231:V, reg has_lower10:*, reg has_lower11:V, reg r285:V, reg c234:L, reg c235:V, reg c238:L, reg c239:V, reg c241:L, reg localAxis3:cls, reg x64:*, reg x65:V, reg c242:L, reg dr50:V, reg dc25:L, reg dx52:V, reg dx53:V, reg j30:*, reg j31:V, reg __20:cls, reg r286:V, reg p38:p(V +), reg x68:*, reg x69:V, reg c243:L, reg dr52:V, reg dc26:L, reg dx54:V, reg dx55:V, reg i262:*, reg i263:V, reg __21:cls, reg r288:V, reg p39:p(V +), reg ddd6:dots?, reg r290:V, reg i264:I, reg i265:I, reg par1:cls, reg r292:V, reg i266:*, reg i267:V, reg j32:*, reg j33:V, reg r293:V, reg c244:L, reg has_diag2:*, reg has_diag3:V, reg c245:L, reg localDiagPanel:cls, reg as_vector:cls, reg x72:*, reg x73:V, reg c246:L, reg dr54:V, reg dc27:L, reg dx56:V, reg dx57:V, reg i276:*, reg i277:V, reg __22:cls, reg r294:V, reg p40:p(V +), reg r296:V, reg p41:p(V +), reg ddd7:dots?, reg r298:V, reg i278:I, reg i279:I, reg doText2:*, reg doText3:V, reg c247:L, reg par2:cls, reg sym37:cls, reg base37:cls, reg guard37:L, reg r300:V, reg r301:V, reg c248:cls, reg r302:V, reg p42:p(V +), reg r304:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r305:V, reg i288:I, reg i289:I, reg r306:V, reg cex_labels1:*, reg cex_labels2:V, reg c249:V, reg c250:L, reg strwidth:cls, reg labels5:*, reg labels6:V, reg p43:p(V +), reg r308:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r309:V, reg i298:I, reg i299:I, reg r310:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r311:V, reg i304:I, reg i305:I, reg r312:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r315:V, reg i310:I, reg i311:I, reg r316:R, reg r317:V, reg l_wid:*, reg l_wid1:V, reg max:cls, reg r318:V, reg r319:V, reg min:cls, reg r320:V, reg max1:cls, reg r321:V, reg i312:I, reg i313:I, reg xl4:*, reg xl5:V, reg c251:L, reg i316:I, reg i317:I, reg xl7:V, reg dr56:V, reg dc28:L, reg dx58:V, reg i320:I, reg i321:I, reg dx59:V, reg i322:*, reg i323:V, reg __23:cls, reg r323:V, reg c252:L, reg i328:I, reg i329:I, reg r324:R, reg yl4:*, reg yl5:V, reg c253:L, reg i332:I, reg i333:I, reg yl7:V, reg dr58:V, reg dc29:L, reg dx60:V, reg i336:I, reg i337:I, reg dx61:V, reg j34:*, reg j35:V, reg __24:cls, reg r325:V, reg c254:L, reg label_pos1:*, reg label_pos2:V, reg r326:V, reg i342:I, reg i343:I, reg r327:V, reg label_pos3:*, reg label_pos4:V, reg text_panel3:cls, reg xlp:*, reg xlp1:V, reg p44:p(V +), reg ylp:*, reg ylp1:V, reg p45:p(V +), reg labels7:*, reg labels8:V, reg c255:L, reg labels10:V, reg dr60:V, reg dc30:L, reg dx62:V, reg dx63:V, reg i344:*, reg i345:V, reg __25:cls, reg r330:V, reg p46:p(V +), reg cex_labels3:*, reg cex_labels4:V, reg p47:p(V +), reg font_labels1:*, reg font_labels2:V, reg p48:p(V +), reg r334:V, reg i346:I, reg i347:I, reg r335:V, reg i348:I, reg i349:I, reg i350:*, reg i351:V, reg j36:*, reg j37:V, reg r337:V, reg c256:L, reg localLowerPanel:cls, reg as_vector1:cls, reg x76:*, reg x77:V, reg c257:L, reg dr62:V, reg dc31:L, reg dx64:V, reg dx65:V, reg j38:*, reg j39:V, reg __26:cls, reg r338:V, reg p49:p(V +), reg r340:V, reg p50:p(V +), reg as_vector2:cls, reg x80:*, reg x81:V, reg c258:L, reg dr64:V, reg dc32:L, reg dx66:V, reg dx67:V, reg i356:*, reg i357:V, reg __27:cls, reg r342:V, reg p51:p(V +), reg r344:V, reg p52:p(V +), reg ddd8:dots?, reg r346:V, reg localUpperPanel:cls, reg as_vector3:cls, reg x84:*, reg x85:V, reg c259:L, reg dr66:V, reg dc33:L, reg dx68:V, reg dx69:V, reg j40:*, reg j41:V, reg __28:cls, reg r347:V, reg p53:p(V +), reg r349:V, reg p54:p(V +), reg as_vector4:cls, reg x88:*, reg x89:V, reg c260:L, reg dr68:V, reg dc34:L, reg dx70:V, reg dx71:V, reg i358:*, reg i359:V, reg __29:cls, reg r351:V, reg p55:p(V +), reg r353:V, reg p56:p(V +), reg ddd9:dots?, reg r355:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r356:V, reg i364:I, reg i365:I, reg r357:V, reg par3:cls, reg r358:V, reg mfg:*, reg mfg1:V, reg r359:V, reg any:cls, reg r360:V, reg c261:L, reg stop5:cls, reg r361:V, reg i370:I, reg i371:I, reg r362:V, reg i372:I, reg i373:I, reg par4:cls, reg r364:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r365:V, reg r366:V, reg main2:*, reg main3:V, reg c262:V, reg r367:V, reg c263:L, reg _in_2:cls, reg nmdots4:*, reg nmdots5:V, reg p57:p(V +), reg r369:V, reg c264:L, reg dots10:*, reg dots11:V, reg c265:L, reg dots13:V, reg dr70:V, reg dc35:L, reg dx72:V, reg dx73:V, reg r370:V, reg dx74:V, reg par5:cls, reg r371:V, reg _in_3:cls, reg nmdots6:*, reg nmdots7:V, reg p58:p(V +), reg r373:V, reg c266:L, reg dots14:*, reg dots15:V, reg c267:L, reg dots17:V, reg dr72:V, reg dc36:L, reg dx75:V, reg dx76:V, reg r374:V, reg dx77:V, reg par6:cls, reg r375:V, reg mtext:cls, reg main4:*, reg main5:V, reg p59:p(V +), reg line_main1:*, reg line_main2:V, reg p60:p(V +), reg cex_main:*, reg cex_main1:V, reg p61:p(V +), reg font_main:*, reg font_main1:V, reg p62:p(V +), reg r380:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r382:V, reg r383:V, reg invisible:cls, reg r384:V |
    mkenv;
    st x = x;
    st labels = labels;
    panel_isMissing = missing.0(panel);
    if panel_isMissing then L0() else L1(panel);
  L0():
    p = prom<V +>{
      points = ld points;
      points1 = force? points;
      checkMissing(points1);
      return points1;
    };
    goto L1(p);
  L1(panel_orDefault):
    st panel = panel_orDefault;
    st `...` = ddd;
    horInd_isMissing = missing.0(horInd);
    if horInd_isMissing then L2() else L3(horInd);
  L2():
    p1 = prom<V +>{
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      r1 = `:`(1.0, nc1);
      return r1;
    };
    goto L3(p1);
  L3(horInd_orDefault):
    st horInd = horInd_orDefault;
    verInd_isMissing = missing.0(verInd);
    if verInd_isMissing then L4() else L5(verInd);
  L4():
    p2 = prom<V +>{
      nc2 = ld nc;
      nc3 = force? nc2;
      checkMissing(nc3);
      r3 = `:`(1.0, nc3);
      return r3;
    };
    goto L5(p2);
  L5(verInd_orDefault):
    st verInd = verInd_orDefault;
    lower_panel_isMissing = missing.0(lower_panel);
    if lower_panel_isMissing then L6() else L7(lower_panel);
  L6():
    p3 = prom<V +>{
      panel1 = ld panel;
      panel2 = force? panel1;
      checkMissing(panel2);
      return panel2;
    };
    goto L7(p3);
  L7(lower_panel_orDefault):
    st `lower.panel` = lower_panel_orDefault;
    upper_panel_isMissing = missing.0(upper_panel);
    if upper_panel_isMissing then L8() else L9(upper_panel);
  L8():
    p4 = prom<V +>{
      panel3 = ld panel;
      panel4 = force? panel3;
      checkMissing(panel4);
      return panel4;
    };
    goto L9(p4);
  L9(upper_panel_orDefault):
    st `upper.panel` = upper_panel_orDefault;
    diag_panel_isMissing = missing.0(diag_panel);
    if diag_panel_isMissing then L10(NULL) else L10(diag_panel);
  L10(diag_panel_orDefault):
    st `diag.panel` = diag_panel_orDefault;
    text_panel_isMissing = missing.0(text_panel);
    if text_panel_isMissing then L11() else L12(text_panel);
  L11():
    p5 = prom<V +>{
      textPanel = ld textPanel;
      textPanel1 = force? textPanel;
      checkMissing(textPanel1);
      return textPanel1;
    };
    goto L12(p5);
  L12(text_panel_orDefault):
    st `text.panel` = text_panel_orDefault;
    label_pos_isMissing = missing.0(label_pos);
    if label_pos_isMissing then L13() else L14(label_pos);
  L13():
    p6 = prom<V +>{
      has_diag = ld `has.diag`;
      has_diag1 = force? has_diag;
      checkMissing(has_diag1);
      r8 = `/`(has_diag1, 3.0);
      r9 = `+`(0.5, r8);
      return r9;
    };
    goto L14(p6);
  L14(label_pos_orDefault):
    st `label.pos` = label_pos_orDefault;
    line_main_isMissing = missing.0(line_main);
    if line_main_isMissing then L15(3.0) else L15(line_main);
  L15(line_main_orDefault):
    st `line.main` = line_main_orDefault;
    cex_labels_isMissing = missing.0(cex_labels);
    if cex_labels_isMissing then L16(NULL) else L16(cex_labels);
  L16(cex_labels_orDefault):
    st `cex.labels` = cex_labels_orDefault;
    font_labels_isMissing = missing.0(font_labels);
    if font_labels_isMissing then L17(1.0) else L17(font_labels);
  L17(font_labels_orDefault):
    st `font.labels` = font_labels_orDefault;
    row1attop_isMissing = missing.0(row1attop);
    if row1attop_isMissing then L18(TRUE) else L18(row1attop);
  L18(row1attop_orDefault):
    st row1attop = row1attop_orDefault;
    gap_isMissing = missing.0(gap);
    if gap_isMissing then L19(1.0) else L19(gap);
  L19(gap_orDefault):
    st gap = gap_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L20("") else L20(log);
  L20(log_orDefault):
    st log = log_orDefault;
    horOdd_isMissing = missing.0(horOdd);
    if horOdd_isMissing then L21() else L22(horOdd);
  L21():
    p7 = prom<V +>{
      row1attop1 = ld row1attop;
      row1attop2 = force? row1attop1;
      checkMissing(row1attop2);
      r11 = `!`(row1attop2);
      return r11;
    };
    goto L22(p7);
  L22(horOdd_orDefault):
    st horOdd = horOdd_orDefault;
    verOdd_isMissing = missing.0(verOdd);
    if verOdd_isMissing then L23() else L24(verOdd);
  L23():
    p8 = prom<V +>{
      row1attop3 = ld row1attop;
      row1attop4 = force? row1attop3;
      checkMissing(row1attop4);
      r13 = `!`(row1attop4);
      return r13;
    };
    goto L24(p8);
  L24(verOdd_orDefault):
    st verOdd = verOdd_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L179() else L180();
  L25(r16):
    c = `as.logical`(r16);
    if c then L26(c) else L181();
  L179():
    missing = ldf missing in base;
    r17 = dyn missing(<sym text.panel>);
    goto L25(r17);
  L180():
    r15 = dyn base(<sym text.panel>);
    goto L25(r15);
  L26(c1):
    st doText = c1;
    c9 = `as.logical`(c1);
    if c9 then L187() else L28();
  L181():
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L182() else L183();
  L27(c5, r19):
    c6 = `as.logical`(r19);
    c7 = `||`(c5, c6);
    goto L26(c7);
  L28():
    goto L29();
  L29():
    r23 = clos inner4140415173;
    st localAxis = r23;
    r24 = clos inner2102153841;
    st localPlot = r24;
    r25 = clos inner2102153841;
    st localLowerPanel = r25;
    r26 = clos inner2102153841;
    st localUpperPanel = r26;
    r27 = clos inner2102153841;
    st localDiagPanel = r27;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L189() else L190();
  L182():
    text_panel1 = ld `text.panel`;
    check L184() else D0();
  L183():
    r18 = dyn base1(<sym text.panel>);
    goto L27(c, r18);
  L187():
    r21 = clos inner4249214614;
    st textPanel = r21;
    goto L29();
  D0():
    deopt 5 [c, text_panel1];
  L30(r29):
    st dots = r29;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L193() else L194();
  L184():
    text_panel2 = force? text_panel1;
    checkMissing(text_panel2);
    is_function = ldf `is.function` in base;
    r20 = dyn is_function(text_panel2);
    check L185() else D1();
  L189():
    list = ldf list;
    check L191() else D2();
  L190():
    r28 = dyn base2(<sym ...>);
    goto L30(r28);
  D1():
    deopt 8 [c, r20];
  D2():
    deopt 33 [];
  L31(r32):
    st nmdots = r32;
    sym4 = ldf `is.matrix`;
    base4 = ldf `is.matrix` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L197() else L198();
  L185():
    goto L27(c, r20);
  L191():
    ddd1 = ld `...`;
    r30 = dyn list[`...`](ddd1);
    check L192() else D3();
  L193():
    dots = ld dots;
    check L195() else D4();
  L194():
    r31 = dyn base3(<sym dots>);
    goto L31(r31);
  D3():
    deopt 35 [r30];
  D4():
    deopt 39 [dots];
  L32(r35):
    r37 = `!`(r35);
    c10 = `as.logical`(r37);
    if c10 then L201() else L33();
  L192():
    goto L30(r30);
  L195():
    dots1 = force? dots;
    checkMissing(dots1);
    names = ldf names in base;
    r33 = dyn names(dots1);
    check L196() else D5();
  L197():
    x1 = ld x;
    check L199() else D6();
  L198():
    r34 = dyn base4(<sym x>);
    goto L32(r34);
  D5():
    deopt 42 [r33];
  D6():
    deopt 46 [x1];
  L33():
    sym11 = ldf `is.numeric`;
    base11 = ldf `is.numeric` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L252() else L253();
  L51():
    match_fun = ldf `match.fun`;
    check L260() else D30();
  L196():
    goto L31(r33);
  L199():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r36 = dyn is_matrix(x2);
    check L200() else D7();
  L201():
    as_data_frame = ldf `as.data.frame`;
    check L202() else D8();
  D7():
    deopt 49 [r36];
  D8():
    deopt 52 [];
  D30():
    deopt 129 [];
  L52(r73):
    r75 = `!`(r73);
    c33 = `as.logical`(r75);
    if c33 then L256() else L53();
  L200():
    goto L32(r36);
  L202():
    p9 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r39 = dyn as_data_frame(p9);
    check L203() else D9();
  L252():
    x24 = ld x;
    check L254() else D26();
  L253():
    r72 = dyn base11(<sym x>);
    goto L52(r72);
  L260():
    p11 = prom<V +>{
      panel5 = ld panel;
      panel6 = force? panel5;
      checkMissing(panel6);
      return panel6;
    };
    r78 = dyn match_fun(p11);
    check L261() else D31();
  D9():
    deopt 54 [r39];
  D26():
    deopt 117 [x24];
  D31():
    deopt 131 [r78];
  L53():
    goto L51();
  L203():
    st x = r39;
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L204() else L205();
  L254():
    x25 = force? x24;
    checkMissing(x25);
    is_numeric1 = ldf `is.numeric` in base;
    r74 = dyn is_numeric1(x25);
    check L255() else D27();
  L256():
    stop1 = ldf stop;
    check L257() else D28();
  L261():
    st panel = r78;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L262() else L263();
  D27():
    deopt 120 [r74];
  D28():
    deopt 123 [];
  L34(r41):
    s = toForSeq(r41);
    l = length(s);
    i = 0;
    goto L36(i);
  L54(r80):
    r81 = `!`(r80);
    st `has.lower` = r81;
    c35 = `as.logical`(r81);
    if c35 then L265() else L55(c35);
  L204():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L206() else L207();
  L205():
    r40 = dyn base5(<lang names(x)>);
    goto L34(r40);
  L255():
    goto L52(r74);
  L257():
    r76 = dyn stop1("non-numeric argument to 'pairs'");
    check L258() else D29();
  L262():
    lower_panel1 = ld `lower.panel`;
    check L264() else D32();
  L263():
    r79 = dyn base12(<sym lower.panel>);
    goto L54(r79);
  D29():
    deopt 125 [r76];
  D32():
    deopt 134 [lower_panel1];
  L35(r43):
    r45 = seq_along(r43);
    goto L34(r45);
  L36(i1):
    i2 = `+`.1(i1, 1);
    c11 = `<`.1(l, i2);
    if c11 then L210() else L50();
  L55(c37):
    c44 = `as.logical`(c37);
    if c44 then L269() else L57();
  L206():
    x5 = ld x;
    check L208() else D10();
  L207():
    r42 = dyn base6(<sym x>);
    goto L35(r42);
  L258():
    goto L51();
  L264():
    lower_panel2 = force? lower_panel1;
    checkMissing(lower_panel2);
    c34 = `==`(lower_panel2, NULL);
    goto L54(c34);
  L265():
    sym13 = ldf missing;
    base13 = ldf missing in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L266() else L267();
  D10():
    deopt 59 [x5];
  L50():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    is_factor = ldf `is.factor`;
    check L211() else D12();
  L56(c40, r83):
    r85 = `!`(r83);
    c41 = `as.logical`(r85);
    c42 = `&&`(c40, c41);
    goto L55(c42);
  L57():
    goto L58();
  L58():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L273() else L274();
  L208():
    x6 = force? x5;
    checkMissing(x6);
    names1 = ldf names in base;
    r44 = dyn names1(x6);
    check L209() else D11();
  L210():
    goto L51();
  L266():
    missing1 = ldf missing in base;
    r84 = dyn missing1(<sym lower.panel>);
    goto L56(c35, r84);
  L267():
    r82 = dyn base13(<sym lower.panel>);
    goto L56(c35, r82);
  L269():
    match_fun1 = ldf `match.fun`;
    check L270() else D33();
  D11():
    deopt 62 [r44];
  D12():
    deopt 65 [i2];
  D33():
    deopt 145 [];
  L59(r90):
    r91 = `!`(r90);
    st `has.upper` = r91;
    c46 = `as.logical`(r91);
    if c46 then L276() else L60(c46);
  L209():
    goto L35(r44);
  L211():
    p10 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      c12 = `is.object`(x9);
      if c12 then L1() else L2(x9);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x9);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x11):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r46 = dyn __(x11, i6);
      goto L0(r46);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r48 = dyn is_factor(p10);
    check L212() else D13();
  L270():
    p12 = prom<V +>{
      lower_panel3 = ld `lower.panel`;
      lower_panel4 = force? lower_panel3;
      checkMissing(lower_panel4);
      return lower_panel4;
    };
    r87 = dyn match_fun1(p12);
    check L271() else D34();
  L273():
    upper_panel1 = ld `upper.panel`;
    check L275() else D35();
  L274():
    r89 = dyn base14(<sym upper.panel>);
    goto L59(r89);
  D13():
    deopt 67 [i2, r48];
  D34():
    deopt 147 [r87];
  D35():
    deopt 152 [upper_panel1];
  L60(c48):
    c55 = `as.logical`(c48);
    if c55 then L280() else L62();
  L212():
    c13 = `as.logical`(r48);
    if c13 then L37(i2, c13) else L213();
  L271():
    st `lower.panel` = r87;
    goto L58();
  L275():
    upper_panel2 = force? upper_panel1;
    checkMissing(upper_panel2);
    c45 = `==`(upper_panel2, NULL);
    goto L59(c45);
  L276():
    sym15 = ldf missing;
    base15 = ldf missing in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L277() else L278();
  L37(i7, c14):
    c28 = `as.logical`(c14);
    if c28 then L222() else L40();
  L61(c51, r93):
    r95 = `!`(r93);
    c52 = `as.logical`(r95);
    c53 = `&&`(c51, c52);
    goto L60(c53);
  L62():
    goto L63();
  L63():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L284() else L285();
  L213():
    sym7 = ldf `is.logical`;
    base7 = ldf `is.logical` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L214() else L215();
  L277():
    missing2 = ldf missing in base;
    r94 = dyn missing2(<sym upper.panel>);
    goto L61(c46, r94);
  L278():
    r92 = dyn base15(<sym upper.panel>);
    goto L61(c46, r92);
  L280():
    match_fun2 = ldf `match.fun`;
    check L281() else D36();
  D36():
    deopt 163 [];
  L38(i11, c18, r50):
    c25 = `as.logical`(r50);
    c26 = `||`(c18, c25);
    goto L37(i11, c26);
  L40():
    goto L44(i7);
  L44(i36):
    sym9 = ldf `is.numeric`;
    base9 = ldf `is.numeric` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L236() else L237();
  L64(r100):
    r101 = `!`(r100);
    st `has.diag` = r101;
    c57 = `as.logical`(r101);
    if c57 then L287() else L65(c57);
  L214():
    x12 = ld x;
    check L216() else D14();
  L215():
    r49 = dyn base7(<lang `[[`(x, i)>);
    goto L38(i2, c13, r49);
  L222():
    sym8 = ldf `as.numeric`;
    base8 = ldf `as.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L223() else L224();
  L281():
    p13 = prom<V +>{
      upper_panel3 = ld `upper.panel`;
      upper_panel4 = force? upper_panel3;
      checkMissing(upper_panel4);
      return upper_panel4;
    };
    r97 = dyn match_fun2(p13);
    check L282() else D37();
  L284():
    diag_panel1 = ld `diag.panel`;
    check L286() else D38();
  L285():
    r99 = dyn base16(<sym diag.panel>);
    goto L64(r99);
  D14():
    deopt 69 [i2, c13, x12];
  D37():
    deopt 165 [r97];
  D38():
    deopt 170 [diag_panel1];
  L41(i23, r53):
    l1 = ld x;
    c30 = `is.object`(l1);
    if c30 then L231() else L232(i23, r53, l1);
  L45(i39, r63):
    r69 = `!`(r63);
    c32 = `as.logical`(r69);
    if c32 then L247() else L48();
  L65(c59):
    c66 = `as.logical`(c59);
    if c66 then L291() else L67();
  L216():
    x13 = force? x12;
    checkMissing(x13);
    c19 = `is.object`(x13);
    if c19 then L217() else L218(i2, c13, x13);
  L223():
    x16 = ld x;
    check L225() else D16();
  L224():
    r52 = dyn base8(<lang `[[`(x, i)>);
    goto L41(i7, r52);
  L236():
    sym10 = ldf unclass;
    base10 = ldf unclass in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L238() else L239();
  L237():
    r62 = dyn base9(<lang unclass(`[[`(x, i))>);
    goto L45(i36, r62);
  L282():
    st `upper.panel` = r97;
    goto L63();
  L286():
    diag_panel2 = force? diag_panel1;
    checkMissing(diag_panel2);
    c56 = `==`(diag_panel2, NULL);
    goto L64(c56);
  L287():
    sym17 = ldf missing;
    base17 = ldf missing in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L288() else L289();
  D16():
    deopt 78 [i7, x16];
  L39(i15, c23, dx3):
    c24 = `is.logical`(dx3);
    goto L38(i15, c23, c24);
  L43(i33, r59, dx7):
    st x = dx7;
    goto L44(i33);
  L46(i42, r65):
    is_numeric = ldf `is.numeric` in base;
    r68 = dyn is_numeric(r65);
    check L246() else D23();
  L48():
    goto L49(i39);
  L49(i51):
    goto L36(i51);
  L66(c62, r103):
    r105 = `!`(r103);
    c63 = `as.logical`(r105);
    c64 = `&&`(c62, c63);
    goto L65(c64);
  L67():
    goto L68();
  L68():
    row1attop5 = ld row1attop;
    check L295() else D41();
  L217():
    dr2 = tryDispatchBuiltin.1("[[", x13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L219() else L218(i2, c13, dr2);
  L218(i13, c21, x15):
    i16 = ld i;
    check L220() else D15();
  L225():
    x17 = force? x16;
    checkMissing(x17);
    c29 = `is.object`(x17);
    if c29 then L226() else L227(i7, x17);
  L231():
    dr6 = tryDispatchBuiltin.0("[[<-", l1, r53);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L233() else L232(i23, r53, dr6);
  L232(i31, r57, l3):
    i34 = ld i;
    check L234() else D19();
  L238():
    x20 = ld x;
    check L240() else D20();
  L239():
    r64 = dyn base10(<lang `[[`(x, i)>);
    goto L46(i36, r64);
  L247():
    stop = ldf stop;
    check L248() else D24();
  L288():
    missing3 = ldf missing in base;
    r104 = dyn missing3(<sym diag.panel>);
    goto L66(c57, r104);
  L289():
    r102 = dyn base17(<sym diag.panel>);
    goto L66(c57, r102);
  L291():
    match_fun3 = ldf `match.fun`;
    check L292() else D39();
  D15():
    deopt 71 [i13, c21, x15, i16];
  D19():
    deopt 86 [i31, r57, l3, r53, i34];
  D20():
    deopt 96 [i36, x20];
  D23():
    deopt 104 [i42, r68];
  D24():
    deopt 107 [i39];
  D39():
    deopt 181 [];
  D41():
    deopt 187 [row1attop5];
  L42(i27, dx5):
    as_numeric = ldf `as.numeric` in base;
    r55 = dyn as_numeric(dx5);
    check L230() else D18();
  L219():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L39(i2, c13, dx2);
  L220():
    i17 = force? i16;
    __1 = ldf `[[` in base;
    r51 = dyn __1(x15, i17);
    goto L39(i13, c21, r51);
  L226():
    dr4 = tryDispatchBuiltin.1("[[", x17);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L228() else L227(i7, dr4);
  L227(i25, x19):
    i28 = ld i;
    check L229() else D17();
  L233():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L43(i23, r53, dx6);
  L234():
    i35 = force? i34;
    ____ = ldf `[[<-` in base;
    r60 = dyn ____(l3, r53, i35);
    goto L43(i31, r57, r60);
  L240():
    x21 = force? x20;
    checkMissing(x21);
    c31 = `is.object`(x21);
    if c31 then L241() else L242(i36, x21);
  L246():
    goto L45(i42, r68);
  L248():
    r70 = dyn stop("non-numeric argument to 'pairs'");
    check L249() else D25();
  L292():
    p14 = prom<V +>{
      diag_panel3 = ld `diag.panel`;
      diag_panel4 = force? diag_panel3;
      checkMissing(diag_panel4);
      return diag_panel4;
    };
    r107 = dyn match_fun3(p14);
    check L293() else D40();
  L295():
    row1attop6 = force? row1attop5;
    checkMissing(row1attop6);
    c67 = `as.logical`(row1attop6);
    if c67 then L296() else L69();
  D17():
    deopt 80 [i25, x19, i28];
  D18():
    deopt 84 [i27, r55];
  D25():
    deopt 109 [i39, r70];
  D40():
    deopt 183 [r107];
  L47(i46, dx9):
    unclass = ldf unclass in base;
    r67 = dyn unclass(dx9);
    check L245() else D22();
  L69():
    goto L70();
  L70():
    ncol = ldf ncol;
    check L304() else D48();
  L228():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L42(i7, dx4);
  L229():
    i29 = force? i28;
    __2 = ldf `[[` in base;
    r54 = dyn __2(x19, i29);
    goto L42(i25, r54);
  L230():
    goto L41(i27, r55);
  L241():
    dr8 = tryDispatchBuiltin.1("[[", x21);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L243() else L242(i36, dr8);
  L242(i44, x23):
    i47 = ld i;
    check L244() else D21();
  L249():
    goto L49(i39);
  L293():
    st `diag.panel` = r107;
    goto L68();
  L296():
    lower_panel5 = ld `lower.panel`;
    check L297() else D42();
  D21():
    deopt 98 [i44, x23, i47];
  D22():
    deopt 102 [i46, r67];
  D42():
    deopt 189 [lower_panel5];
  D48():
    deopt 210 [];
  L243():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L47(i36, dx8);
  L244():
    i48 = force? i47;
    __3 = ldf `[[` in base;
    r66 = dyn __3(x23, i48);
    goto L47(i44, r66);
  L245():
    goto L46(i46, r67);
  L297():
    lower_panel6 = force? lower_panel5;
    checkMissing(lower_panel6);
    st tmp = lower_panel6;
    upper_panel5 = ld `upper.panel`;
    check L298() else D43();
  L304():
    p15 = prom<V +>{
      x26 = ld x;
      x27 = force? x26;
      checkMissing(x27);
      return x27;
    };
    r110 = dyn ncol(p15);
    check L305() else D49();
  D43():
    deopt 192 [upper_panel5];
  D49():
    deopt 212 [r110];
  L298():
    upper_panel6 = force? upper_panel5;
    checkMissing(upper_panel6);
    st `lower.panel` = upper_panel6;
    tmp = ld tmp;
    check L299() else D44();
  L305():
    st nc = r110;
    nc4 = ld nc;
    check L306() else D50();
  D44():
    deopt 195 [tmp];
  D50():
    deopt 214 [nc4];
  L299():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    st `upper.panel` = tmp1;
    has_lower = ld `has.lower`;
    check L300() else D45();
  L306():
    nc5 = force? nc4;
    checkMissing(nc5);
    r111 = `<`(nc5, 2);
    c68 = `as.logical`(r111);
    if c68 then L307() else L71();
  D45():
    deopt 198 [has_lower];
  L71():
    goto L72();
  L72():
    sym18 = ldf all;
    base18 = ldf all in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L311() else L312();
  L300():
    has_lower1 = force? has_lower;
    checkMissing(has_lower1);
    st tmp = has_lower1;
    has_upper = ld `has.upper`;
    check L301() else D46();
  L307():
    stop2 = ldf stop;
    check L308() else D51();
  D46():
    deopt 201 [has_upper];
  D51():
    deopt 219 [];
  L73(r115):
    r120 = `!`(r115);
    c69 = `as.logical`(r120);
    if c69 then L317() else L74();
  L301():
    has_upper1 = force? has_upper;
    checkMissing(has_upper1);
    st `has.lower` = has_upper1;
    tmp2 = ld tmp;
    check L302() else D47();
  L308():
    r112 = dyn stop2("only one column in the argument to 'pairs'");
    check L309() else D52();
  L311():
    horInd1 = ld horInd;
    check L313() else D53();
  L312():
    r114 = dyn base18(<lang `&`(`<=`(1, horInd), `<=`(horInd, nc))>);
    goto L73(r114);
  D47():
    deopt 204 [tmp2];
  D52():
    deopt 221 [r112];
  D53():
    deopt 227 [1, horInd1];
  L74():
    goto L75();
  L75():
    sym19 = ldf all;
    base19 = ldf all in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L321() else L322();
  L302():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    st `has.upper` = tmp3;
    goto L70();
  L309():
    goto L72();
  L313():
    horInd2 = force? horInd1;
    checkMissing(horInd2);
    r116 = `<=`(1, horInd2);
    horInd3 = ld horInd;
    check L314() else D54();
  L317():
    stop3 = ldf stop;
    check L318() else D57();
  D54():
    deopt 229 [r116, horInd3];
  D57():
    deopt 238 [];
  L76(r124):
    r129 = `!`(r124);
    c70 = `as.logical`(r129);
    if c70 then L327() else L77();
  L314():
    horInd4 = force? horInd3;
    checkMissing(horInd4);
    nc6 = ld nc;
    check L315() else D55();
  L318():
    r121 = dyn stop3("invalid argument 'horInd'");
    check L319() else D58();
  L321():
    verInd1 = ld verInd;
    check L323() else D59();
  L322():
    r123 = dyn base19(<lang `&`(`<=`(1, verInd), `<=`(verInd, nc))>);
    goto L76(r123);
  D55():
    deopt 230 [r116, horInd4, nc6];
  D58():
    deopt 240 [r121];
  D59():
    deopt 246 [1, verInd1];
  L77():
    goto L78();
  L78():
    doText = ld doText;
    check L331() else D65();
  L315():
    nc7 = force? nc6;
    checkMissing(nc7);
    r117 = `<=`(horInd4, nc7);
    r118 = `&&`(r116, r117);
    all = ldf all in base;
    r119 = dyn all(r118);
    check L316() else D56();
  L319():
    goto L75();
  L323():
    verInd2 = force? verInd1;
    checkMissing(verInd2);
    r125 = `<=`(1, verInd2);
    verInd3 = ld verInd;
    check L324() else D60();
  L327():
    stop4 = ldf stop;
    check L328() else D63();
  D56():
    deopt 235 [r119];
  D60():
    deopt 248 [r125, verInd3];
  D63():
    deopt 257 [];
  D65():
    deopt 262 [doText];
  L316():
    goto L73(r119);
  L324():
    verInd4 = force? verInd3;
    checkMissing(verInd4);
    nc8 = ld nc;
    check L325() else D61();
  L328():
    r130 = dyn stop4("invalid argument 'verInd'");
    check L329() else D64();
  L331():
    doText1 = force? doText;
    checkMissing(doText1);
    c71 = `as.logical`(doText1);
    if c71 then L332() else L79();
  D61():
    deopt 249 [r125, verInd4, nc8];
  D64():
    deopt 259 [r130];
  L79():
    goto L88();
  L88():
    _in_ = ldf `%in%`;
    check L352() else D72();
  L325():
    nc9 = force? nc8;
    checkMissing(nc9);
    r126 = `<=`(verInd4, nc9);
    r127 = `&&`(r125, r126);
    all1 = ldf all in base;
    r128 = dyn all1(r127);
    check L326() else D62();
  L329():
    goto L78();
  L332():
    sym20 = ldf missing;
    base20 = ldf missing in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L333() else L334();
  D62():
    deopt 254 [r128];
  D72():
    deopt 296 [];
  L80(r133):
    c72 = `as.logical`(r133);
    if c72 then L335() else L81();
  L326():
    goto L76(r128);
  L333():
    missing4 = ldf missing in base;
    r134 = dyn missing4(<sym labels>);
    goto L80(r134);
  L334():
    r132 = dyn base20(<sym labels>);
    goto L80(r132);
  L352():
    p18 = prom<V +>{
      nmdots = ld nmdots;
      nmdots1 = force? nmdots;
      checkMissing(nmdots1);
      return nmdots1;
    };
    r148 = dyn _in_("oma", p18);
    check L353() else D73();
  D73():
    deopt 299 [r148];
  L81():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L346() else L347();
  L85(r143):
    goto L88();
  L335():
    colnames = ldf colnames;
    check L336() else D66();
  L353():
    c77 = `as.logical`(r148);
    if c77 then L354() else L89();
  D66():
    deopt 268 [];
  L86(r145):
    c76 = `as.logical`(r145);
    if c76 then L349() else L87();
  L89():
    goto L90(NULL);
  L90(dx12):
    st oma = dx12;
    _in_1 = ldf `%in%`;
    check L361() else D75();
  L336():
    p16 = prom<V +>{
      x28 = ld x;
      x29 = force? x28;
      checkMissing(x29);
      return x29;
    };
    r136 = dyn colnames(p16);
    check L337() else D67();
  L346():
    labels3 = ld labels;
    check L348() else D71();
  L347():
    r144 = dyn base22(<sym labels>);
    goto L86(r144);
  L354():
    dots2 = ld dots;
    check L355() else D74();
  D67():
    deopt 270 [r136];
  D71():
    deopt 285 [labels3];
  D74():
    deopt 300 [dots2];
  D75():
    deopt 307 [];
  L87():
    goto L85(NULL);
  L337():
    st labels = r136;
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L338() else L339();
  L348():
    labels4 = force? labels3;
    checkMissing(labels4);
    c75 = `==`(labels4, NULL);
    goto L86(c75);
  L349():
    st doText = FALSE;
    goto L85(FALSE);
  L355():
    dots3 = force? dots2;
    checkMissing(dots3);
    c78 = `is.object`(dots3);
    if c78 then L357() else L358(dots3);
  L361():
    p19 = prom<V +>{
      nmdots2 = ld nmdots;
      nmdots3 = force? nmdots2;
      checkMissing(nmdots3);
      return nmdots3;
    };
    r151 = dyn _in_1("main", p19);
    check L362() else D76();
  D76():
    deopt 310 [r151];
  L82(r138):
    c74 = `as.logical`(r138);
    if c74 then L341() else L83();
  L338():
    labels1 = ld labels;
    check L340() else D68();
  L339():
    r137 = dyn base21(<sym labels>);
    goto L82(r137);
  L356(dx11):
    goto L90(dx11);
  L357():
    dr10 = tryDispatchBuiltin.1("$", dots3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L359() else L358(dr10);
  L358(dots5):
    r149 = `$`(dots5, <sym oma>);
    goto L356(r149);
  L362():
    c79 = `as.logical`(r151);
    if c79 then L363() else L91();
  D68():
    deopt 273 [labels1];
  L83():
    goto L84(NULL);
  L84(r142):
    goto L85(r142);
  L91():
    goto L92(NULL);
  L92(dx15):
    st main = dx15;
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L370() else L371();
  L340():
    labels2 = force? labels1;
    checkMissing(labels2);
    c73 = `==`(labels2, NULL);
    goto L82(c73);
  L341():
    paste = ldf paste;
    check L342() else D69();
  L359():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L356(dx10);
  L363():
    dots6 = ld dots;
    check L364() else D77();
  D69():
    deopt 277 [];
  D77():
    deopt 311 [dots6];
  L93(r154):
    c82 = `as.logical`(r154);
    if c82 then L373() else L94();
  L342():
    p17 = prom<V +>{
      nc10 = ld nc;
      nc11 = force? nc10;
      checkMissing(nc11);
      r139 = `:`(1, nc11);
      return r139;
    };
    r141 = dyn paste("var", p17);
    check L343() else D70();
  L364():
    dots7 = force? dots6;
    checkMissing(dots7);
    c80 = `is.object`(dots7);
    if c80 then L366() else L367(dots7);
  L370():
    oma = ld oma;
    check L372() else D78();
  L371():
    r153 = dyn base23(<sym oma>);
    goto L93(r153);
  D70():
    deopt 280 [r141];
  D78():
    deopt 318 [oma];
  L94():
    goto L99();
  L99():
    par = ldf par;
    check L383() else D81();
  L343():
    st labels = r141;
    goto L84(r141);
  L365(dx14):
    goto L92(dx14);
  L366():
    dr12 = tryDispatchBuiltin.1("$", dots7);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L368() else L367(dr12);
  L367(dots9):
    r152 = `$`(dots9, <sym main>);
    goto L365(r152);
  L372():
    oma1 = force? oma;
    checkMissing(oma1);
    c81 = `==`(oma1, NULL);
    goto L93(c81);
  L373():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L374() else L375();
  D81():
    deopt 341 [];
  L95(r156):
    st oma = r156;
    goto L99();
  L368():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L365(dx13);
  L374():
    sym25 = ldf `is.null`;
    base25 = ldf `is.null` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L376() else L377();
  L375():
    r155 = dyn base24(4.0, 4.0, <lang if(`!`(is.null(main)), 6.0, 4.0)>, 4.0);
    goto L95(r155);
  L383():
    p20 = prom<V +>{
      sym26 = ldf c;
      base26 = ldf c in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L3() else L4();
    L0(r164):
      return r164;
    L3():
      sym27 = ldf length;
      base27 = ldf length in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L5() else L6();
    L4():
      r163 = dyn base26(<lang length(horInd)>, <lang length(verInd)>);
      goto L0(r163);
    L1(r166):
      sym28 = ldf length;
      base28 = ldf length in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L7() else L8();
    L5():
      horInd5 = ld horInd;
      horInd6 = force? horInd5;
      checkMissing(horInd6);
      length = ldf length in base;
      r167 = dyn length(horInd6);
      goto L1(r167);
    L6():
      r165 = dyn base27(<sym horInd>);
      goto L1(r165);
    L2(r169):
      c86 = ldf c in base;
      r171 = dyn c86(r166, r169);
      goto L0(r171);
    L7():
      verInd5 = ld verInd;
      verInd6 = force? verInd5;
      checkMissing(verInd6);
      length1 = ldf length in base;
      r170 = dyn length1(verInd6);
      goto L2(r170);
    L8():
      r168 = dyn base28(<sym verInd>);
      goto L2(r168);
    };
    p21 = prom<V +>{
      sym29 = ldf `rep.int`;
      base29 = ldf `rep.int` in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r174):
      return r174;
    L1():
      gap1 = ld gap;
      gap2 = force? gap1;
      checkMissing(gap2);
      r175 = `/`(gap2, 2.0);
      rep_int = ldf `rep.int` in base;
      r176 = dyn rep_int(r175, 4.0);
      goto L0(r176);
    L2():
      r173 = dyn base29(<lang `/`(gap, 2.0)>, 4.0);
      goto L0(r173);
    };
    p22 = prom<V +>{
      oma2 = ld oma;
      oma3 = force? oma2;
      checkMissing(oma3);
      return oma3;
    };
    r179 = dyn par[mfcol, mar, oma](p20, p21, p22);
    check L384() else D82();
  D82():
    deopt 348 [r179];
  L96(r158):
    r159 = `!`(r158);
    c84 = `as.logical`(r159);
    if c84 then L379() else L97();
  L376():
    main = ld main;
    check L378() else D79();
  L377():
    r157 = dyn base25(<sym main>);
    goto L96(r157);
  L384():
    st opar = r179;
    sym30 = ldf `on.exit`;
    base30 = ldf `on.exit` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L385() else L386();
  D79():
    deopt 326 [main];
  L97():
    goto L98(4.0);
  L98(r160):
    c85 = ldf c in base;
    r161 = dyn c85(4.0, 4.0, r160, 4.0);
    check L381() else D80();
  L100():
    dev_hold = ldf `dev.hold`;
    check L387() else D83();
  L378():
    main1 = force? main;
    checkMissing(main1);
    c83 = `==`(main1, NULL);
    goto L96(c83);
  L379():
    goto L98(6.0);
  L385():
    on_exit = ldf `on.exit` in base;
    r182 = dyn on_exit(<lang par(opar)>);
    goto L100();
  L386():
    r180 = dyn base30(<lang par(opar)>);
    goto L100();
  D80():
    deopt 336 [r161];
  D83():
    deopt 354 [];
  L381():
    goto L95(r161);
  L387():
    r183 = dyn dev_hold();
    check L388() else D84();
  D84():
    deopt 355 [r183];
  L388():
    sym31 = ldf `on.exit`;
    base31 = ldf `on.exit` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L389() else L390();
  L101():
    logical = ldf logical;
    check L391() else D85();
  L389():
    on_exit1 = ldf `on.exit` in base;
    r186 = dyn on_exit1(<lang dev.flush()>, TRUE);
    goto L101();
  L390():
    r184 = dyn base31[, add](<lang dev.flush()>, TRUE);
    goto L101();
  D85():
    deopt 360 [];
  L391():
    p23 = prom<V +>{
      nc12 = ld nc;
      nc13 = force? nc12;
      checkMissing(nc13);
      return nc13;
    };
    r188 = dyn logical(p23);
    check L392() else D86();
  D86():
    deopt 362 [r188];
  L392():
    st yl = r188;
    st xl = r188;
    sym32 = ldf `is.numeric`;
    base32 = ldf `is.numeric` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L393() else L394();
  L102(r190):
    c87 = `as.logical`(r190);
    if c87 then L397() else L103();
  L393():
    log1 = ld log;
    check L395() else D87();
  L394():
    r189 = dyn base32(<sym log>);
    goto L102(r189);
  D87():
    deopt 367 [log1];
  L103():
    grepl = ldf grepl;
    check L407() else D91();
  L106():
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L417() else L418();
  L395():
    log2 = force? log1;
    checkMissing(log2);
    is_numeric2 = ldf `is.numeric` in base;
    r191 = dyn is_numeric2(log2);
    check L396() else D88();
  L397():
    l4 = ld yl;
    c88 = `is.object`(l4);
    if c88 then L398() else L399(TRUE, l4);
  D88():
    deopt 370 [r191];
  D91():
    deopt 384 [];
  L104(r195, dx17):
    st yl = dx17;
    l7 = ld xl;
    c89 = `is.object`(l7);
    if c89 then L402() else L403(r195, l7);
  L109(r218):
    st ni = r218;
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L426() else L427();
  L396():
    goto L102(r191);
  L398():
    dr14 = tryDispatchBuiltin.0("[<-", l4, TRUE);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L400() else L399(TRUE, dr14);
  L399(r193, l6):
    log3 = ld log;
    check L401() else D89();
  L407():
    p24 = prom<V +>{
      log7 = ld log;
      log8 = force? log7;
      checkMissing(log8);
      return log8;
    };
    r204 = dyn grepl("x", p24);
    check L408() else D92();
  L417():
    row1attop7 = ld row1attop;
    check L419() else D95();
  L418():
    r217 = dyn base33(<lang `<-`(iSet, if(row1attop, horInd, rev(horInd)))>);
    goto L109(r217);
  D89():
    deopt 374 [r193, l6, TRUE, log3];
  D92():
    deopt 387 [r204];
  D95():
    deopt 405 [row1attop7];
  L105(r200, dx19):
    st xl = dx19;
    goto L106();
  L112(r223):
    st nj = r223;
    jSet = ld jSet;
    check L430() else D102();
  L400():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L104(TRUE, dx16);
  L401():
    log4 = force? log3;
    ___ = ldf `[<-` in base;
    r196 = dyn ___(l6, TRUE, log4);
    goto L104(r193, r196);
  L402():
    dr16 = tryDispatchBuiltin.0("[<-", l7, r195);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L404() else L403(r195, dr16);
  L403(r198, l9):
    log5 = ld log;
    check L405() else D90();
  L408():
    l10 = ld xl;
    c90 = `is.object`(l10);
    if c90 then L409() else L410(r204);
  L419():
    row1attop8 = force? row1attop7;
    checkMissing(row1attop8);
    c92 = `as.logical`(row1attop8);
    if c92 then L420() else L110();
  L426():
    verInd7 = ld verInd;
    check L428() else D100();
  L427():
    r222 = dyn base34(<lang `<-`(jSet, verInd)>);
    goto L112(r222);
  D90():
    deopt 379 [r198, l9, r195, log5];
  D100():
    deopt 419 [verInd7];
  D102():
    deopt 425 [jSet];
  L107(dx21):
    st xl = dx21;
    grepl1 = ldf grepl;
    check L412() else D93();
  L110():
    rev = ldf rev;
    check L423() else D97();
  L111(horInd9):
    st iSet = horInd9;
    length2 = ldf length in base;
    r221 = dyn length2(horInd9);
    check L425() else D99();
  L404():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L105(r195, dx18);
  L405():
    log6 = force? log5;
    ___1 = ldf `[<-` in base;
    r201 = dyn ___1(l9, r195, log6);
    goto L105(r198, r201);
  L409():
    dr18 = tryDispatchBuiltin.0("[<-", l10, r204);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L411() else L410(r204);
  L410(r206):
    ___2 = ldf `[<-` in base;
    r209 = dyn ___2(l10, <missing>, r204);
    goto L107(r209);
  L420():
    horInd7 = ld horInd;
    check L421() else D96();
  L428():
    verInd8 = force? verInd7;
    checkMissing(verInd8);
    st jSet = verInd8;
    length3 = ldf length in base;
    r224 = dyn length3(verInd8);
    check L429() else D101();
  L430():
    jSet1 = force? jSet;
    checkMissing(jSet1);
    s1 = toForSeq(jSet1);
    l16 = length(s1);
    i53 = 0;
    goto L113(i53);
  D93():
    deopt 394 [];
  D96():
    deopt 407 [horInd7];
  D97():
    deopt 410 [];
  D99():
    deopt 415 [r221];
  D101():
    deopt 423 [r224];
  L113(i54):
    i55 = `+`.1(i54, 1);
    c93 = `<`.1(l16, i55);
    if c93 then L431() else L170();
  L411():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L107(dx20);
  L412():
    p25 = prom<V +>{
      log9 = ld log;
      log10 = force? log9;
      checkMissing(log10);
      return log10;
    };
    r211 = dyn grepl1("y", p25);
    check L413() else D94();
  L421():
    horInd8 = force? horInd7;
    checkMissing(horInd8);
    goto L111(horInd8);
  L423():
    p26 = prom<V +>{
      horInd10 = ld horInd;
      horInd11 = force? horInd10;
      checkMissing(horInd11);
      return horInd11;
    };
    r220 = dyn rev(p26);
    check L424() else D98();
  L425():
    goto L109(r221);
  L429():
    goto L112(r224);
  D94():
    deopt 397 [r211];
  D98():
    deopt 412 [r220];
  L170():
    x30 = `[[`(s1, i55, NULL, TRUE);
    st j = x30;
    iSet = ld iSet;
    check L432() else D103();
  L413():
    l13 = ld yl;
    c91 = `is.object`(l13);
    if c91 then L414() else L415(r211);
  L424():
    goto L111(r220);
  L431():
    sym43 = ldf `is.null`;
    base43 = ldf `is.null` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L617() else L618();
  D103():
    deopt 427 [i55, iSet];
  L108(r215, dx23):
    st yl = dx23;
    goto L106();
  L171(r366):
    r367 = `!`(r366);
    c263 = `as.logical`(r367);
    if c263 then L620() else L172();
  L414():
    dr20 = tryDispatchBuiltin.0("[<-", l13, r211);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L416() else L415(r211);
  L415(r213):
    ___3 = ldf `[<-` in base;
    r216 = dyn ___3(l13, <missing>, r211);
    goto L108(r213, r216);
  L432():
    iSet1 = force? iSet;
    checkMissing(iSet1);
    s2 = toForSeq(iSet1);
    l17 = length(s2);
    i58 = 0;
    goto L114(i55, i58);
  L617():
    main2 = ld main;
    check L619() else D197();
  L618():
    r365 = dyn base43(<sym main>);
    goto L171(r365);
  D197():
    deopt 752 [main2];
  L114(i59, i60):
    i61 = `+`.1(i60, 1);
    c94 = `<`.1(l17, i61);
    if c94 then L433() else L169();
  L172():
    goto L177();
  L177():
    sym44 = ldf invisible;
    base44 = ldf invisible in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L646() else L647();
  L416():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L108(r211, dx22);
  L619():
    main3 = force? main2;
    checkMissing(main3);
    c262 = `==`(main3, NULL);
    goto L171(c262);
  L620():
    _in_2 = ldf `%in%`;
    check L621() else D198();
  D198():
    deopt 757 [];
  L169():
    x31 = `[[`(s2, i61, NULL, TRUE);
    st i = x31;
    paste1 = ldf paste0;
    check L434() else D104();
  L178(r383):
    popenv;
    return r383;
  L433():
    goto L113(i59);
  L621():
    p57 = prom<V +>{
      nmdots4 = ld nmdots;
      nmdots5 = force? nmdots4;
      checkMissing(nmdots5);
      return nmdots5;
    };
    r369 = dyn _in_2("font.main", p57);
    check L622() else D199();
  L646():
    invisible = ldf invisible in base;
    r384 = dyn invisible(NULL);
    check L648() else D210();
  L647():
    r382 = dyn base44(NULL);
    goto L178(r382);
  D104():
    deopt 430 [i59, i61];
  D199():
    deopt 760 [r369];
  D210():
    deopt 802 [r384];
  L434():
    p27 = prom<V +>{
      xl = ld xl;
      xl1 = force? xl;
      checkMissing(xl1);
      c95 = `is.object`(xl1);
      if c95 then L2() else L3(xl1);
    L0(dx25):
      c96 = `as.logical`(dx25);
      if c96 then L5() else L1();
    L2():
      dr22 = tryDispatchBuiltin.1("[", xl1);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L4() else L3(dr22);
    L3(xl3):
      j = ld j;
      j1 = force? j;
      __4 = ldf `[` in base;
      r225 = dyn __4(xl3, j1);
      goto L0(r225);
    L1():
      return "";
    L4():
      dx24 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx24);
    L5():
      return "x";
    };
    p28 = prom<V +>{
      yl = ld yl;
      yl1 = force? yl;
      checkMissing(yl1);
      c97 = `is.object`(yl1);
      if c97 then L2() else L3(yl1);
    L0(dx27):
      c98 = `as.logical`(dx27);
      if c98 then L5() else L1();
    L2():
      dr24 = tryDispatchBuiltin.1("[", yl1);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L4() else L3(dr24);
    L3(yl3):
      i66 = ld i;
      i67 = force? i66;
      __5 = ldf `[` in base;
      r227 = dyn __5(yl3, i67);
      goto L0(r227);
    L1():
      return "";
    L4():
      dx26 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx26);
    L5():
      return "y";
    };
    r229 = dyn paste1(p27, p28);
    check L435() else D105();
  L622():
    c264 = `as.logical`(r369);
    if c264 then L623() else L173();
  L648():
    goto L178(r384);
  D105():
    deopt 433 [i59, i61, r229];
  L173():
    par5 = ldf par;
    check L630() else D201();
  L174(dx74):
    st `font.main` = dx74;
    _in_3 = ldf `%in%`;
    check L632() else D203();
  L435():
    st l = r229;
    localPlot = ldf localPlot;
    check L436() else D106();
  L623():
    dots10 = ld dots;
    check L624() else D200();
  D106():
    deopt 436 [i59, i61];
  D200():
    deopt 761 [dots10];
  D201():
    deopt 765 [];
  D203():
    deopt 770 [];
  L436():
    p29 = prom<V +>{
      x32 = ld x;
      x33 = force? x32;
      checkMissing(x33);
      c99 = `is.object`(x33);
      if c99 then L1() else L2();
    L0(dx29):
      return dx29;
    L1():
      dr26 = tryDispatchBuiltin.1("[", x33);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2();
    L2():
      j2 = ld j;
      j3 = force? j2;
      __6 = ldf `[` in base;
      r230 = dyn __6(x33, <missing>, j3);
      goto L0(r230);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx28);
    };
    p30 = prom<V +>{
      x36 = ld x;
      x37 = force? x36;
      checkMissing(x37);
      c100 = `is.object`(x37);
      if c100 then L1() else L2();
    L0(dx31):
      return dx31;
    L1():
      dr28 = tryDispatchBuiltin.1("[", x37);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2();
    L2():
      i68 = ld i;
      i69 = force? i68;
      __7 = ldf `[` in base;
      r232 = dyn __7(x37, <missing>, i69);
      goto L0(r232);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx30);
    };
    ddd2 = ld `...`;
    p31 = prom<V +>{
      l18 = ld l;
      l19 = force? l18;
      checkMissing(l19);
      return l19;
    };
    r235 = dyn localPlot[, , xlab, ylab, axes, type, `...`, log](p29, p30, "", "", FALSE, "n", ddd2, p31);
    check L437() else D107();
  L624():
    dots11 = force? dots10;
    checkMissing(dots11);
    c265 = `is.object`(dots11);
    if c265 then L626() else L627(dots11);
  L630():
    r371 = dyn par5("font.main");
    check L631() else D202();
  L632():
    p58 = prom<V +>{
      nmdots6 = ld nmdots;
      nmdots7 = force? nmdots6;
      checkMissing(nmdots7);
      return nmdots7;
    };
    r373 = dyn _in_3("cex.main", p58);
    check L633() else D204();
  D107():
    deopt 450 [i59, i61, r235];
  D202():
    deopt 767 [r371];
  D204():
    deopt 773 [r373];
  L437():
    i70 = ld i;
    check L438() else D108();
  L625(dx73):
    goto L174(dx73);
  L626():
    dr70 = tryDispatchBuiltin.1("$", dots11);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L628() else L627(dr70);
  L627(dots13):
    r370 = `$`(dots13, <sym font.main>);
    goto L625(r370);
  L631():
    goto L174(r371);
  L633():
    c266 = `as.logical`(r373);
    if c266 then L634() else L175();
  D108():
    deopt 451 [i59, i61, i70];
  L175():
    par6 = ldf par;
    check L641() else D206();
  L176(dx77):
    st `cex.main` = dx77;
    mtext = ldf mtext;
    check L643() else D208();
  L438():
    i71 = force? i70;
    checkMissing(i71);
    j4 = ld j;
    check L439() else D109();
  L628():
    dx72 = getTryDispatchBuiltinValue(dr70);
    goto L625(dx72);
  L634():
    dots14 = ld dots;
    check L635() else D205();
  D109():
    deopt 452 [i59, i61, i71, j4];
  D205():
    deopt 774 [dots14];
  D206():
    deopt 778 [];
  D208():
    deopt 783 [];
  L439():
    j5 = force? j4;
    checkMissing(j5);
    r236 = `==`(i71, j5);
    c101 = `as.logical`(r236);
    if c101 then L115(i59, i61, c101) else L440();
  L635():
    dots15 = force? dots14;
    checkMissing(dots15);
    c267 = `is.object`(dots15);
    if c267 then L637() else L638(dots15);
  L641():
    r375 = dyn par6("cex.main");
    check L642() else D207();
  L643():
    p59 = prom<V +>{
      main4 = ld main;
      main5 = force? main4;
      checkMissing(main5);
      return main5;
    };
    p60 = prom<V +>{
      line_main1 = ld `line.main`;
      line_main2 = force? line_main1;
      checkMissing(line_main2);
      return line_main2;
    };
    p61 = prom<V +>{
      cex_main = ld `cex.main`;
      cex_main1 = force? cex_main;
      checkMissing(cex_main1);
      return cex_main1;
    };
    p62 = prom<V +>{
      font_main = ld `font.main`;
      font_main1 = force? font_main;
      checkMissing(font_main1);
      return font_main1;
    };
    r380 = dyn mtext[, , , outer, at, cex, font](p59, 3.0, p60, TRUE, 0.5, p61, p62);
    check L644() else D209();
  D207():
    deopt 780 [r375];
  D209():
    deopt 795 [r380];
  L115(i72, i73, c102):
    c116 = `as.logical`(c102);
    if c116 then L117(i72, i73, c116) else L447();
  L440():
    i76 = ld i;
    check L441() else D110();
  L636(dx76):
    goto L176(dx76);
  L637():
    dr72 = tryDispatchBuiltin.1("$", dots15);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L639() else L638(dr72);
  L638(dots17):
    r374 = `$`(dots17, <sym cex.main>);
    goto L636(r374);
  L642():
    goto L176(r375);
  L644():
    goto L177();
  D110():
    deopt 455 [i59, i61, c101, i76];
  L117(i86, i87, c117):
    c131 = `as.logical`(c117);
    if c131 then L454() else L119();
  L441():
    i77 = force? i76;
    checkMissing(i77);
    j6 = ld j;
    check L442() else D111();
  L447():
    i90 = ld i;
    check L448() else D113();
  L639():
    dx75 = getTryDispatchBuiltinValue(dr72);
    goto L636(dx75);
  D111():
    deopt 456 [i59, i61, c101, i77, j6];
  D113():
    deopt 463 [i72, i73, c116, i90];
  L119():
    par4 = ldf par;
    check L615() else D195();
  L168(i372, i373):
    goto L114(i372, i373);
  L442():
    j7 = force? j6;
    checkMissing(j7);
    r237 = `<`(i77, j7);
    c104 = `as.logical`(r237);
    if c104 then L443() else L116(i59, i61, c101, c104);
  L448():
    i91 = force? i90;
    checkMissing(i91);
    j8 = ld j;
    check L449() else D114();
  L454():
    box = ldf box;
    check L455() else D116();
  D114():
    deopt 464 [i72, i73, c116, i91, j8];
  D116():
    deopt 472 [i86, i87];
  D195():
    deopt 741 [i86, i87];
  L116(i80, i81, c107, c108):
    c113 = `as.logical`(c108);
    c114 = `||`(c107, c113);
    goto L115(i80, i81, c114);
  L443():
    has_lower2 = ld `has.lower`;
    check L444() else D112();
  L449():
    j9 = force? j8;
    checkMissing(j9);
    r238 = `>`(i91, j9);
    c119 = `as.logical`(r238);
    if c119 then L450() else L118(i72, i73, c116, c119);
  L455():
    r239 = dyn box();
    check L456() else D117();
  L615():
    r364 = dyn par4[new](FALSE);
    check L616() else D196();
  D112():
    deopt 459 [i59, i61, c101, c104, has_lower2];
  D117():
    deopt 473 [i86, i87, r239];
  D196():
    deopt 744 [i86, i87, r364];
  L118(i94, i95, c122, c123):
    c128 = `as.logical`(c123);
    c129 = `||`(c122, c128);
    goto L117(i94, i95, c129);
  L444():
    has_lower3 = force? has_lower2;
    checkMissing(has_lower3);
    c109 = `as.logical`(has_lower3);
    c110 = `&&`(c104, c109);
    goto L116(i59, i61, c101, c110);
  L450():
    has_upper2 = ld `has.upper`;
    check L451() else D115();
  L456():
    sym35 = ldf match;
    base35 = ldf match in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L457() else L458();
  L616():
    goto L168(i86, i87);
  D115():
    deopt 467 [i72, i73, c116, c119, has_upper2];
  L120(i108, i109, r241):
    horOdd1 = ld horOdd;
    check L462() else D121();
  L451():
    has_upper3 = force? has_upper2;
    checkMissing(has_upper3);
    c124 = `as.logical`(has_upper3);
    c125 = `&&`(c119, c124);
    goto L118(i72, i73, c116, c125);
  L457():
    j10 = ld j;
    check L459() else D118();
  L458():
    r240 = dyn base35(<sym j>, <sym jSet>);
    goto L120(i86, i87, r240);
  D118():
    deopt 477 [i86, i87, j10];
  D121():
    deopt 484 [i108, i109, r241, horOdd1];
  L459():
    j11 = force? j10;
    checkMissing(j11);
    jSet2 = ld jSet;
    check L460() else D119();
  L462():
    horOdd2 = force? horOdd1;
    checkMissing(horOdd2);
    r243 = `+`(r241, horOdd2);
    __8 = ldf `%%` in base;
    r244 = dyn __8(r243, 2);
    check L463() else D122();
  D119():
    deopt 479 [i86, i87, jSet2];
  D122():
    deopt 489 [i108, i109, r244];
  L460():
    jSet3 = force? jSet2;
    checkMissing(jSet3);
    match = ldf match in base;
    r242 = dyn match(j11, jSet3, NA_INT, NULL);
    check L461() else D120();
  L463():
    st `j.odd` = r244;
    sym36 = ldf match;
    base36 = ldf match in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L464() else L465();
  D120():
    deopt 484 [i86, i87, r242];
  L121(i114, i115, r246):
    verOdd1 = ld verOdd;
    check L469() else D126();
  L461():
    goto L120(i86, i87, r242);
  L464():
    i116 = ld i;
    check L466() else D123();
  L465():
    r245 = dyn base36(<sym i>, <sym iSet>);
    goto L121(i108, i109, r245);
  D123():
    deopt 494 [i108, i109, i116];
  D126():
    deopt 501 [i114, i115, r246, verOdd1];
  L466():
    i117 = force? i116;
    checkMissing(i117);
    iSet2 = ld iSet;
    check L467() else D124();
  L469():
    verOdd2 = force? verOdd1;
    checkMissing(verOdd2);
    r248 = `+`(r246, verOdd2);
    __9 = ldf `%%` in base;
    r249 = dyn __9(r248, 2);
    check L470() else D127();
  D124():
    deopt 496 [i108, i109, iSet2];
  D127():
    deopt 506 [i114, i115, r249];
  L467():
    iSet3 = force? iSet2;
    checkMissing(iSet3);
    match1 = ldf match in base;
    r247 = dyn match1(i117, iSet3, NA_INT, NULL);
    check L468() else D125();
  L470():
    st `i.odd` = r249;
    i118 = ld i;
    check L471() else D128();
  D125():
    deopt 501 [i108, i109, r247];
  D128():
    deopt 508 [i114, i115, i118];
  L468():
    goto L121(i108, i109, r247);
  L471():
    i119 = force? i118;
    checkMissing(i119);
    iSet4 = ld iSet;
    check L472() else D129();
  D129():
    deopt 509 [i114, i115, i119, iSet4];
  L472():
    iSet5 = force? iSet4;
    checkMissing(iSet5);
    c132 = `is.object`(iSet5);
    if c132 then L473() else L474(i114, i115, i119, iSet5);
  L122(i129, i130, i131, dx33):
    r251 = `==`(i131, dx33);
    c133 = `as.logical`(r251);
    if c133 then L476() else L123(i129, i130, c133);
  L473():
    dr30 = tryDispatchBuiltin.1("[", iSet5);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L475() else L474(i114, i115, i119, dr30);
  L474(i123, i124, i125, iSet7):
    __10 = ldf `[` in base;
    r250 = dyn __10(iSet7, 1);
    goto L122(i123, i124, i125, r250);
  L123(i134, i135, c135):
    c157 = `as.logical`(c135);
    if c157 then L485() else L126();
  L475():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L122(i114, i115, i119, dx32);
  L476():
    j_odd = ld `j.odd`;
    check L477() else D130();
  D130():
    deopt 515 [i129, i130, c133, j_odd];
  L126():
    goto L127(i134, i135);
  L127(i156, i157):
    i158 = ld i;
    check L489() else D135();
  L477():
    j_odd1 = force? j_odd;
    checkMissing(j_odd1);
    r252 = `!`(j_odd1);
    c136 = `as.logical`(r252);
    if c136 then L124(i129, i130, c133, c136) else L478();
  L485():
    localAxis = ldf localAxis;
    check L486() else D133();
  D133():
    deopt 528 [i134, i135];
  D135():
    deopt 536 [i156, i157, i158];
  L124(i136, i137, c137, c138):
    c145 = `as.logical`(c138);
    if c145 then L125(i136, i137, c137, c145) else L481();
  L478():
    has_upper4 = ld `has.upper`;
    check L479() else D131();
  L486():
    p32 = prom<V +>{
      x40 = ld x;
      x41 = force? x40;
      checkMissing(x41);
      c158 = `is.object`(x41);
      if c158 then L1() else L2();
    L0(dx35):
      return dx35;
    L1():
      dr32 = tryDispatchBuiltin.1("[", x41);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2();
    L2():
      j12 = ld j;
      j13 = force? j12;
      __11 = ldf `[` in base;
      r255 = dyn __11(x41, <missing>, j13);
      goto L0(r255);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx34);
    };
    p33 = prom<V +>{
      x44 = ld x;
      x45 = force? x44;
      checkMissing(x45);
      c159 = `is.object`(x45);
      if c159 then L1() else L2();
    L0(dx37):
      return dx37;
    L1():
      dr34 = tryDispatchBuiltin.1("[", x45);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2();
    L2():
      i154 = ld i;
      i155 = force? i154;
      __12 = ldf `[` in base;
      r257 = dyn __12(x45, <missing>, i155);
      goto L0(r257);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx36);
    };
    ddd3 = ld `...`;
    r259 = dyn localAxis[, , , `...`](3, p32, p33, ddd3);
    check L487() else D134();
  L489():
    i159 = force? i158;
    checkMissing(i159);
    iSet8 = ld iSet;
    check L490() else D136();
  D131():
    deopt 518 [i129, i130, c133, c136, has_upper4];
  D134():
    deopt 533 [i134, i135, r259];
  D136():
    deopt 537 [i156, i157, i159, iSet8];
  L125(i142, i143, c146, c147):
    c154 = `as.logical`(c147);
    c155 = `&&`(c146, c154);
    goto L123(i142, i143, c155);
  L479():
    has_upper5 = force? has_upper4;
    checkMissing(has_upper5);
    r253 = `!`(has_upper5);
    c141 = `as.logical`(r253);
    c142 = `||`(c136, c141);
    goto L124(i129, i130, c133, c142);
  L481():
    has_lower4 = ld `has.lower`;
    check L482() else D132();
  L487():
    goto L127(i134, i135);
  L490():
    iSet9 = force? iSet8;
    checkMissing(iSet9);
    c160 = `is.object`(iSet9);
    if c160 then L491() else L492(i156, i157, i159, iSet9);
  D132():
    deopt 522 [i136, i137, c137, c145, has_lower4];
  L128(i169, i170, i171, dx39):
    r262 = `==`(i171, dx39);
    c161 = `as.logical`(r262);
    if c161 then L495() else L129(i169, i170, c161);
  L482():
    has_lower5 = force? has_lower4;
    checkMissing(has_lower5);
    r254 = `!`(has_lower5);
    c150 = `as.logical`(r254);
    c151 = `||`(c145, c150);
    goto L125(i136, i137, c137, c151);
  L491():
    dr36 = tryDispatchBuiltin.1("[", iSet9);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L493() else L492(i156, i157, i159, dr36);
  L492(i163, i164, i165, iSet11):
    ni = ld ni;
    check L494() else D137();
  D137():
    deopt 539 [i163, i164, i165, iSet11, ni];
  L129(i174, i175, c163):
    c185 = `as.logical`(c163);
    if c185 then L504() else L132();
  L493():
    dx38 = getTryDispatchBuiltinValue(dr36);
    goto L128(i156, i157, i159, dx38);
  L494():
    ni1 = force? ni;
    __13 = ldf `[` in base;
    r261 = dyn __13(iSet11, ni1);
    goto L128(i163, i164, i165, r261);
  L495():
    j_odd2 = ld `j.odd`;
    check L496() else D138();
  D138():
    deopt 543 [i169, i170, c161, j_odd2];
  L132():
    goto L133(i174, i175);
  L133(i196, i197):
    j16 = ld j;
    check L508() else D143();
  L496():
    j_odd3 = force? j_odd2;
    checkMissing(j_odd3);
    c164 = `as.logical`(j_odd3);
    if c164 then L130(i169, i170, c161, c164) else L497();
  L504():
    localAxis1 = ldf localAxis;
    check L505() else D141();
  D141():
    deopt 555 [i174, i175];
  D143():
    deopt 563 [i196, i197, j16];
  L130(i176, i177, c165, c166):
    c173 = `as.logical`(c166);
    if c173 then L131(i176, i177, c165, c173) else L500();
  L497():
    has_upper6 = ld `has.upper`;
    check L498() else D139();
  L505():
    p34 = prom<V +>{
      x48 = ld x;
      x49 = force? x48;
      checkMissing(x49);
      c186 = `is.object`(x49);
      if c186 then L1() else L2();
    L0(dx41):
      return dx41;
    L1():
      dr38 = tryDispatchBuiltin.1("[", x49);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2();
    L2():
      j14 = ld j;
      j15 = force? j14;
      __14 = ldf `[` in base;
      r265 = dyn __14(x49, <missing>, j15);
      goto L0(r265);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx40);
    };
    p35 = prom<V +>{
      x52 = ld x;
      x53 = force? x52;
      checkMissing(x53);
      c187 = `is.object`(x53);
      if c187 then L1() else L2();
    L0(dx43):
      return dx43;
    L1():
      dr40 = tryDispatchBuiltin.1("[", x53);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2();
    L2():
      i194 = ld i;
      i195 = force? i194;
      __15 = ldf `[` in base;
      r267 = dyn __15(x53, <missing>, i195);
      goto L0(r267);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx42);
    };
    ddd4 = ld `...`;
    r269 = dyn localAxis1[, , , `...`](1, p34, p35, ddd4);
    check L506() else D142();
  L508():
    j17 = force? j16;
    checkMissing(j17);
    jSet4 = ld jSet;
    check L509() else D144();
  D139():
    deopt 545 [i169, i170, c161, c164, has_upper6];
  D142():
    deopt 560 [i174, i175, r269];
  D144():
    deopt 564 [i196, i197, j17, jSet4];
  L131(i182, i183, c174, c175):
    c182 = `as.logical`(c175);
    c183 = `&&`(c174, c182);
    goto L129(i182, i183, c183);
  L498():
    has_upper7 = force? has_upper6;
    checkMissing(has_upper7);
    r263 = `!`(has_upper7);
    c169 = `as.logical`(r263);
    c170 = `||`(c164, c169);
    goto L130(i169, i170, c161, c170);
  L500():
    has_lower6 = ld `has.lower`;
    check L501() else D140();
  L506():
    goto L133(i174, i175);
  L509():
    jSet5 = force? jSet4;
    checkMissing(jSet5);
    c188 = `is.object`(jSet5);
    if c188 then L510() else L511(i196, i197, j17, jSet5);
  D140():
    deopt 549 [i176, i177, c165, c173, has_lower6];
  L134(i204, i205, j21, dx45):
    r272 = `==`(j21, dx45);
    c189 = `as.logical`(r272);
    if c189 then L513() else L135(i204, i205, c189);
  L501():
    has_lower7 = force? has_lower6;
    checkMissing(has_lower7);
    r264 = `!`(has_lower7);
    c178 = `as.logical`(r264);
    c179 = `||`(c173, c178);
    goto L131(i176, i177, c165, c179);
  L510():
    dr42 = tryDispatchBuiltin.1("[", jSet5);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L512() else L511(i196, i197, j17, dr42);
  L511(i200, i201, j19, jSet7):
    __16 = ldf `[` in base;
    r271 = dyn __16(jSet7, 1);
    goto L134(i200, i201, j19, r271);
  L135(i208, i209, c191):
    c213 = `as.logical`(c191);
    if c213 then L522() else L138();
  L512():
    dx44 = getTryDispatchBuiltinValue(dr42);
    goto L134(i196, i197, j17, dx44);
  L513():
    i_odd = ld `i.odd`;
    check L514() else D145();
  D145():
    deopt 570 [i204, i205, c189, i_odd];
  L138():
    goto L139(i208, i209);
  L139(i230, i231):
    j24 = ld j;
    check L526() else D150();
  L514():
    i_odd1 = force? i_odd;
    checkMissing(i_odd1);
    r273 = `!`(i_odd1);
    c192 = `as.logical`(r273);
    if c192 then L136(i204, i205, c189, c192) else L515();
  L522():
    localAxis2 = ldf localAxis;
    check L523() else D148();
  D148():
    deopt 583 [i208, i209];
  D150():
    deopt 591 [i230, i231, j24];
  L136(i210, i211, c193, c194):
    c201 = `as.logical`(c194);
    if c201 then L137(i210, i211, c193, c201) else L518();
  L515():
    has_upper8 = ld `has.upper`;
    check L516() else D146();
  L523():
    p36 = prom<V +>{
      x56 = ld x;
      x57 = force? x56;
      checkMissing(x57);
      c214 = `is.object`(x57);
      if c214 then L1() else L2();
    L0(dx47):
      return dx47;
    L1():
      dr44 = tryDispatchBuiltin.1("[", x57);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2();
    L2():
      j22 = ld j;
      j23 = force? j22;
      __17 = ldf `[` in base;
      r276 = dyn __17(x57, <missing>, j23);
      goto L0(r276);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx46);
    };
    p37 = prom<V +>{
      x60 = ld x;
      x61 = force? x60;
      checkMissing(x61);
      c215 = `is.object`(x61);
      if c215 then L1() else L2();
    L0(dx49):
      return dx49;
    L1():
      dr46 = tryDispatchBuiltin.1("[", x61);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2();
    L2():
      i228 = ld i;
      i229 = force? i228;
      __18 = ldf `[` in base;
      r278 = dyn __18(x61, <missing>, i229);
      goto L0(r278);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx48);
    };
    ddd5 = ld `...`;
    r280 = dyn localAxis2[, , , `...`](2, p36, p37, ddd5);
    check L524() else D149();
  L526():
    j25 = force? j24;
    checkMissing(j25);
    jSet8 = ld jSet;
    check L527() else D151();
  D146():
    deopt 573 [i204, i205, c189, c192, has_upper8];
  D149():
    deopt 588 [i208, i209, r280];
  D151():
    deopt 592 [i230, i231, j25, jSet8];
  L137(i216, i217, c202, c203):
    c210 = `as.logical`(c203);
    c211 = `&&`(c202, c210);
    goto L135(i216, i217, c211);
  L516():
    has_upper9 = force? has_upper8;
    checkMissing(has_upper9);
    r274 = `!`(has_upper9);
    c197 = `as.logical`(r274);
    c198 = `||`(c192, c197);
    goto L136(i204, i205, c189, c198);
  L518():
    has_lower8 = ld `has.lower`;
    check L519() else D147();
  L524():
    goto L139(i208, i209);
  L527():
    jSet9 = force? jSet8;
    checkMissing(jSet9);
    c216 = `is.object`(jSet9);
    if c216 then L528() else L529(i230, i231, j25, jSet9);
  D147():
    deopt 577 [i210, i211, c193, c201, has_lower8];
  L140(i238, i239, j29, dx51):
    r283 = `==`(j29, dx51);
    c217 = `as.logical`(r283);
    if c217 then L532() else L141(i238, i239, c217);
  L519():
    has_lower9 = force? has_lower8;
    checkMissing(has_lower9);
    r275 = `!`(has_lower9);
    c206 = `as.logical`(r275);
    c207 = `||`(c201, c206);
    goto L137(i210, i211, c193, c207);
  L528():
    dr48 = tryDispatchBuiltin.1("[", jSet9);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L530() else L529(i230, i231, j25, dr48);
  L529(i234, i235, j27, jSet11):
    nj = ld nj;
    check L531() else D152();
  D152():
    deopt 594 [i234, i235, j27, jSet11, nj];
  L141(i242, i243, c219):
    c241 = `as.logical`(c219);
    if c241 then L541() else L144();
  L530():
    dx50 = getTryDispatchBuiltinValue(dr48);
    goto L140(i230, i231, j25, dx50);
  L531():
    nj1 = force? nj;
    __19 = ldf `[` in base;
    r282 = dyn __19(jSet11, nj1);
    goto L140(i234, i235, j27, r282);
  L532():
    i_odd2 = ld `i.odd`;
    check L533() else D153();
  D153():
    deopt 598 [i238, i239, c217, i_odd2];
  L144():
    goto L145(i242, i243);
  L145(i264, i265):
    par1 = ldf par;
    check L545() else D158();
  L533():
    i_odd3 = force? i_odd2;
    checkMissing(i_odd3);
    c220 = `as.logical`(i_odd3);
    if c220 then L142(i238, i239, c217, c220) else L534();
  L541():
    localAxis3 = ldf localAxis;
    check L542() else D156();
  D156():
    deopt 610 [i242, i243];
  D158():
    deopt 619 [i264, i265];
  L142(i244, i245, c221, c222):
    c229 = `as.logical`(c222);
    if c229 then L143(i244, i245, c221, c229) else L537();
  L534():
    has_upper10 = ld `has.upper`;
    check L535() else D154();
  L542():
    p38 = prom<V +>{
      x64 = ld x;
      x65 = force? x64;
      checkMissing(x65);
      c242 = `is.object`(x65);
      if c242 then L1() else L2();
    L0(dx53):
      return dx53;
    L1():
      dr50 = tryDispatchBuiltin.1("[", x65);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2();
    L2():
      j30 = ld j;
      j31 = force? j30;
      __20 = ldf `[` in base;
      r286 = dyn __20(x65, <missing>, j31);
      goto L0(r286);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx52);
    };
    p39 = prom<V +>{
      x68 = ld x;
      x69 = force? x68;
      checkMissing(x69);
      c243 = `is.object`(x69);
      if c243 then L1() else L2();
    L0(dx55):
      return dx55;
    L1():
      dr52 = tryDispatchBuiltin.1("[", x69);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2();
    L2():
      i262 = ld i;
      i263 = force? i262;
      __21 = ldf `[` in base;
      r288 = dyn __21(x69, <missing>, i263);
      goto L0(r288);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx54);
    };
    ddd6 = ld `...`;
    r290 = dyn localAxis3[, , , `...`](4, p38, p39, ddd6);
    check L543() else D157();
  L545():
    r292 = dyn par1("mfg");
    check L546() else D159();
  D154():
    deopt 600 [i238, i239, c217, c220, has_upper10];
  D157():
    deopt 615 [i242, i243, r290];
  D159():
    deopt 621 [i264, i265, r292];
  L143(i250, i251, c230, c231):
    c238 = `as.logical`(c231);
    c239 = `&&`(c230, c238);
    goto L141(i250, i251, c239);
  L535():
    has_upper11 = force? has_upper10;
    checkMissing(has_upper11);
    r284 = `!`(has_upper11);
    c225 = `as.logical`(r284);
    c226 = `||`(c220, c225);
    goto L142(i238, i239, c217, c226);
  L537():
    has_lower10 = ld `has.lower`;
    check L538() else D155();
  L543():
    goto L145(i242, i243);
  L546():
    st mfg = r292;
    i266 = ld i;
    check L547() else D160();
  D155():
    deopt 604 [i244, i245, c221, c229, has_lower10];
  D160():
    deopt 623 [i264, i265, i266];
  L538():
    has_lower11 = force? has_lower10;
    checkMissing(has_lower11);
    r285 = `!`(has_lower11);
    c234 = `as.logical`(r285);
    c235 = `||`(c229, c234);
    goto L143(i244, i245, c221, c235);
  L547():
    i267 = force? i266;
    checkMissing(i267);
    j32 = ld j;
    check L548() else D161();
  D161():
    deopt 624 [i264, i265, i267, j32];
  L548():
    j33 = force? j32;
    checkMissing(j33);
    r293 = `==`(i267, j33);
    c244 = `as.logical`(r293);
    if c244 then L549() else L146();
  L146():
    i350 = ld i;
    check L596() else D183();
  L163(i348, i349):
    sym42 = ldf any;
    base42 = ldf any in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L604() else L605();
  L549():
    has_diag2 = ld `has.diag`;
    check L550() else D162();
  D162():
    deopt 627 [i264, i265, has_diag2];
  D183():
    deopt 708 [i264, i265, i350];
  L165(i364, i365, r357):
    c261 = `as.logical`(r357);
    if c261 then L610() else L166();
  L550():
    has_diag3 = force? has_diag2;
    checkMissing(has_diag3);
    c245 = `as.logical`(has_diag3);
    if c245 then L551() else L147();
  L596():
    i351 = force? i350;
    checkMissing(i351);
    j36 = ld j;
    check L597() else D184();
  L604():
    par3 = ldf par;
    check L606() else D189();
  L605():
    r356 = dyn base42(<lang `!=`(par("mfg"), mfg)>);
    goto L165(i348, i349, r356);
  D184():
    deopt 709 [i264, i265, i351, j36];
  D189():
    deopt 727 [i348, i349];
  L147():
    goto L148(i264, i265);
  L148(i278, i279):
    doText2 = ld doText;
    check L555() else D165();
  L166():
    goto L167(i364, i365, NULL);
  L167(i370, i371, r362):
    goto L168(i370, i371);
  L551():
    localDiagPanel = ldf localDiagPanel;
    check L552() else D163();
  L597():
    j37 = force? j36;
    checkMissing(j37);
    r337 = `<`(i351, j37);
    c256 = `as.logical`(r337);
    if c256 then L598() else L164();
  L606():
    r358 = dyn par3("mfg");
    check L607() else D190();
  L610():
    stop5 = ldf stop;
    check L611() else D193();
  D163():
    deopt 630 [i264, i265];
  D165():
    deopt 636 [i278, i279, doText2];
  D190():
    deopt 729 [i348, i349, r358];
  D193():
    deopt 735 [i364, i365];
  L164():
    localUpperPanel = ldf localUpperPanel;
    check L602() else D187();
  L552():
    p41 = prom<V +>{
      as_vector = ldf `as.vector`;
      p40 = prom<V +>{
        x72 = ld x;
        x73 = force? x72;
        checkMissing(x73);
        c246 = `is.object`(x73);
        if c246 then L1() else L2();
      L0(dx57):
        return dx57;
      L1():
        dr54 = tryDispatchBuiltin.1("[", x73);
        dc27 = getTryDispatchBuiltinDispatched(dr54);
        if dc27 then L3() else L2();
      L2():
        i276 = ld i;
        i277 = force? i276;
        __22 = ldf `[` in base;
        r294 = dyn __22(x73, <missing>, i277);
        goto L0(r294);
      L3():
        dx56 = getTryDispatchBuiltinValue(dr54);
        goto L0(dx56);
      };
      r296 = dyn as_vector(p40);
      return r296;
    };
    ddd7 = ld `...`;
    r298 = dyn localDiagPanel[, `...`](p41, ddd7);
    check L553() else D164();
  L555():
    doText3 = force? doText2;
    checkMissing(doText3);
    c247 = `as.logical`(doText3);
    if c247 then L556() else L149();
  L598():
    localLowerPanel = ldf localLowerPanel;
    check L599() else D185();
  L607():
    mfg = ld mfg;
    check L608() else D191();
  L611():
    r361 = dyn stop5("the 'panel' function made a new plot");
    check L612() else D194();
  D164():
    deopt 633 [i264, i265, r298];
  D185():
    deopt 713 [i264, i265];
  D187():
    deopt 719 [i264, i265];
  D191():
    deopt 729 [i348, i349, r358, mfg];
  D194():
    deopt 737 [i364, i365, r361];
  L149():
    goto L162(i278, i279, NULL);
  L162(i346, i347, r335):
    goto L163(i346, i347);
  L553():
    goto L148(i264, i265);
  L556():
    par2 = ldf par;
    check L557() else D166();
  L599():
    p50 = prom<V +>{
      as_vector1 = ldf `as.vector`;
      p49 = prom<V +>{
        x76 = ld x;
        x77 = force? x76;
        checkMissing(x77);
        c257 = `is.object`(x77);
        if c257 then L1() else L2();
      L0(dx65):
        return dx65;
      L1():
        dr62 = tryDispatchBuiltin.1("[", x77);
        dc31 = getTryDispatchBuiltinDispatched(dr62);
        if dc31 then L3() else L2();
      L2():
        j38 = ld j;
        j39 = force? j38;
        __26 = ldf `[` in base;
        r338 = dyn __26(x77, <missing>, j39);
        goto L0(r338);
      L3():
        dx64 = getTryDispatchBuiltinValue(dr62);
        goto L0(dx64);
      };
      r340 = dyn as_vector1(p49);
      return r340;
    };
    p52 = prom<V +>{
      as_vector2 = ldf `as.vector`;
      p51 = prom<V +>{
        x80 = ld x;
        x81 = force? x80;
        checkMissing(x81);
        c258 = `is.object`(x81);
        if c258 then L1() else L2();
      L0(dx67):
        return dx67;
      L1():
        dr64 = tryDispatchBuiltin.1("[", x81);
        dc32 = getTryDispatchBuiltinDispatched(dr64);
        if dc32 then L3() else L2();
      L2():
        i356 = ld i;
        i357 = force? i356;
        __27 = ldf `[` in base;
        r342 = dyn __27(x81, <missing>, i357);
        goto L0(r342);
      L3():
        dx66 = getTryDispatchBuiltinValue(dr64);
        goto L0(dx66);
      };
      r344 = dyn as_vector2(p51);
      return r344;
    };
    ddd8 = ld `...`;
    r346 = dyn localLowerPanel[, , `...`](p50, p52, ddd8);
    check L600() else D186();
  L602():
    p54 = prom<V +>{
      as_vector3 = ldf `as.vector`;
      p53 = prom<V +>{
        x84 = ld x;
        x85 = force? x84;
        checkMissing(x85);
        c259 = `is.object`(x85);
        if c259 then L1() else L2();
      L0(dx69):
        return dx69;
      L1():
        dr66 = tryDispatchBuiltin.1("[", x85);
        dc33 = getTryDispatchBuiltinDispatched(dr66);
        if dc33 then L3() else L2();
      L2():
        j40 = ld j;
        j41 = force? j40;
        __28 = ldf `[` in base;
        r347 = dyn __28(x85, <missing>, j41);
        goto L0(r347);
      L3():
        dx68 = getTryDispatchBuiltinValue(dr66);
        goto L0(dx68);
      };
      r349 = dyn as_vector3(p53);
      return r349;
    };
    p56 = prom<V +>{
      as_vector4 = ldf `as.vector`;
      p55 = prom<V +>{
        x88 = ld x;
        x89 = force? x88;
        checkMissing(x89);
        c260 = `is.object`(x89);
        if c260 then L1() else L2();
      L0(dx71):
        return dx71;
      L1():
        dr68 = tryDispatchBuiltin.1("[", x89);
        dc34 = getTryDispatchBuiltinDispatched(dr68);
        if dc34 then L3() else L2();
      L2():
        i358 = ld i;
        i359 = force? i358;
        __29 = ldf `[` in base;
        r351 = dyn __29(x89, <missing>, i359);
        goto L0(r351);
      L3():
        dx70 = getTryDispatchBuiltinValue(dr68);
        goto L0(dx70);
      };
      r353 = dyn as_vector4(p55);
      return r353;
    };
    ddd9 = ld `...`;
    r355 = dyn localUpperPanel[, , `...`](p54, p56, ddd9);
    check L603() else D188();
  L608():
    mfg1 = force? mfg;
    checkMissing(mfg1);
    r359 = `!=`(r358, mfg1);
    any = ldf any in base;
    r360 = dyn any(r359);
    check L609() else D192();
  L612():
    goto L167(i364, i365, r361);
  D166():
    deopt 639 [i278, i279];
  D186():
    deopt 717 [i264, i265, r346];
  D188():
    deopt 723 [i264, i265, r355];
  D192():
    deopt 733 [i348, i349, r360];
  L557():
    p42 = prom<V +>{
      sym37 = ldf c;
      base37 = ldf c in base;
      guard37 = `==`.4(sym37, base37);
      if guard37 then L1() else L2();
    L0(r301):
      return r301;
    L1():
      c248 = ldf c in base;
      r302 = dyn c248(0.0, 1.0, 0.0, 1.0);
      goto L0(r302);
    L2():
      r300 = dyn base37(0.0, 1.0, 0.0, 1.0);
      goto L0(r300);
    };
    r304 = dyn par2[usr](p42);
    check L558() else D167();
  L600():
    goto L163(i264, i265);
  L603():
    goto L163(i264, i265);
  L609():
    goto L165(i348, i349, r360);
  D167():
    deopt 642 [i278, i279, r304];
  L558():
    sym38 = ldf `is.null`;
    base38 = ldf `is.null` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L559() else L560();
  L150(i288, i289, r306):
    c250 = `as.logical`(r306);
    if c250 then L562() else L151();
  L559():
    cex_labels1 = ld `cex.labels`;
    check L561() else D168();
  L560():
    r305 = dyn base38(<sym cex.labels>);
    goto L150(i278, i279, r305);
  D168():
    deopt 644 [i278, i279, cex_labels1];
  L151():
    goto L155(i288, i289);
  L155(i312, i313):
    xl4 = ld xl;
    check L576() else D175();
  L561():
    cex_labels2 = force? cex_labels1;
    checkMissing(cex_labels2);
    c249 = `==`(cex_labels2, NULL);
    goto L150(i278, i279, c249);
  L562():
    strwidth = ldf strwidth;
    check L563() else D169();
  D169():
    deopt 648 [i288, i289];
  D175():
    deopt 674 [i312, i313, xl4];
  L563():
    p43 = prom<V +>{
      labels5 = ld labels;
      labels6 = force? labels5;
      checkMissing(labels6);
      return labels6;
    };
    r308 = dyn strwidth(p43, "user");
    check L564() else D170();
  L576():
    xl5 = force? xl4;
    checkMissing(xl5);
    c251 = `is.object`(xl5);
    if c251 then L577() else L578(i312, i313, xl5);
  D170():
    deopt 651 [i288, i289, r308];
  L156(i320, i321, dx59):
    c252 = `as.logical`(dx59);
    if c252 then L581() else L157();
  L564():
    st `l.wid` = r308;
    sym39 = ldf max;
    base39 = ldf max in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L565() else L566();
  L577():
    dr56 = tryDispatchBuiltin.1("[", xl5);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L579() else L578(i312, i313, dr56);
  L578(i316, i317, xl7):
    i322 = ld i;
    check L580() else D176();
  D176():
    deopt 676 [i316, i317, xl7, i322];
  L152(i298, i299, r310):
    st `cex.labels` = r310;
    goto L155(i298, i299);
  L157():
    goto L158(i320, i321, 0.5);
  L158(i328, i329, r324):
    st xlp = r324;
    yl4 = ld yl;
    check L583() else D177();
  L565():
    sym40 = ldf min;
    base40 = ldf min in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L567() else L568();
  L566():
    r309 = dyn base39(0.8, <lang min(2.0, `/`(0.9, max(l.wid)))>);
    goto L152(i288, i289, r309);
  L579():
    dx58 = getTryDispatchBuiltinValue(dr56);
    goto L156(i312, i313, dx58);
  L580():
    i323 = force? i322;
    __23 = ldf `[` in base;
    r323 = dyn __23(xl7, i323);
    goto L156(i316, i317, r323);
  L581():
    goto L158(i320, i321, 3.1622776601683795);
  D177():
    deopt 684 [i328, i329, yl4];
  L153(i304, i305, r312):
    max1 = ldf max in base;
    r321 = dyn max1(0.8, r312);
    check L574() else D174();
  L567():
    sym41 = ldf max;
    base41 = ldf max in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L569() else L570();
  L568():
    r311 = dyn base40(2.0, <lang `/`(0.9, max(l.wid))>);
    goto L153(i288, i289, r311);
  L583():
    yl5 = force? yl4;
    checkMissing(yl5);
    c253 = `is.object`(yl5);
    if c253 then L584() else L585(i328, i329, yl5);
  D174():
    deopt 670 [i304, i305, r321];
  L154(i310, i311, r316, r317):
    r319 = `/`(r316, r317);
    min = ldf min in base;
    r320 = dyn min(2.0, r319);
    check L573() else D173();
  L159(i336, i337, dx61):
    c254 = `as.logical`(dx61);
    if c254 then L588() else L160();
  L569():
    l_wid = ld `l.wid`;
    check L571() else D171();
  L570():
    r315 = dyn base41(<sym l.wid>);
    goto L154(i288, i289, 0.9, r315);
  L574():
    goto L152(i304, i305, r321);
  L584():
    dr58 = tryDispatchBuiltin.1("[", yl5);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L586() else L585(i328, i329, dr58);
  L585(i332, i333, yl7):
    j34 = ld j;
    check L587() else D178();
  D171():
    deopt 662 [i288, i289, 0.9, l_wid];
  D173():
    deopt 668 [i310, i311, r320];
  D178():
    deopt 686 [i332, i333, yl7, j34];
  L160():
    label_pos3 = ld `label.pos`;
    check L591() else D180();
  L161(i342, i343, r327):
    st ylp = r327;
    text_panel3 = ldf `text.panel`;
    check L592() else D181();
  L571():
    l_wid1 = force? l_wid;
    checkMissing(l_wid1);
    max = ldf max in base;
    r318 = dyn max(l_wid1);
    check L572() else D172();
  L573():
    goto L153(i310, i311, r320);
  L586():
    dx60 = getTryDispatchBuiltinValue(dr58);
    goto L159(i328, i329, dx60);
  L587():
    j35 = force? j34;
    __24 = ldf `[` in base;
    r325 = dyn __24(yl7, j35);
    goto L159(i332, i333, r325);
  L588():
    label_pos1 = ld `label.pos`;
    check L589() else D179();
  D172():
    deopt 665 [i288, i289, 0.9, r318];
  D179():
    deopt 690 [i336, i337, 10.0, label_pos1];
  D180():
    deopt 693 [i336, i337, label_pos3];
  D181():
    deopt 697 [i342, i343];
  L572():
    goto L154(i288, i289, 0.9, r318);
  L589():
    label_pos2 = force? label_pos1;
    checkMissing(label_pos2);
    r326 = `^`(10.0, label_pos2);
    goto L161(i336, i337, r326);
  L591():
    label_pos4 = force? label_pos3;
    checkMissing(label_pos4);
    goto L161(i336, i337, label_pos4);
  L592():
    p44 = prom<V +>{
      xlp = ld xlp;
      xlp1 = force? xlp;
      checkMissing(xlp1);
      return xlp1;
    };
    p45 = prom<V +>{
      ylp = ld ylp;
      ylp1 = force? ylp;
      checkMissing(ylp1);
      return ylp1;
    };
    p46 = prom<V +>{
      labels7 = ld labels;
      labels8 = force? labels7;
      checkMissing(labels8);
      c255 = `is.object`(labels8);
      if c255 then L1() else L2(labels8);
    L0(dx63):
      return dx63;
    L1():
      dr60 = tryDispatchBuiltin.1("[", labels8);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2(dr60);
    L2(labels10):
      i344 = ld i;
      i345 = force? i344;
      __25 = ldf `[` in base;
      r330 = dyn __25(labels10, i345);
      goto L0(r330);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx62);
    };
    p47 = prom<V +>{
      cex_labels3 = ld `cex.labels`;
      cex_labels4 = force? cex_labels3;
      checkMissing(cex_labels4);
      return cex_labels4;
    };
    p48 = prom<V +>{
      font_labels1 = ld `font.labels`;
      font_labels2 = force? font_labels1;
      checkMissing(font_labels2);
      return font_labels2;
    };
    r334 = dyn text_panel3[, , , cex, font](p44, p45, p46, p47, p48);
    check L593() else D182();
  D182():
    deopt 705 [i342, i343, r334];
  L593():
    goto L162(i342, i343, r334);
  }
}
fun inner4249214614(x, y, txt, cex, font) {
  (reg x:*, reg y:*, reg txt:*, reg cex:*, reg font:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var txt:*, var cex:*, var font:*, reg text:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg txt1:*, reg txt2:V, reg p2:p(V +), reg cex1:*, reg cex2:V, reg p3:p(V +), reg font1:*, reg font2:V, reg p4:p(V +), reg r5:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0(0.5) else L0(x);
  L0(x_orDefault):
    st x = x_orDefault;
    y_isMissing = missing.0(y);
    if y_isMissing then L1(0.5) else L1(y);
  L1(y_orDefault):
    st y = y_orDefault;
    st txt = txt;
    st cex = cex;
    st font = font;
    text = ldf text;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p2 = prom<V +>{
      txt1 = ld txt;
      txt2 = force? txt1;
      checkMissing(txt2);
      return txt2;
    };
    p3 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    p4 = prom<V +>{
      font1 = ld font;
      font2 = force? font1;
      checkMissing(font2);
      return font2;
    };
    r5 = dyn text[, , , cex, font](p, p1, p2, p3, p4);
    check L3() else D1();
  D1():
    deopt 9 [r5];
  L3():
    popenv;
    return r5;
  }
}
fun inner4140415173(side, x, y, xpd, bg, col, main, oma, `...`) {
  (reg side:*, reg x:*, reg y:*, reg xpd:*, reg bg:*, reg col:*, reg main:*, reg oma:*, reg ddd:dots) -+> V { var side:*, var x:*, var y:*, var xpd:*, var bg:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var main:*, var oma:*, var `...`:dots?, reg side1:*, reg side2:V, reg __:cls, reg r:V, reg r1:V, reg c:L, reg c2:V, reg xl:*, reg xl1:V, reg c3:L, reg c5:L, reg xl3:V, reg dr:V, reg dc:L, reg dx:V, reg c7:L, reg dx1:V, reg j:*, reg j1:V, reg __1:cls, reg r2:V, reg c8:L, reg c9:V, reg c11:L, reg side3:*, reg side4:V, reg __2:cls, reg r4:V, reg r5:V, reg c12:L, reg c14:V, reg yl:*, reg yl1:V, reg c15:L, reg c17:L, reg yl3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c19:L, reg dx3:V, reg i:*, reg i1:V, reg __3:cls, reg r6:V, reg c20:L, reg c21:V, reg c23:L, reg side5:*, reg side6:V, reg __4:cls, reg r8:V, reg r9:V, reg c24:L, reg Axis:cls, reg x1:*, reg x2:V, reg p:p(V +), reg side7:*, reg side8:V, reg p1:p(V +), reg xpd1:*, reg xpd2:V, reg p2:p(V +), reg ddd1:dots?, reg r13:V, reg Axis1:cls, reg y1:*, reg y2:V, reg p3:p(V +), reg side9:*, reg side10:V, reg p4:p(V +), reg xpd3:*, reg xpd4:V, reg p5:p(V +), reg ddd2:dots?, reg r17:V |
    mkenv;
    st side = side;
    st x = x;
    st y = y;
    st xpd = xpd;
    st bg = bg;
    col_isMissing = missing.0(col);
    if col_isMissing then L0(NULL) else L0(col);
  L0(col_orDefault):
    st col = col_orDefault;
    st main = main;
    st oma = oma;
    st `...` = ddd;
    st xpd = NA_LGL;
    side1 = ld side;
    check L10() else D0();
  D0():
    deopt 4 [side1];
  L10():
    side2 = force? side1;
    checkMissing(side2);
    __ = ldf `%%` in base;
    r = dyn __(side2, 2);
    check L11() else D1();
  D1():
    deopt 8 [r];
  L11():
    r1 = `==`(r, 1);
    c = `as.logical`(r1);
    if c then L12() else L1(c);
  L1(c2):
    c11 = `as.logical`(c2);
    if c11 then L19() else L3();
  L12():
    xl = ld xl;
    check L13() else D2();
  D2():
    deopt 11 [c, xl];
  L3():
    goto L4();
  L4():
    side3 = ld side;
    check L21() else D4();
  L13():
    xl1 = force? xl;
    checkMissing(xl1);
    c3 = `is.object`(xl1);
    if c3 then L14() else L15(c, xl1);
  L19():
    st xpd = FALSE;
    goto L4();
  D4():
    deopt 23 [side3];
  L2(c7, dx1):
    c8 = `as.logical`(dx1);
    c9 = `&&`(c7, c8);
    goto L1(c9);
  L14():
    dr = tryDispatchBuiltin.1("[", xl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(c, dr);
  L15(c5, xl3):
    j = ld j;
    check L17() else D3();
  L21():
    side4 = force? side3;
    checkMissing(side4);
    __2 = ldf `%%` in base;
    r4 = dyn __2(side4, 2);
    check L22() else D5();
  D3():
    deopt 13 [c5, xl3, j];
  D5():
    deopt 27 [r4];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(c, dx);
  L17():
    j1 = force? j;
    __1 = ldf `[` in base;
    r2 = dyn __1(xl3, j1);
    goto L2(c5, r2);
  L22():
    r5 = `==`(r4, 0);
    c12 = `as.logical`(r5);
    if c12 then L23() else L5(c12);
  L5(c14):
    c23 = `as.logical`(c14);
    if c23 then L30() else L7();
  L23():
    yl = ld yl;
    check L24() else D6();
  D6():
    deopt 30 [c12, yl];
  L7():
    goto L8();
  L8():
    side5 = ld side;
    check L32() else D8();
  L24():
    yl1 = force? yl;
    checkMissing(yl1);
    c15 = `is.object`(yl1);
    if c15 then L25() else L26(c12, yl1);
  L30():
    st xpd = FALSE;
    goto L8();
  D8():
    deopt 42 [side5];
  L6(c19, dx3):
    c20 = `as.logical`(dx3);
    c21 = `&&`(c19, c20);
    goto L5(c21);
  L25():
    dr2 = tryDispatchBuiltin.1("[", yl1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(c12, dr2);
  L26(c17, yl3):
    i = ld i;
    check L28() else D7();
  L32():
    side6 = force? side5;
    checkMissing(side6);
    __4 = ldf `%%` in base;
    r8 = dyn __4(side6, 2);
    check L33() else D9();
  D7():
    deopt 32 [c17, yl3, i];
  D9():
    deopt 46 [r8];
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(c12, dx2);
  L28():
    i1 = force? i;
    __3 = ldf `[` in base;
    r6 = dyn __3(yl3, i1);
    goto L6(c17, r6);
  L33():
    r9 = `==`(r8, 1);
    c24 = `as.logical`(r9);
    if c24 then L34() else L9();
  L9():
    Axis1 = ldf Axis;
    check L38() else D12();
  L34():
    Axis = ldf Axis;
    check L35() else D10();
  D10():
    deopt 50 [];
  D12():
    deopt 59 [];
  L35():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      side7 = ld side;
      side8 = force? side7;
      checkMissing(side8);
      return side8;
    };
    p2 = prom<V +>{
      xpd1 = ld xpd;
      xpd2 = force? xpd1;
      checkMissing(xpd2);
      return xpd2;
    };
    ddd1 = ld `...`;
    r13 = dyn Axis[, side, xpd, `...`](p, p1, p2, ddd1);
    check L36() else D11();
  L38():
    p3 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p4 = prom<V +>{
      side9 = ld side;
      side10 = force? side9;
      checkMissing(side10);
      return side10;
    };
    p5 = prom<V +>{
      xpd3 = ld xpd;
      xpd4 = force? xpd3;
      checkMissing(xpd4);
      return xpd4;
    };
    ddd2 = ld `...`;
    r17 = dyn Axis1[, side, xpd, `...`](p3, p4, p5, ddd2);
    check L39() else D13();
  D11():
    deopt 57 [r13];
  D13():
    deopt 66 [r17];
  L36():
    popenv;
    return r13;
  L39():
    popenv;
    return r17;
  }
}
fun inner2102153841(`...`, main, oma, `font.main`, `cex.main`) {
  (reg ddd:dots, reg main:*, reg oma:*, reg font_main:*, reg cex_main:*) -+> V { var `...`:dots?, var main:*, var oma:*, var `font.main`:*, var `cex.main`:*, reg plot:cls, reg ddd1:dots?, reg r:V |
    mkenv;
    st `...` = ddd;
    st main = main;
    st oma = oma;
    st `font.main` = font_main;
    st `cex.main` = cex_main;
    plot = ldf plot;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd1 = ld `...`;
    r = dyn plot[`...`](ddd1);
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}