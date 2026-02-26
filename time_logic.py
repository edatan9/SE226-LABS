total_seconds = int(input("Enter the total number of seconds: "))

hours = total_seconds

remaining_seconds = total_seconds % 3600

minutes = remaining_seconds

seconds = remaining_seconds % 60

print(str(total_seconds) + " seconds is " + str(hours) + " hours, " +
      str(minutes) + " minutes, and " + str(seconds) + " seconds.")