using WebApplication10.Models;

namespace WebApplication10.Models
{





    public partial class Role
    {
        public int RoleId { get; set; }

        public string RoleName { get; set; } = null!;

        public virtual ICollection<AdminRole> AdminRoles { get; set; } = new List<AdminRole>();

        public virtual ICollection<UserRole> UserRoles { get; set; } = new List<UserRole>();
    }

}