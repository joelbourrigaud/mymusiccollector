
prepare:
	@$(MKDIR) obj

debug: compile-debug
	$(CC) -o $(BIN_PATH)/$(MYBINARY)-debug $(OBJS)
	@echo "Linking complete!"

compile-debug: $(OBJS)
	@echo "Compile complete!"

$(OBJ_PATH)/%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean-files::
	@$(RM) -rf $(OBJ_PATH)
	@$(RM) -f $(BIN_PATH)/*
	
